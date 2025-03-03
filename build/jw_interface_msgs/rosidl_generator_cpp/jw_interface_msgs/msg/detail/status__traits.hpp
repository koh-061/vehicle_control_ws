// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from jw_interface_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef JW_INTERFACE_MSGS__MSG__DETAIL__STATUS__TRAITS_HPP_
#define JW_INTERFACE_MSGS__MSG__DETAIL__STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "jw_interface_msgs/msg/detail/status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'time_stamp'
#include "jw_interface_msgs/msg/detail/time_stamp_status__traits.hpp"
// Member 'motor_rpm'
#include "jw_interface_msgs/msg/detail/motor_rpm_status__traits.hpp"
// Member 'battery'
#include "jw_interface_msgs/msg/detail/battery_status__traits.hpp"
// Member 'speed_setting'
#include "jw_interface_msgs/msg/detail/speed_setting_status__traits.hpp"
// Member 'js_ad'
#include "jw_interface_msgs/msg/detail/jsad_status__traits.hpp"

namespace jw_interface_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Status & msg,
  std::ostream & out)
{
  out << "{";
  // member: time_stamp
  {
    out << "time_stamp: ";
    to_flow_style_yaml(msg.time_stamp, out);
    out << ", ";
  }

  // member: motor_rpm
  {
    out << "motor_rpm: ";
    to_flow_style_yaml(msg.motor_rpm, out);
    out << ", ";
  }

  // member: battery
  {
    out << "battery: ";
    to_flow_style_yaml(msg.battery, out);
    out << ", ";
  }

  // member: speed_setting
  {
    out << "speed_setting: ";
    to_flow_style_yaml(msg.speed_setting, out);
    out << ", ";
  }

  // member: js_ad
  {
    out << "js_ad: ";
    to_flow_style_yaml(msg.js_ad, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Status & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: time_stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_stamp:\n";
    to_block_style_yaml(msg.time_stamp, out, indentation + 2);
  }

  // member: motor_rpm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_rpm:\n";
    to_block_style_yaml(msg.motor_rpm, out, indentation + 2);
  }

  // member: battery
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery:\n";
    to_block_style_yaml(msg.battery, out, indentation + 2);
  }

  // member: speed_setting
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_setting:\n";
    to_block_style_yaml(msg.speed_setting, out, indentation + 2);
  }

  // member: js_ad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "js_ad:\n";
    to_block_style_yaml(msg.js_ad, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Status & msg, bool use_flow_style = false)
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
  const jw_interface_msgs::msg::Status & msg,
  std::ostream & out, size_t indentation = 0)
{
  jw_interface_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use jw_interface_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const jw_interface_msgs::msg::Status & msg)
{
  return jw_interface_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<jw_interface_msgs::msg::Status>()
{
  return "jw_interface_msgs::msg::Status";
}

template<>
inline const char * name<jw_interface_msgs::msg::Status>()
{
  return "jw_interface_msgs/msg/Status";
}

template<>
struct has_fixed_size<jw_interface_msgs::msg::Status>
  : std::integral_constant<bool, has_fixed_size<jw_interface_msgs::msg::BatteryStatus>::value && has_fixed_size<jw_interface_msgs::msg::JSADStatus>::value && has_fixed_size<jw_interface_msgs::msg::MotorRPMStatus>::value && has_fixed_size<jw_interface_msgs::msg::SpeedSettingStatus>::value && has_fixed_size<jw_interface_msgs::msg::TimeStampStatus>::value> {};

template<>
struct has_bounded_size<jw_interface_msgs::msg::Status>
  : std::integral_constant<bool, has_bounded_size<jw_interface_msgs::msg::BatteryStatus>::value && has_bounded_size<jw_interface_msgs::msg::JSADStatus>::value && has_bounded_size<jw_interface_msgs::msg::MotorRPMStatus>::value && has_bounded_size<jw_interface_msgs::msg::SpeedSettingStatus>::value && has_bounded_size<jw_interface_msgs::msg::TimeStampStatus>::value> {};

template<>
struct is_message<jw_interface_msgs::msg::Status>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // JW_INTERFACE_MSGS__MSG__DETAIL__STATUS__TRAITS_HPP_
