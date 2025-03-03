// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from jw_interface_msgs:msg/BatteryStatus.idl
// generated code does not contain a copyright notice

#ifndef JW_INTERFACE_MSGS__MSG__DETAIL__BATTERY_STATUS__BUILDER_HPP_
#define JW_INTERFACE_MSGS__MSG__DETAIL__BATTERY_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "jw_interface_msgs/msg/detail/battery_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace jw_interface_msgs
{

namespace msg
{

namespace builder
{

class Init_BatteryStatus_amperage
{
public:
  explicit Init_BatteryStatus_amperage(::jw_interface_msgs::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  ::jw_interface_msgs::msg::BatteryStatus amperage(::jw_interface_msgs::msg::BatteryStatus::_amperage_type arg)
  {
    msg_.amperage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::jw_interface_msgs::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_charge
{
public:
  Init_BatteryStatus_charge()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BatteryStatus_amperage charge(::jw_interface_msgs::msg::BatteryStatus::_charge_type arg)
  {
    msg_.charge = std::move(arg);
    return Init_BatteryStatus_amperage(msg_);
  }

private:
  ::jw_interface_msgs::msg::BatteryStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::jw_interface_msgs::msg::BatteryStatus>()
{
  return jw_interface_msgs::msg::builder::Init_BatteryStatus_charge();
}

}  // namespace jw_interface_msgs

#endif  // JW_INTERFACE_MSGS__MSG__DETAIL__BATTERY_STATUS__BUILDER_HPP_
