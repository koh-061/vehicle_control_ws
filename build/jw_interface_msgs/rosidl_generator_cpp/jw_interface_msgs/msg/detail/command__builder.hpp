// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from jw_interface_msgs:msg/Command.idl
// generated code does not contain a copyright notice

#ifndef JW_INTERFACE_MSGS__MSG__DETAIL__COMMAND__BUILDER_HPP_
#define JW_INTERFACE_MSGS__MSG__DETAIL__COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "jw_interface_msgs/msg/detail/command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace jw_interface_msgs
{

namespace msg
{

namespace builder
{

class Init_Command_motor_rpm
{
public:
  explicit Init_Command_motor_rpm(::jw_interface_msgs::msg::Command & msg)
  : msg_(msg)
  {}
  ::jw_interface_msgs::msg::Command motor_rpm(::jw_interface_msgs::msg::Command::_motor_rpm_type arg)
  {
    msg_.motor_rpm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::jw_interface_msgs::msg::Command msg_;
};

class Init_Command_js_ad
{
public:
  explicit Init_Command_js_ad(::jw_interface_msgs::msg::Command & msg)
  : msg_(msg)
  {}
  Init_Command_motor_rpm js_ad(::jw_interface_msgs::msg::Command::_js_ad_type arg)
  {
    msg_.js_ad = std::move(arg);
    return Init_Command_motor_rpm(msg_);
  }

private:
  ::jw_interface_msgs::msg::Command msg_;
};

class Init_Command_mode
{
public:
  Init_Command_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Command_js_ad mode(::jw_interface_msgs::msg::Command::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_Command_js_ad(msg_);
  }

private:
  ::jw_interface_msgs::msg::Command msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::jw_interface_msgs::msg::Command>()
{
  return jw_interface_msgs::msg::builder::Init_Command_mode();
}

}  // namespace jw_interface_msgs

#endif  // JW_INTERFACE_MSGS__MSG__DETAIL__COMMAND__BUILDER_HPP_
