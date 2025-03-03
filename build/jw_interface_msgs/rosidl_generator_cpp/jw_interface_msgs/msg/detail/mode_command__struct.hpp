// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from jw_interface_msgs:msg/ModeCommand.idl
// generated code does not contain a copyright notice

#ifndef JW_INTERFACE_MSGS__MSG__DETAIL__MODE_COMMAND__STRUCT_HPP_
#define JW_INTERFACE_MSGS__MSG__DETAIL__MODE_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__jw_interface_msgs__msg__ModeCommand __attribute__((deprecated))
#else
# define DEPRECATED__jw_interface_msgs__msg__ModeCommand __declspec(deprecated)
#endif

namespace jw_interface_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ModeCommand_
{
  using Type = ModeCommand_<ContainerAllocator>;

  explicit ModeCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
    }
  }

  explicit ModeCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
    }
  }

  // field types and members
  using _mode_type =
    uint8_t;
  _mode_type mode;

  // setters for named parameter idiom
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t MANUAL =
    0u;
  static constexpr uint8_t JS_AD_CONTROL =
    1u;
  static constexpr uint8_t MOTOR_RPM_CONTROL =
    2u;

  // pointer types
  using RawPtr =
    jw_interface_msgs::msg::ModeCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const jw_interface_msgs::msg::ModeCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<jw_interface_msgs::msg::ModeCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<jw_interface_msgs::msg::ModeCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      jw_interface_msgs::msg::ModeCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<jw_interface_msgs::msg::ModeCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      jw_interface_msgs::msg::ModeCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<jw_interface_msgs::msg::ModeCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<jw_interface_msgs::msg::ModeCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<jw_interface_msgs::msg::ModeCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__jw_interface_msgs__msg__ModeCommand
    std::shared_ptr<jw_interface_msgs::msg::ModeCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__jw_interface_msgs__msg__ModeCommand
    std::shared_ptr<jw_interface_msgs::msg::ModeCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ModeCommand_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const ModeCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ModeCommand_

// alias to use template instance with default allocator
using ModeCommand =
  jw_interface_msgs::msg::ModeCommand_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ModeCommand_<ContainerAllocator>::MANUAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ModeCommand_<ContainerAllocator>::JS_AD_CONTROL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ModeCommand_<ContainerAllocator>::MOTOR_RPM_CONTROL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace jw_interface_msgs

#endif  // JW_INTERFACE_MSGS__MSG__DETAIL__MODE_COMMAND__STRUCT_HPP_
