// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from jw_interface_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef JW_INTERFACE_MSGS__MSG__DETAIL__STATUS__BUILDER_HPP_
#define JW_INTERFACE_MSGS__MSG__DETAIL__STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "jw_interface_msgs/msg/detail/status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace jw_interface_msgs
{

namespace msg
{

namespace builder
{

class Init_Status_js_ad
{
public:
  explicit Init_Status_js_ad(::jw_interface_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  ::jw_interface_msgs::msg::Status js_ad(::jw_interface_msgs::msg::Status::_js_ad_type arg)
  {
    msg_.js_ad = std::move(arg);
    return std::move(msg_);
  }

private:
  ::jw_interface_msgs::msg::Status msg_;
};

class Init_Status_speed_setting
{
public:
  explicit Init_Status_speed_setting(::jw_interface_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_js_ad speed_setting(::jw_interface_msgs::msg::Status::_speed_setting_type arg)
  {
    msg_.speed_setting = std::move(arg);
    return Init_Status_js_ad(msg_);
  }

private:
  ::jw_interface_msgs::msg::Status msg_;
};

class Init_Status_battery
{
public:
  explicit Init_Status_battery(::jw_interface_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_speed_setting battery(::jw_interface_msgs::msg::Status::_battery_type arg)
  {
    msg_.battery = std::move(arg);
    return Init_Status_speed_setting(msg_);
  }

private:
  ::jw_interface_msgs::msg::Status msg_;
};

class Init_Status_motor_rpm
{
public:
  explicit Init_Status_motor_rpm(::jw_interface_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_battery motor_rpm(::jw_interface_msgs::msg::Status::_motor_rpm_type arg)
  {
    msg_.motor_rpm = std::move(arg);
    return Init_Status_battery(msg_);
  }

private:
  ::jw_interface_msgs::msg::Status msg_;
};

class Init_Status_time_stamp
{
public:
  Init_Status_time_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Status_motor_rpm time_stamp(::jw_interface_msgs::msg::Status::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return Init_Status_motor_rpm(msg_);
  }

private:
  ::jw_interface_msgs::msg::Status msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::jw_interface_msgs::msg::Status>()
{
  return jw_interface_msgs::msg::builder::Init_Status_time_stamp();
}

}  // namespace jw_interface_msgs

#endif  // JW_INTERFACE_MSGS__MSG__DETAIL__STATUS__BUILDER_HPP_
