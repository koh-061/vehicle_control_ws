// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_planning_msgs:msg/PathChangeModuleArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE_ARRAY__TRAITS_HPP_
#define AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_auto_planning_msgs/msg/detail/path_change_module_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'modules'
#include "autoware_auto_planning_msgs/msg/detail/path_change_module_id__traits.hpp"

namespace autoware_auto_planning_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PathChangeModuleArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: modules
  {
    if (msg.modules.size() == 0) {
      out << "modules: []";
    } else {
      out << "modules: [";
      size_t pending_items = msg.modules.size();
      for (auto item : msg.modules) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PathChangeModuleArray & msg,
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

  // member: modules
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.modules.size() == 0) {
      out << "modules: []\n";
    } else {
      out << "modules:\n";
      for (auto item : msg.modules) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PathChangeModuleArray & msg, bool use_flow_style = false)
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
  const autoware_auto_planning_msgs::msg::PathChangeModuleArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_auto_planning_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_auto_planning_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_auto_planning_msgs::msg::PathChangeModuleArray & msg)
{
  return autoware_auto_planning_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_auto_planning_msgs::msg::PathChangeModuleArray>()
{
  return "autoware_auto_planning_msgs::msg::PathChangeModuleArray";
}

template<>
inline const char * name<autoware_auto_planning_msgs::msg::PathChangeModuleArray>()
{
  return "autoware_auto_planning_msgs/msg/PathChangeModuleArray";
}

template<>
struct has_fixed_size<autoware_auto_planning_msgs::msg::PathChangeModuleArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_auto_planning_msgs::msg::PathChangeModuleArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_auto_planning_msgs::msg::PathChangeModuleArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE_ARRAY__TRAITS_HPP_
