// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from jw_interface_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef JW_INTERFACE_MSGS__MSG__DETAIL__STATUS__STRUCT_HPP_
#define JW_INTERFACE_MSGS__MSG__DETAIL__STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'time_stamp'
#include "jw_interface_msgs/msg/detail/time_stamp_status__struct.hpp"
// Member 'motor_rpm'
#include "jw_interface_msgs/msg/detail/motor_rpm_status__struct.hpp"
// Member 'battery'
#include "jw_interface_msgs/msg/detail/battery_status__struct.hpp"
// Member 'speed_setting'
#include "jw_interface_msgs/msg/detail/speed_setting_status__struct.hpp"
// Member 'js_ad'
#include "jw_interface_msgs/msg/detail/jsad_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__jw_interface_msgs__msg__Status __attribute__((deprecated))
#else
# define DEPRECATED__jw_interface_msgs__msg__Status __declspec(deprecated)
#endif

namespace jw_interface_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Status_
{
  using Type = Status_<ContainerAllocator>;

  explicit Status_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_stamp(_init),
    motor_rpm(_init),
    battery(_init),
    speed_setting(_init),
    js_ad(_init)
  {
    (void)_init;
  }

  explicit Status_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_stamp(_alloc, _init),
    motor_rpm(_alloc, _init),
    battery(_alloc, _init),
    speed_setting(_alloc, _init),
    js_ad(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _time_stamp_type =
    jw_interface_msgs::msg::TimeStampStatus_<ContainerAllocator>;
  _time_stamp_type time_stamp;
  using _motor_rpm_type =
    jw_interface_msgs::msg::MotorRPMStatus_<ContainerAllocator>;
  _motor_rpm_type motor_rpm;
  using _battery_type =
    jw_interface_msgs::msg::BatteryStatus_<ContainerAllocator>;
  _battery_type battery;
  using _speed_setting_type =
    jw_interface_msgs::msg::SpeedSettingStatus_<ContainerAllocator>;
  _speed_setting_type speed_setting;
  using _js_ad_type =
    jw_interface_msgs::msg::JSADStatus_<ContainerAllocator>;
  _js_ad_type js_ad;

  // setters for named parameter idiom
  Type & set__time_stamp(
    const jw_interface_msgs::msg::TimeStampStatus_<ContainerAllocator> & _arg)
  {
    this->time_stamp = _arg;
    return *this;
  }
  Type & set__motor_rpm(
    const jw_interface_msgs::msg::MotorRPMStatus_<ContainerAllocator> & _arg)
  {
    this->motor_rpm = _arg;
    return *this;
  }
  Type & set__battery(
    const jw_interface_msgs::msg::BatteryStatus_<ContainerAllocator> & _arg)
  {
    this->battery = _arg;
    return *this;
  }
  Type & set__speed_setting(
    const jw_interface_msgs::msg::SpeedSettingStatus_<ContainerAllocator> & _arg)
  {
    this->speed_setting = _arg;
    return *this;
  }
  Type & set__js_ad(
    const jw_interface_msgs::msg::JSADStatus_<ContainerAllocator> & _arg)
  {
    this->js_ad = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    jw_interface_msgs::msg::Status_<ContainerAllocator> *;
  using ConstRawPtr =
    const jw_interface_msgs::msg::Status_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<jw_interface_msgs::msg::Status_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<jw_interface_msgs::msg::Status_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      jw_interface_msgs::msg::Status_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<jw_interface_msgs::msg::Status_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      jw_interface_msgs::msg::Status_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<jw_interface_msgs::msg::Status_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<jw_interface_msgs::msg::Status_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<jw_interface_msgs::msg::Status_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__jw_interface_msgs__msg__Status
    std::shared_ptr<jw_interface_msgs::msg::Status_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__jw_interface_msgs__msg__Status
    std::shared_ptr<jw_interface_msgs::msg::Status_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Status_ & other) const
  {
    if (this->time_stamp != other.time_stamp) {
      return false;
    }
    if (this->motor_rpm != other.motor_rpm) {
      return false;
    }
    if (this->battery != other.battery) {
      return false;
    }
    if (this->speed_setting != other.speed_setting) {
      return false;
    }
    if (this->js_ad != other.js_ad) {
      return false;
    }
    return true;
  }
  bool operator!=(const Status_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Status_

// alias to use template instance with default allocator
using Status =
  jw_interface_msgs::msg::Status_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace jw_interface_msgs

#endif  // JW_INTERFACE_MSGS__MSG__DETAIL__STATUS__STRUCT_HPP_
