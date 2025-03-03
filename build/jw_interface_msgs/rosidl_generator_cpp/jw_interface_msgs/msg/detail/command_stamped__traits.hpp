// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from jw_interface_msgs:msg/CommandStamped.idl
// generated code does not contain a copyright notice

#ifndef JW_INTERFACE_MSGS__MSG__DETAIL__COMMAND_STAMPED__TRAITS_HPP_
#define JW_INTERFACE_MSGS__MSG__DETAIL__COMMAND_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "jw_interface_msgs/msg/detail/command_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'command'
#include "jw_interface_msgs/msg/detail/command__traits.hpp"

namespace jw_interface_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CommandStamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: command
  {
    out << "command: ";
    to_flow_style_yaml(msg.command, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CommandStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command:\n";
    to_block_style_yaml(msg.command, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CommandStamped & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace jw_interface_msgs

namespace rosidl_generator_traits
{

[[deprecated("use jw_interface_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const jw_interface_msgs::msg::CommandStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  jw_interface_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use jw_interface_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const jw_interface_msgs::msg::CommandStamped & msg)
{
  return jw_interface_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<jw_interface_msgs::msg::CommandStamped>()
{
  return "jw_interface_msgs::msg::CommandStamped";
}

template<>
inline const char * name<jw_interface_msgs::msg::CommandStamped>()
{
  return "jw_interface_msgs/msg/CommandStamped";
}

template<>
struct has_fixed_size<jw_interface_msgs::msg::CommandStamped>
  : std::integral_constant<bool, has_fixed_size<jw_interface_msgs::msg::Command>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<jw_interface_msgs::msg::CommandStamped>
  : std::integral_constant<bool, has_bounded_size<jw_interface_msgs::msg::Command>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<jw_interface_msgs::msg::CommandStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // JW_INTERFACE_MSGS__MSG__DETAIL__COMMAND_STAMPED__TRAITS_HPP_
