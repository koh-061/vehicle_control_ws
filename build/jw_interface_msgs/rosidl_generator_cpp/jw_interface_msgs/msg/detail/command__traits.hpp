// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from jw_interface_msgs:msg/Command.idl
// generated code does not contain a copyright notice

#ifndef JW_INTERFACE_MSGS__MSG__DETAIL__COMMAND__TRAITS_HPP_
#define JW_INTERFACE_MSGS__MSG__DETAIL__COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "jw_interface_msgs/msg/detail/command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'mode'
#include "jw_interface_msgs/msg/detail/mode_command__traits.hpp"
// Member 'js_ad'
#include "jw_interface_msgs/msg/detail/jsad_command__traits.hpp"
// Member 'motor_rpm'
#include "jw_interface_msgs/msg/detail/motor_rpm_command__traits.hpp"

namespace jw_interface_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Command & msg,
  std::ostream & out)
{
  out << "{";
  // member: mode
  {
    out << "mode: ";
    to_flow_style_yaml(msg.mode, out);
    out << ", ";
  }

  // member: js_ad
  {
    out << "js_ad: ";
    to_flow_style_yaml(msg.js_ad, out);
    out << ", ";
  }

  // member: motor_rpm
  {
    out << "motor_rpm: ";
    to_flow_style_yaml(msg.motor_rpm, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Command & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode:\n";
    to_block_style_yaml(msg.mode, out, indentation + 2);
  }

  // member: js_ad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "js_ad:\n";
    to_block_style_yaml(msg.js_ad, out, indentation + 2);
  }

  // member: motor_rpm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_rpm:\n";
    to_block_style_yaml(msg.motor_rpm, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Command & msg, bool use_flow_style = false)
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
  const jw_interface_msgs::msg::Command & msg,
  std::ostream & out, size_t indentation = 0)
{
  jw_interface_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use jw_interface_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const jw_interface_msgs::msg::Command & msg)
{
  return jw_interface_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<jw_interface_msgs::msg::Command>()
{
  return "jw_interface_msgs::msg::Command";
}

template<>
inline const char * name<jw_interface_msgs::msg::Command>()
{
  return "jw_interface_msgs/msg/Command";
}

template<>
struct has_fixed_size<jw_interface_msgs::msg::Command>
  : std::integral_constant<bool, has_fixed_size<jw_interface_msgs::msg::JSADCommand>::value && has_fixed_size<jw_interface_msgs::msg::ModeCommand>::value && has_fixed_size<jw_interface_msgs::msg::MotorRPMCommand>::value> {};

template<>
struct has_bounded_size<jw_interface_msgs::msg::Command>
  : std::integral_constant<bool, has_bounded_size<jw_interface_msgs::msg::JSADCommand>::value && has_bounded_size<jw_interface_msgs::msg::ModeCommand>::value && has_bounded_size<jw_interface_msgs::msg::MotorRPMCommand>::value> {};

template<>
struct is_message<jw_interface_msgs::msg::Command>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // JW_INTERFACE_MSGS__MSG__DETAIL__COMMAND__TRAITS_HPP_
