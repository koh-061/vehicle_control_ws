// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from jw_interface_msgs:msg/MotorRPMCommand.idl
// generated code does not contain a copyright notice

#ifndef JW_INTERFACE_MSGS__MSG__DETAIL__MOTOR_RPM_COMMAND__TRAITS_HPP_
#define JW_INTERFACE_MSGS__MSG__DETAIL__MOTOR_RPM_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "jw_interface_msgs/msg/detail/motor_rpm_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace jw_interface_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorRPMCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: left_rpm
  {
    out << "left_rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.left_rpm, out);
    out << ", ";
  }

  // member: right_rpm
  {
    out << "right_rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.right_rpm, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorRPMCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: left_rpm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.left_rpm, out);
    out << "\n";
  }

  // member: right_rpm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.right_rpm, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorRPMCommand & msg, bool use_flow_style = false)
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
  const jw_interface_msgs::msg::MotorRPMCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  jw_interface_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use jw_interface_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const jw_interface_msgs::msg::MotorRPMCommand & msg)
{
  return jw_interface_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<jw_interface_msgs::msg::MotorRPMCommand>()
{
  return "jw_interface_msgs::msg::MotorRPMCommand";
}

template<>
inline const char * name<jw_interface_msgs::msg::MotorRPMCommand>()
{
  return "jw_interface_msgs/msg/MotorRPMCommand";
}

template<>
struct has_fixed_size<jw_interface_msgs::msg::MotorRPMCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<jw_interface_msgs::msg::MotorRPMCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<jw_interface_msgs::msg::MotorRPMCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // JW_INTERFACE_MSGS__MSG__DETAIL__MOTOR_RPM_COMMAND__TRAITS_HPP_
