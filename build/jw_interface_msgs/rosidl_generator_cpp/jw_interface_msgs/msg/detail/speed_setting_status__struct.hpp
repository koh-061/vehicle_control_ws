// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from jw_interface_msgs:msg/SpeedSettingStatus.idl
// generated code does not contain a copyright notice

#ifndef JW_INTERFACE_MSGS__MSG__DETAIL__SPEED_SETTING_STATUS__STRUCT_HPP_
#define JW_INTERFACE_MSGS__MSG__DETAIL__SPEED_SETTING_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__jw_interface_msgs__msg__SpeedSettingStatus __attribute__((deprecated))
#else
# define DEPRECATED__jw_interface_msgs__msg__SpeedSettingStatus __declspec(deprecated)
#endif

namespace jw_interface_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SpeedSettingStatus_
{
  using Type = SpeedSettingStatus_<ContainerAllocator>;

  explicit SpeedSettingStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed_setting = 0;
    }
  }

  explicit SpeedSettingStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed_setting = 0;
    }
  }

  // field types and members
  using _speed_setting_type =
    uint8_t;
  _speed_setting_type speed_setting;

  // setters for named parameter idiom
  Type & set__speed_setting(
    const uint8_t & _arg)
  {
    this->speed_setting = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t FIRST_SPEED =
    1u;
  static constexpr uint8_t SECOND_SPEED =
    2u;
  static constexpr uint8_t THIRD_SPEED =
    3u;
  static constexpr uint8_t FOURTH_SPEED =
    4u;
  static constexpr uint8_t FIFTH_SPEED =
    5u;

  // pointer types
  using RawPtr =
    jw_interface_msgs::msg::SpeedSettingStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const jw_interface_msgs::msg::SpeedSettingStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<jw_interface_msgs::msg::SpeedSettingStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<jw_interface_msgs::msg::SpeedSettingStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      jw_interface_msgs::msg::SpeedSettingStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<jw_interface_msgs::msg::SpeedSettingStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      jw_interface_msgs::msg::SpeedSettingStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<jw_interface_msgs::msg::SpeedSettingStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<jw_interface_msgs::msg::SpeedSettingStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<jw_interface_msgs::msg::SpeedSettingStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__jw_interface_msgs__msg__SpeedSettingStatus
    std::shared_ptr<jw_interface_msgs::msg::SpeedSettingStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__jw_interface_msgs__msg__SpeedSettingStatus
    std::shared_ptr<jw_interface_msgs::msg::SpeedSettingStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpeedSettingStatus_ & other) const
  {
    if (this->speed_setting != other.speed_setting) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpeedSettingStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpeedSettingStatus_

// alias to use template instance with default allocator
using SpeedSettingStatus =
  jw_interface_msgs::msg::SpeedSettingStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpeedSettingStatus_<ContainerAllocator>::FIRST_SPEED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpeedSettingStatus_<ContainerAllocator>::SECOND_SPEED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpeedSettingStatus_<ContainerAllocator>::THIRD_SPEED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpeedSettingStatus_<ContainerAllocator>::FOURTH_SPEED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpeedSettingStatus_<ContainerAllocator>::FIFTH_SPEED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace jw_interface_msgs

#endif  // JW_INTERFACE_MSGS__MSG__DETAIL__SPEED_SETTING_STATUS__STRUCT_HPP_
