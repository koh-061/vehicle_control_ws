// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_perception_msgs:msg/ObjectClassification.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__OBJECT_CLASSIFICATION__TRAITS_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__OBJECT_CLASSIFICATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_auto_perception_msgs/msg/detail/object_classification__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace autoware_auto_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObjectClassification & msg,
  std::ostream & out)
{
  out << "{";
  // member: classification
  {
    out << "classification: ";
    rosidl_generator_traits::value_to_yaml(msg.classification, out);
    out << ", ";
  }

  // member: probability
  {
    out << "probability: ";
    rosidl_generator_traits::value_to_yaml(msg.probability, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObjectClassification & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: classification
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "classification: ";
    rosidl_generator_traits::value_to_yaml(msg.classification, out);
    out << "\n";
  }

  // member: probability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "probability: ";
    rosidl_generator_traits::value_to_yaml(msg.probability, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObjectClassification & msg, bool use_flow_style = false)
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
  const autoware_auto_perception_msgs::msg::ObjectClassification & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_auto_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_auto_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_auto_perception_msgs::msg::ObjectClassification & msg)
{
  return autoware_auto_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_auto_perception_msgs::msg::ObjectClassification>()
{
  return "autoware_auto_perception_msgs::msg::ObjectClassification";
}

template<>
inline const char * name<autoware_auto_perception_msgs::msg::ObjectClassification>()
{
  return "autoware_auto_perception_msgs/msg/ObjectClassification";
}

template<>
struct has_fixed_size<autoware_auto_perception_msgs::msg::ObjectClassification>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<autoware_auto_perception_msgs::msg::ObjectClassification>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<autoware_auto_perception_msgs::msg::ObjectClassification>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__OBJECT_CLASSIFICATION__TRAITS_HPP_
