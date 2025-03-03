// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_planning_msgs:msg/PathWithLaneId.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_WITH_LANE_ID__TRAITS_HPP_
#define AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_WITH_LANE_ID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_auto_planning_msgs/msg/detail/path_with_lane_id__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'points'
#include "autoware_auto_planning_msgs/msg/detail/path_point_with_lane_id__traits.hpp"
// Member 'drivable_area'
#include "nav_msgs/msg/detail/occupancy_grid__traits.hpp"

namespace autoware_auto_planning_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PathWithLaneId & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: points
  {
    if (msg.points.size() == 0) {
      out << "points: []";
    } else {
      out << "points: [";
      size_t pending_items = msg.points.size();
      for (auto item : msg.points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: drivable_area
  {
    out << "drivable_area: ";
    to_flow_style_yaml(msg.drivable_area, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PathWithLaneId & msg,
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

  // member: points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.points.size() == 0) {
      out << "points: []\n";
    } else {
      out << "points:\n";
      for (auto item : msg.points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: drivable_area
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drivable_area:\n";
    to_block_style_yaml(msg.drivable_area, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PathWithLaneId & msg, bool use_flow_style = false)
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
  const autoware_auto_planning_msgs::msg::PathWithLaneId & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_auto_planning_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_auto_planning_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_auto_planning_msgs::msg::PathWithLaneId & msg)
{
  return autoware_auto_planning_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_auto_planning_msgs::msg::PathWithLaneId>()
{
  return "autoware_auto_planning_msgs::msg::PathWithLaneId";
}

template<>
inline const char * name<autoware_auto_planning_msgs::msg::PathWithLaneId>()
{
  return "autoware_auto_planning_msgs/msg/PathWithLaneId";
}

template<>
struct has_fixed_size<autoware_auto_planning_msgs::msg::PathWithLaneId>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_auto_planning_msgs::msg::PathWithLaneId>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_auto_planning_msgs::msg::PathWithLaneId>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_WITH_LANE_ID__TRAITS_HPP_
