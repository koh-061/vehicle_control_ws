// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from jw_interface_msgs:msg/SpeedSettingStatus.idl
// generated code does not contain a copyright notice

#ifndef JW_INTERFACE_MSGS__MSG__DETAIL__SPEED_SETTING_STATUS__TRAITS_HPP_
#define JW_INTERFACE_MSGS__MSG__DETAIL__SPEED_SETTING_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "jw_interface_msgs/msg/detail/speed_setting_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace jw_interface_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SpeedSettingStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: speed_setting
  {
    out << "speed_setting: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_setting, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SpeedSettingStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: speed_setting
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_setting: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_setting, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SpeedSettingStatus & msg, bool use_flow_style = false)
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
  const jw_interface_msgs::msg::SpeedSettingStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  jw_interface_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use jw_interface_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const jw_interface_msgs::msg::SpeedSettingStatus & msg)
{
  return jw_interface_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<jw_interface_msgs::msg::SpeedSettingStatus>()
{
  return "jw_interface_msgs::msg::SpeedSettingStatus";
}

template<>
inline const char * name<jw_interface_msgs::msg::SpeedSettingStatus>()
{
  return "jw_interface_msgs/msg/SpeedSettingStatus";
}

template<>
struct has_fixed_size<jw_interface_msgs::msg::SpeedSettingStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<jw_interface_msgs::msg::SpeedSettingStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<jw_interface_msgs::msg::SpeedSettingStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // JW_INTERFACE_MSGS__MSG__DETAIL__SPEED_SETTING_STATUS__TRAITS_HPP_
