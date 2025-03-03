// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from jw_interface_msgs:msg/TimeStampStatus.idl
// generated code does not contain a copyright notice

#ifndef JW_INTERFACE_MSGS__MSG__DETAIL__TIME_STAMP_STATUS__BUILDER_HPP_
#define JW_INTERFACE_MSGS__MSG__DETAIL__TIME_STAMP_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "jw_interface_msgs/msg/detail/time_stamp_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace jw_interface_msgs
{

namespace msg
{

namespace builder
{

class Init_TimeStampStatus_time_stamp
{
public:
  Init_TimeStampStatus_time_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::jw_interface_msgs::msg::TimeStampStatus time_stamp(::jw_interface_msgs::msg::TimeStampStatus::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::jw_interface_msgs::msg::TimeStampStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::jw_interface_msgs::msg::TimeStampStatus>()
{
  return jw_interface_msgs::msg::builder::Init_TimeStampStatus_time_stamp();
}

}  // namespace jw_interface_msgs

#endif  // JW_INTERFACE_MSGS__MSG__DETAIL__TIME_STAMP_STATUS__BUILDER_HPP_
