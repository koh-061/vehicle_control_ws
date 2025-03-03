// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from jw_interface_msgs:msg/CommandStamped.idl
// generated code does not contain a copyright notice

#ifndef JW_INTERFACE_MSGS__MSG__DETAIL__COMMAND_STAMPED__BUILDER_HPP_
#define JW_INTERFACE_MSGS__MSG__DETAIL__COMMAND_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "jw_interface_msgs/msg/detail/command_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace jw_interface_msgs
{

namespace msg
{

namespace builder
{

class Init_CommandStamped_command
{
public:
  explicit Init_CommandStamped_command(::jw_interface_msgs::msg::CommandStamped & msg)
  : msg_(msg)
  {}
  ::jw_interface_msgs::msg::CommandStamped command(::jw_interface_msgs::msg::CommandStamped::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::jw_interface_msgs::msg::CommandStamped msg_;
};

class Init_CommandStamped_header
{
public:
  Init_CommandStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CommandStamped_command header(::jw_interface_msgs::msg::CommandStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CommandStamped_command(msg_);
  }

private:
  ::jw_interface_msgs::msg::CommandStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::jw_interface_msgs::msg::CommandStamped>()
{
  return jw_interface_msgs::msg::builder::Init_CommandStamped_header();
}

}  // namespace jw_interface_msgs

#endif  // JW_INTERFACE_MSGS__MSG__DETAIL__COMMAND_STAMPED__BUILDER_HPP_
