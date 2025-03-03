// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_perception_msgs:msg/TrackedObjectKinematics.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRACKED_OBJECT_KINEMATICS__TRAITS_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRACKED_OBJECT_KINEMATICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_auto_perception_msgs/msg/detail/tracked_object_kinematics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'centroid_position'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist_with_covariance__traits.hpp"
// Member 'acceleration'
#include "geometry_msgs/msg/detail/accel_with_covariance__traits.hpp"

namespace autoware_auto_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrackedObjectKinematics & msg,
  std::ostream & out)
{
  out << "{";
  // member: centroid_position
  {
    out << "centroid_position: ";
    to_flow_style_yaml(msg.centroid_position, out);
    out << ", ";
  }

  // member: position_covariance
  {
    if (msg.position_covariance.size() == 0) {
      out << "position_covariance: []";
    } else {
      out << "position_covariance: [";
      size_t pending_items = msg.position_covariance.size();
      for (auto item : msg.position_covariance) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: orientation
  {
    out << "orientation: ";
    to_flow_style_yaml(msg.orientation, out);
    out << ", ";
  }

  // member: orientation_availability
  {
    out << "orientation_availability: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation_availability, out);
    out << ", ";
  }

  // member: twist
  {
    out << "twist: ";
    to_flow_style_yaml(msg.twist, out);
    out << ", ";
  }

  // member: acceleration
  {
    out << "acceleration: ";
    to_flow_style_yaml(msg.acceleration, out);
    out << ", ";
  }

  // member: is_stationary
  {
    out << "is_stationary: ";
    rosidl_generator_traits::value_to_yaml(msg.is_stationary, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrackedObjectKinematics & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: centroid_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "centroid_position:\n";
    to_block_style_yaml(msg.centroid_position, out, indentation + 2);
  }

  // member: position_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position_covariance.size() == 0) {
      out << "position_covariance: []\n";
    } else {
      out << "position_covariance:\n";
      for (auto item : msg.position_covariance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation:\n";
    to_block_style_yaml(msg.orientation, out, indentation + 2);
  }

  // member: orientation_availability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation_availability: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation_availability, out);
    out << "\n";
  }

  // member: twist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "twist:\n";
    to_block_style_yaml(msg.twist, out, indentation + 2);
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration:\n";
    to_block_style_yaml(msg.acceleration, out, indentation + 2);
  }

  // member: is_stationary
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_stationary: ";
    rosidl_generator_traits::value_to_yaml(msg.is_stationary, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrackedObjectKinematics & msg, bool use_flow_style = false)
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

}  // namespace autoware_auto_perception_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autoware_auto_perception_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autoware_auto_perception_msgs::msg::TrackedObjectKinematics & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_auto_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_auto_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_auto_perception_msgs::msg::TrackedObjectKinematics & msg)
{
  return autoware_auto_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_auto_perception_msgs::msg::TrackedObjectKinematics>()
{
  return "autoware_auto_perception_msgs::msg::TrackedObjectKinematics";
}

template<>
inline const char * name<autoware_auto_perception_msgs::msg::TrackedObjectKinematics>()
{
  return "autoware_auto_perception_msgs/msg/TrackedObjectKinematics";
}

template<>
struct has_fixed_size<autoware_auto_perception_msgs::msg::TrackedObjectKinematics>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::AccelWithCovariance>::value && has_fixed_size<geometry_msgs::msg::Point>::value && has_fixed_size<geometry_msgs::msg::Quaternion>::value && has_fixed_size<geometry_msgs::msg::TwistWithCovariance>::value> {};

template<>
struct has_bounded_size<autoware_auto_perception_msgs::msg::TrackedObjectKinematics>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::AccelWithCovariance>::value && has_bounded_size<geometry_msgs::msg::Point>::value && has_bounded_size<geometry_msgs::msg::Quaternion>::value && has_bounded_size<geometry_msgs::msg::TwistWithCovariance>::value> {};

template<>
struct is_message<autoware_auto_perception_msgs::msg::TrackedObjectKinematics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRACKED_OBJECT_KINEMATICS__TRAITS_HPP_
