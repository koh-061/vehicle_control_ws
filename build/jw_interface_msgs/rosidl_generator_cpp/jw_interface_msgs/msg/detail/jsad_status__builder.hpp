// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from jw_interface_msgs:msg/JSADStatus.idl
// generated code does not contain a copyright notice

#ifndef JW_INTERFACE_MSGS__MSG__DETAIL__JSAD_STATUS__BUILDER_HPP_
#define JW_INTERFACE_MSGS__MSG__DETAIL__JSAD_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "jw_interface_msgs/msg/detail/jsad_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace jw_interface_msgs
{

namespace msg
{

namespace builder
{

class Init_JSADStatus_left_right_ratio
{
public:
  explicit Init_JSADStatus_left_right_ratio(::jw_interface_msgs::msg::JSADStatus & msg)
  : msg_(msg)
  {}
  ::jw_interface_msgs::msg::JSADStatus left_right_ratio(::jw_interface_msgs::msg::JSADStatus::_left_right_ratio_type arg)
  {
    msg_.left_right_ratio = std::move(arg);
    return std::move(msg_);
  }

private:
  ::jw_interface_msgs::msg::JSADStatus msg_;
};

class Init_JSADStatus_front_back_ratio
{
public:
  Init_JSADStatus_front_back_ratio()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JSADStatus_left_right_ratio front_back_ratio(::jw_interface_msgs::msg::JSADStatus::_front_back_ratio_type arg)
  {
    msg_.front_back_ratio = std::move(arg);
    return Init_JSADStatus_left_right_ratio(msg_);
  }

private:
  ::jw_interface_msgs::msg::JSADStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::jw_interface_msgs::msg::JSADStatus>()
{
  return jw_interface_msgs::msg::builder::Init_JSADStatus_front_back_ratio();
}

}  // namespace jw_interface_msgs

#endif  // JW_INTERFACE_MSGS__MSG__DETAIL__JSAD_STATUS__BUILDER_HPP_
