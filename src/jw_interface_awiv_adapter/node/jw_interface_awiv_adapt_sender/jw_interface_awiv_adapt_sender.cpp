// Copyright 2022 Tier IV, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "jw_interface_awiv_adapt_sender/jw_interface_awiv_adapt_sender.hpp"

#include <memory>

JwInterfaceAWIVAdaptSender::JwInterfaceAWIVAdaptSender(const rclcpp::NodeOptions & node_options)
: Node("jw_interface_awiv_adapt_sender", node_options)
{
  using std::placeholders::_1;

  // `vehicle_info_` を削除し、wheel_base_ などの値をパラメータから取得
  wheel_base_ = this->declare_parameter<double>("wheel_base", 2.7); // 仮のデフォルト値
  wheel_tread_ = this->declare_parameter<double>("wheel_tread", 1.5); // 仮のデフォルト値
  wheel_radius_ = this->declare_parameter<double>("wheel_radius", 0.3); // 仮のデフォルト値
  steering_offset_deg_ = this->declare_parameter<double>("steering_offset_deg", 0.0);
  angular_ratio_correction_cycle_ =
    this->declare_parameter<int>("angular_ratio_correction_cycle", 0);
  angular_ratio_correction_coefficient_ =
    this->declare_parameter<int>("angular_ratio_correction_coefficient", 0);
  loop_rate_ = declare_parameter<double>("loop_rate", 50.0);
  vehicle_cmd_timeout_sec_ = declare_parameter<double>("vehicle_cmd_timeout_sec", 1.0);

  // subscriber
  control_cmd_sub_ = create_subscription<autoware_auto_control_msgs::msg::AckermannControlCommand>(
    "/control/command/control_cmd", 1,
    std::bind(&JwInterfaceAWIVAdaptSender::callbackAckermannControlCmd, this, _1));
  engage_cmd_sub_ = create_subscription<autoware_auto_vehicle_msgs::msg::Engage>(
    "/vehicle/engage", 1, std::bind(&JwInterfaceAWIVAdaptSender::callbackEngage, this, _1));
  emergency_cmd_sub_ = create_subscription<tier4_vehicle_msgs::msg::VehicleEmergencyStamped>(
    "/control/command/emergency_cmd", 1,
    std::bind(&JwInterfaceAWIVAdaptSender::callbackEmergencyCmd, this, _1));
  gear_cmd_sub_ = create_subscription<autoware_auto_vehicle_msgs::msg::GearCommand>(
    "/control/command/gear_cmd", 1,
    std::bind(&JwInterfaceAWIVAdaptSender::callbackGearCmd, this, _1));

  // publisher
  jw_command_pub_ = create_publisher<jw_interface_msgs::msg::CommandStamped>(
    "/jw/command", rclcpp::QoS{10}.transient_local());
  jw_debug_twist_pub_ = create_publisher<geometry_msgs::msg::TwistStamped>(
    "/jw/debug/command/twist", rclcpp::QoS{10}.transient_local());
  jw_engage_pub_ = create_publisher<tier4_debug_msgs::msg::BoolStamped>(
    "/jw/engage", rclcpp::QoS{10}.transient_local());

  // Timer
  const auto period_ns = rclcpp::Rate(loop_rate_).period();
  cmd_timer_ = rclcpp::create_timer(
    this, this->get_clock(), period_ns, std::bind(&JwInterfaceAWIVAdaptSender::onTimer, this));
}

void JwInterfaceAWIVAdaptSender::onTimer()
{
  const auto time_diff = this->now() - prev_vehicle_cmd_stamp_;
  if (time_diff.seconds() > vehicle_cmd_timeout_sec_) {
    publishZeroCommand();
    RCLCPP_WARN_STREAM_THROTTLE(
      this->get_logger(), *this->get_clock(), 5000 /* ms */, "vehicle_cmd is not subscribed");
  } else {
    publishCommand();
  }
}

void JwInterfaceAWIVAdaptSender::publishZeroCommand()
{
  jw_command_stamped_msg_.header.stamp = this->now();
  jw_command_stamped_msg_.command.js_ad.front_back_ratio = 0.0;
  jw_command_stamped_msg_.command.js_ad.left_right_ratio = 0.0;
  jw_command_pub_->publish(jw_command_stamped_msg_);
}

void JwInterfaceAWIVAdaptSender::publishCommand()
{
  jw_command_pub_->publish(jw_command_stamped_msg_);
}

void JwInterfaceAWIVAdaptSender::callbackAckermannControlCmd(
  const autoware_auto_control_msgs::msg::AckermannControlCommand::ConstSharedPtr msg_ptr)
{
  if (!gear_cmd_ptr_) {
    RCLCPP_WARN_STREAM(this->get_logger(), "gear command is not subscribed");
    return;
  }

  double steering_offset_rad = steering_offset_deg_ * M_PI / 180.0;
  jw_command_stamped_msg_.header.stamp = msg_ptr->stamp;

  jw_command_stamped_msg_.command.mode.mode = jw_interface_msgs::msg::ModeCommand::JS_AD_CONTROL;

  geometry_msgs::msg::Twist twist_cmd;
  twist_cmd.linear.x = msg_ptr->longitudinal.speed;
  twist_cmd.angular.z = msg_ptr->longitudinal.speed *
                        std::tan(msg_ptr->lateral.steering_tire_angle + steering_offset_rad) /
                        wheel_base_;

  int trans_ratio{0};
  int angular_ratio{0};
  if (
    !is_emergency_ &&
    gear_cmd_ptr_->command != autoware_auto_vehicle_msgs::msg::GearCommand::PARK) {
    convertSpeedToStickRatio(
      twist_cmd.linear.x, -twist_cmd.angular.z, &trans_ratio, &angular_ratio);
  }

  jw_command_stamped_msg_.command.js_ad.front_back_ratio = trans_ratio;
  jw_command_stamped_msg_.command.js_ad.left_right_ratio = angular_ratio;

  geometry_msgs::msg::TwistStamped debug_twist_msg;
  debug_twist_msg.header.stamp = msg_ptr->stamp;
  debug_twist_msg.twist = twist_cmd;
  jw_debug_twist_pub_->publish(debug_twist_msg);

  prev_vehicle_cmd_stamp_ = msg_ptr->stamp;
}

void JwInterfaceAWIVAdaptSender::callbackEngage(
  const autoware_auto_vehicle_msgs::msg::Engage::ConstSharedPtr msg_ptr)
{
  tier4_debug_msgs::msg::BoolStamped engage_msg{};
  engage_msg.stamp = msg_ptr->stamp;
  engage_msg.data = msg_ptr->engage;
  jw_engage_pub_->publish(engage_msg);
}

void JwInterfaceAWIVAdaptSender::callbackGearCmd(
  const autoware_auto_vehicle_msgs::msg::GearCommand::ConstSharedPtr msg_ptr)
{
  gear_cmd_ptr_ = std::make_shared<autoware_auto_vehicle_msgs::msg::GearCommand>(*msg_ptr);
}

void JwInterfaceAWIVAdaptSender::callbackEmergencyCmd(
  const tier4_vehicle_msgs::msg::VehicleEmergencyStamped::ConstSharedPtr msg_ptr)
{
  is_emergency_ = msg_ptr->emergency;
}

#include "rclcpp_components/register_node_macro.hpp"
RCLCPP_COMPONENTS_REGISTER_NODE(JwInterfaceAWIVAdaptSender)
