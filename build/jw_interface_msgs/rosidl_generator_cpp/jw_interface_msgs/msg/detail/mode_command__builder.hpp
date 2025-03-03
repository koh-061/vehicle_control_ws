// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from jw_interface_msgs:msg/ModeCommand.idl
// generated code does not contain a copyright notice

#ifndef JW_INTERFACE_MSGS__MSG__DETAIL__MODE_COMMAND__BUILDER_HPP_
#define JW_INTERFACE_MSGS__MSG__DETAIL__MODE_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "jw_interface_msgs/msg/detail/mode_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace jw_interface_msgs
{

namespace msg
{

namespace builder
{

class Init_ModeCommand_mode
{
public:
  Init_ModeCommand_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::jw_interface_msgs::msg::ModeCommand mode(::jw_interface_msgs::msg::ModeCommand::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::jw_interface_msgs::msg::ModeCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::jw_interface_msgs::msg::ModeCommand>()
{
  return jw_interface_msgs::msg::builder::Init_ModeCommand_mode();
}

}  // namespace jw_interface_msgs

#endif  // JW_INTERFACE_MSGS__MSG__DETAIL__MODE_COMMAND__BUILDER_HPP_
