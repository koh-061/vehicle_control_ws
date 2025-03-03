// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_perception_msgs:msg/TrackedObject.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRACKED_OBJECT__TRAITS_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRACKED_OBJECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_auto_perception_msgs/msg/detail/tracked_object__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'uuid'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'classification'
#include "autoware_auto_perception_msgs/msg/detail/object_classification__traits.hpp"
// Member 'kinematics'
#include "autoware_auto_perception_msgs/msg/detail/tracked_object_kinematics__traits.hpp"
// Member 'shape'
#include "autoware_auto_perception_msgs/msg/detail/shape__traits.hpp"

namespace autoware_auto_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrackedObject & msg,
  std::ostream & out)
{
  out << "{";
  // member: uuid
  {
    out << "uuid: ";
    to_flow_style_yaml(msg.uuid, out);
    out << ", ";
  }

  // member: object_id
  {
    out << "object_id: ";
    rosidl_generator_traits::value_to_yaml(msg.object_id, out);
    out << ", ";
  }

  // member: existence_probability
  {
    out << "existence_probability: ";
    rosidl_generator_traits::value_to_yaml(msg.existence_probability, out);
    out << ", ";
  }

  // member: classification
  {
    if (msg.classification.size() == 0) {
      out << "classification: []";
    } else {
      out << "classification: [";
      size_t pending_items = msg.classification.size();
      for (auto item : msg.classification) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: kinematics
  {
    out << "kinematics: ";
    to_flow_style_yaml(msg.kinematics, out);
    out << ", ";
  }

  // member: shape
  {
    if (msg.shape.size() == 0) {
      out << "shape: []";
    } else {
      out << "shape: [";
      size_t pending_items = msg.shape.size();
      for (auto item : msg.shape) {
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
  const TrackedObject & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: uuid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uuid:\n";
    to_block_style_yaml(msg.uuid, out, indentation + 2);
  }

  // member: object_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_id: ";
    rosidl_generator_traits::value_to_yaml(msg.object_id, out);
    out << "\n";
  }

  // member: existence_probability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "existence_probability: ";
    rosidl_generator_traits::value_to_yaml(msg.existence_probability, out);
    out << "\n";
  }

  // member: classification
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.classification.size() == 0) {
      out << "classification: []\n";
    } else {
      out << "classification:\n";
      for (auto item : msg.classification) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: kinematics
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kinematics:\n";
    to_block_style_yaml(msg.kinematics, out, indentation + 2);
  }

  // member: shape
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.shape.size() == 0) {
      out << "shape: []\n";
    } else {
      out << "shape:\n";
      for (auto item : msg.shape) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrackedObject & msg, bool use_flow_style = false)
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
  const autoware_auto_perception_msgs::msg::TrackedObject & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_auto_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_auto_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_auto_perception_msgs::msg::TrackedObject & msg)
{
  return autoware_auto_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_auto_perception_msgs::msg::TrackedObject>()
{
  return "autoware_auto_perception_msgs::msg::TrackedObject";
}

template<>
inline const char * name<autoware_auto_perception_msgs::msg::TrackedObject>()
{
  return "autoware_auto_perception_msgs/msg/TrackedObject";
}

template<>
struct has_fixed_size<autoware_auto_perception_msgs::msg::TrackedObject>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_auto_perception_msgs::msg::TrackedObject>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_auto_perception_msgs::msg::TrackedObject>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRACKED_OBJECT__TRAITS_HPP_
