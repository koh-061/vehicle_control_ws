// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_system_msgs:msg/Float32MultiArrayDiagnostic.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__FLOAT32_MULTI_ARRAY_DIAGNOSTIC__TRAITS_HPP_
#define AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__FLOAT32_MULTI_ARRAY_DIAGNOSTIC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_auto_system_msgs/msg/detail/float32_multi_array_diagnostic__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'diag_header'
#include "autoware_auto_system_msgs/msg/detail/diagnostic_header__traits.hpp"
// Member 'diag_array'
#include "std_msgs/msg/detail/float32_multi_array__traits.hpp"

namespace autoware_auto_system_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Float32MultiArrayDiagnostic & msg,
  std::ostream & out)
{
  out << "{";
  // member: diag_header
  {
    out << "diag_header: ";
    to_flow_style_yaml(msg.diag_header, out);
    out << ", ";
  }

  // member: diag_array
  {
    out << "diag_array: ";
    to_flow_style_yaml(msg.diag_array, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Float32MultiArrayDiagnostic & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: diag_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diag_header:\n";
    to_block_style_yaml(msg.diag_header, out, indentation + 2);
  }

  // member: diag_array
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diag_array:\n";
    to_block_style_yaml(msg.diag_array, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Float32MultiArrayDiagnostic & msg, bool use_flow_style = false)
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

}  // namespace autoware_auto_system_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autoware_auto_system_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autoware_auto_system_msgs::msg::Float32MultiArrayDiagnostic & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_auto_system_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_auto_system_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_auto_system_msgs::msg::Float32MultiArrayDiagnostic & msg)
{
  return autoware_auto_system_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_auto_system_msgs::msg::Float32MultiArrayDiagnostic>()
{
  return "autoware_auto_system_msgs::msg::Float32MultiArrayDiagnostic";
}

template<>
inline const char * name<autoware_auto_system_msgs::msg::Float32MultiArrayDiagnostic>()
{
  return "autoware_auto_system_msgs/msg/Float32MultiArrayDiagnostic";
}

template<>
struct has_fixed_size<autoware_auto_system_msgs::msg::Float32MultiArrayDiagnostic>
  : std::integral_constant<bool, has_fixed_size<autoware_auto_system_msgs::msg::DiagnosticHeader>::value && has_fixed_size<std_msgs::msg::Float32MultiArray>::value> {};

template<>
struct has_bounded_size<autoware_auto_system_msgs::msg::Float32MultiArrayDiagnostic>
  : std::integral_constant<bool, has_bounded_size<autoware_auto_system_msgs::msg::DiagnosticHeader>::value && has_bounded_size<std_msgs::msg::Float32MultiArray>::value> {};

template<>
struct is_message<autoware_auto_system_msgs::msg::Float32MultiArrayDiagnostic>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__FLOAT32_MULTI_ARRAY_DIAGNOSTIC__TRAITS_HPP_
