// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from jw_interface_msgs:msg/MotorRPMStatus.idl
// generated code does not contain a copyright notice

#ifndef JW_INTERFACE_MSGS__MSG__DETAIL__MOTOR_RPM_STATUS__BUILDER_HPP_
#define JW_INTERFACE_MSGS__MSG__DETAIL__MOTOR_RPM_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "jw_interface_msgs/msg/detail/motor_rpm_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace jw_interface_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorRPMStatus_right_rpm
{
public:
  explicit Init_MotorRPMStatus_right_rpm(::jw_interface_msgs::msg::MotorRPMStatus & msg)
  : msg_(msg)
  {}
  ::jw_interface_msgs::msg::MotorRPMStatus right_rpm(::jw_interface_msgs::msg::MotorRPMStatus::_right_rpm_type arg)
  {
    msg_.right_rpm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::jw_interface_msgs::msg::MotorRPMStatus msg_;
};

class Init_MotorRPMStatus_left_rpm
{
public:
  Init_MotorRPMStatus_left_rpm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorRPMStatus_right_rpm left_rpm(::jw_interface_msgs::msg::MotorRPMStatus::_left_rpm_type arg)
  {
    msg_.left_rpm = std::move(arg);
    return Init_MotorRPMStatus_right_rpm(msg_);
  }

private:
  ::jw_interface_msgs::msg::MotorRPMStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::jw_interface_msgs::msg::MotorRPMStatus>()
{
  return jw_interface_msgs::msg::builder::Init_MotorRPMStatus_left_rpm();
}

}  // namespace jw_interface_msgs

#endif  // JW_INTERFACE_MSGS__MSG__DETAIL__MOTOR_RPM_STATUS__BUILDER_HPP_
