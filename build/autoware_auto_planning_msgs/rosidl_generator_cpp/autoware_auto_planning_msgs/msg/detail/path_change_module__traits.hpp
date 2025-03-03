// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_planning_msgs:msg/PathChangeModule.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE__TRAITS_HPP_
#define AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_auto_planning_msgs/msg/detail/path_change_module__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'module'
#include "autoware_auto_planning_msgs/msg/detail/path_change_module_id__traits.hpp"

namespace autoware_auto_planning_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PathChangeModule & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: module
  {
    out << "module: ";
    to_flow_style_yaml(msg.module, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PathChangeModule & msg,
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

  // member: module
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "module:\n";
    to_block_style_yaml(msg.module, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PathChangeModule & msg, bool use_flow_style = false)
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

}  // namespace autoware_auto_planning_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autoware_auto_planning_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autoware_auto_planning_msgs::msg::PathChangeModule & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_auto_planning_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_auto_planning_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_auto_planning_msgs::msg::PathChangeModule & msg)
{
  return autoware_auto_planning_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_auto_planning_msgs::msg::PathChangeModule>()
{
  return "autoware_auto_planning_msgs::msg::PathChangeModule";
}

template<>
inline const char * name<autoware_auto_planning_msgs::msg::PathChangeModule>()
{
  return "autoware_auto_planning_msgs/msg/PathChangeModule";
}

template<>
struct has_fixed_size<autoware_auto_planning_msgs::msg::PathChangeModule>
  : std::integral_constant<bool, has_fixed_size<autoware_auto_planning_msgs::msg::PathChangeModuleId>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<autoware_auto_planning_msgs::msg::PathChangeModule>
  : std::integral_constant<bool, has_bounded_size<autoware_auto_planning_msgs::msg::PathChangeModuleId>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<autoware_auto_planning_msgs::msg::PathChangeModule>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE__TRAITS_HPP_
