// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from jw_interface_msgs:msg/Command.idl
// generated code does not contain a copyright notice

#ifndef JW_INTERFACE_MSGS__MSG__DETAIL__COMMAND__STRUCT_HPP_
#define JW_INTERFACE_MSGS__MSG__DETAIL__COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'mode'
#include "jw_interface_msgs/msg/detail/mode_command__struct.hpp"
// Member 'js_ad'
#include "jw_interface_msgs/msg/detail/jsad_command__struct.hpp"
// Member 'motor_rpm'
#include "jw_interface_msgs/msg/detail/motor_rpm_command__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__jw_interface_msgs__msg__Command __attribute__((deprecated))
#else
# define DEPRECATED__jw_interface_msgs__msg__Command __declspec(deprecated)
#endif

namespace jw_interface_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Command_
{
  using Type = Command_<ContainerAllocator>;

  explicit Command_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mode(_init),
    js_ad(_init),
    motor_rpm(_init)
  {
    (void)_init;
  }

  explicit Command_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mode(_alloc, _init),
    js_ad(_alloc, _init),
    motor_rpm(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _mode_type =
    jw_interface_msgs::msg::ModeCommand_<ContainerAllocator>;
  _mode_type mode;
  using _js_ad_type =
    jw_interface_msgs::msg::JSADCommand_<ContainerAllocator>;
  _js_ad_type js_ad;
  using _motor_rpm_type =
    jw_interface_msgs::msg::MotorRPMCommand_<ContainerAllocator>;
  _motor_rpm_type motor_rpm;

  // setters for named parameter idiom
  Type & set__mode(
    const jw_interface_msgs::msg::ModeCommand_<ContainerAllocator> & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__js_ad(
    const jw_interface_msgs::msg::JSADCommand_<ContainerAllocator> & _arg)
  {
    this->js_ad = _arg;
    return *this;
  }
  Type & set__motor_rpm(
    const jw_interface_msgs::msg::MotorRPMCommand_<ContainerAllocator> & _arg)
  {
    this->motor_rpm = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    jw_interface_msgs::msg::Command_<ContainerAllocator> *;
  using ConstRawPtr =
    const jw_interface_msgs::msg::Command_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<jw_interface_msgs::msg::Command_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<jw_interface_msgs::msg::Command_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      jw_interface_msgs::msg::Command_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<jw_interface_msgs::msg::Command_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      jw_interface_msgs::msg::Command_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<jw_interface_msgs::msg::Command_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<jw_interface_msgs::msg::Command_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<jw_interface_msgs::msg::Command_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__jw_interface_msgs__msg__Command
    std::shared_ptr<jw_interface_msgs::msg::Command_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__jw_interface_msgs__msg__Command
    std::shared_ptr<jw_interface_msgs::msg::Command_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Command_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    if (this->js_ad != other.js_ad) {
      return false;
    }
    if (this->motor_rpm != other.motor_rpm) {
      return false;
    }
    return true;
  }
  bool operator!=(const Command_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Command_

// alias to use template instance with default allocator
using Command =
  jw_interface_msgs::msg::Command_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace jw_interface_msgs

#endif  // JW_INTERFACE_MSGS__MSG__DETAIL__COMMAND__STRUCT_HPP_
