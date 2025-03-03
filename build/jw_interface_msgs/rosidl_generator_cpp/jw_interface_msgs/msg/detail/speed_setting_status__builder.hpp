// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from jw_interface_msgs:msg/SpeedSettingStatus.idl
// generated code does not contain a copyright notice

#ifndef JW_INTERFACE_MSGS__MSG__DETAIL__SPEED_SETTING_STATUS__BUILDER_HPP_
#define JW_INTERFACE_MSGS__MSG__DETAIL__SPEED_SETTING_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "jw_interface_msgs/msg/detail/speed_setting_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace jw_interface_msgs
{

namespace msg
{

namespace builder
{

class Init_SpeedSettingStatus_speed_setting
{
public:
  Init_SpeedSettingStatus_speed_setting()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::jw_interface_msgs::msg::SpeedSettingStatus speed_setting(::jw_interface_msgs::msg::SpeedSettingStatus::_speed_setting_type arg)
  {
    msg_.speed_setting = std::move(arg);
    return std::move(msg_);
  }

private:
  ::jw_interface_msgs::msg::SpeedSettingStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::jw_interface_msgs::msg::SpeedSettingStatus>()
{
  return jw_interface_msgs::msg::builder::Init_SpeedSettingStatus_speed_setting();
}

}  // namespace jw_interface_msgs

#endif  // JW_INTERFACE_MSGS__MSG__DETAIL__SPEED_SETTING_STATUS__BUILDER_HPP_
