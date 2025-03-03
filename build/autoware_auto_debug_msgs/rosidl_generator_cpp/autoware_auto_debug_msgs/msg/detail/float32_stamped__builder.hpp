// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_debug_msgs:msg/Float32Stamped.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_DEBUG_MSGS__MSG__DETAIL__FLOAT32_STAMPED__BUILDER_HPP_
#define AUTOWARE_AUTO_DEBUG_MSGS__MSG__DETAIL__FLOAT32_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_debug_msgs/msg/detail/float32_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_debug_msgs
{

namespace msg
{

namespace builder
{

class Init_Float32Stamped_data
{
public:
  explicit Init_Float32Stamped_data(::autoware_auto_debug_msgs::msg::Float32Stamped & msg)
  : msg_(msg)
  {}
  ::autoware_auto_debug_msgs::msg::Float32Stamped data(::autoware_auto_debug_msgs::msg::Float32Stamped::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_debug_msgs::msg::Float32Stamped msg_;
};

class Init_Float32Stamped_stamp
{
public:
  Init_Float32Stamped_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Float32Stamped_data stamp(::autoware_auto_debug_msgs::msg::Float32Stamped::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_Float32Stamped_data(msg_);
  }

private:
  ::autoware_auto_debug_msgs::msg::Float32Stamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_debug_msgs::msg::Float32Stamped>()
{
  return autoware_auto_debug_msgs::msg::builder::Init_Float32Stamped_stamp();
}

}  // namespace autoware_auto_debug_msgs

#endif  // AUTOWARE_AUTO_DEBUG_MSGS__MSG__DETAIL__FLOAT32_STAMPED__BUILDER_HPP_
