// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from jw_interface_msgs:msg/MotorRPMCommand.idl
// generated code does not contain a copyright notice

#ifndef JW_INTERFACE_MSGS__MSG__DETAIL__MOTOR_RPM_COMMAND__BUILDER_HPP_
#define JW_INTERFACE_MSGS__MSG__DETAIL__MOTOR_RPM_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "jw_interface_msgs/msg/detail/motor_rpm_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace jw_interface_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorRPMCommand_right_rpm
{
public:
  explicit Init_MotorRPMCommand_right_rpm(::jw_interface_msgs::msg::MotorRPMCommand & msg)
  : msg_(msg)
  {}
  ::jw_interface_msgs::msg::MotorRPMCommand right_rpm(::jw_interface_msgs::msg::MotorRPMCommand::_right_rpm_type arg)
  {
    msg_.right_rpm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::jw_interface_msgs::msg::MotorRPMCommand msg_;
};

class Init_MotorRPMCommand_left_rpm
{
public:
  Init_MotorRPMCommand_left_rpm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorRPMCommand_right_rpm left_rpm(::jw_interface_msgs::msg::MotorRPMCommand::_left_rpm_type arg)
  {
    msg_.left_rpm = std::move(arg);
    return Init_MotorRPMCommand_right_rpm(msg_);
  }

private:
  ::jw_interface_msgs::msg::MotorRPMCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::jw_interface_msgs::msg::MotorRPMCommand>()
{
  return jw_interface_msgs::msg::builder::Init_MotorRPMCommand_left_rpm();
}

}  // namespace jw_interface_msgs

#endif  // JW_INTERFACE_MSGS__MSG__DETAIL__MOTOR_RPM_COMMAND__BUILDER_HPP_
