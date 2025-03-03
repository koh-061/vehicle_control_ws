// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from jw_interface_msgs:msg/TimeStampStatus.idl
// generated code does not contain a copyright notice

#ifndef JW_INTERFACE_MSGS__MSG__DETAIL__TIME_STAMP_STATUS__TRAITS_HPP_
#define JW_INTERFACE_MSGS__MSG__DETAIL__TIME_STAMP_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "jw_interface_msgs/msg/detail/time_stamp_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace jw_interface_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TimeStampStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: time_stamp
  {
    out << "time_stamp: ";
    rosidl_generator_traits::value_to_yaml(msg.time_stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TimeStampStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: time_stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_stamp: ";
    rosidl_generator_traits::value_to_yaml(msg.time_stamp, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TimeStampStatus & msg, bool use_flow_style = false)
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
  const jw_interface_msgs::msg::TimeStampStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  jw_interface_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use jw_interface_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const jw_interface_msgs::msg::TimeStampStatus & msg)
{
  return jw_interface_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<jw_interface_msgs::msg::TimeStampStatus>()
{
  return "jw_interface_msgs::msg::TimeStampStatus";
}

template<>
inline const char * name<jw_interface_msgs::msg::TimeStampStatus>()
{
  return "jw_interface_msgs/msg/TimeStampStatus";
}

template<>
struct has_fixed_size<jw_interface_msgs::msg::TimeStampStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<jw_interface_msgs::msg::TimeStampStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<jw_interface_msgs::msg::TimeStampStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // JW_INTERFACE_MSGS__MSG__DETAIL__TIME_STAMP_STATUS__TRAITS_HPP_
