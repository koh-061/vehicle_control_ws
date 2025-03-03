// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from jw_interface_msgs:msg/BatteryStatus.idl
// generated code does not contain a copyright notice

#ifndef JW_INTERFACE_MSGS__MSG__DETAIL__BATTERY_STATUS__STRUCT_HPP_
#define JW_INTERFACE_MSGS__MSG__DETAIL__BATTERY_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__jw_interface_msgs__msg__BatteryStatus __attribute__((deprecated))
#else
# define DEPRECATED__jw_interface_msgs__msg__BatteryStatus __declspec(deprecated)
#endif

namespace jw_interface_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BatteryStatus_
{
  using Type = BatteryStatus_<ContainerAllocator>;

  explicit BatteryStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->charge = 0.0f;
      this->amperage = 0.0f;
    }
  }

  explicit BatteryStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->charge = 0.0f;
      this->amperage = 0.0f;
    }
  }

  // field types and members
  using _charge_type =
    float;
  _charge_type charge;
  using _amperage_type =
    float;
  _amperage_type amperage;

  // setters for named parameter idiom
  Type & set__charge(
    const float & _arg)
  {
    this->charge = _arg;
    return *this;
  }
  Type & set__amperage(
    const float & _arg)
  {
    this->amperage = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    jw_interface_msgs::msg::BatteryStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const jw_interface_msgs::msg::BatteryStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<jw_interface_msgs::msg::BatteryStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<jw_interface_msgs::msg::BatteryStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      jw_interface_msgs::msg::BatteryStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<jw_interface_msgs::msg::BatteryStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      jw_interface_msgs::msg::BatteryStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<jw_interface_msgs::msg::BatteryStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<jw_interface_msgs::msg::BatteryStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<jw_interface_msgs::msg::BatteryStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__jw_interface_msgs__msg__BatteryStatus
    std::shared_ptr<jw_interface_msgs::msg::BatteryStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__jw_interface_msgs__msg__BatteryStatus
    std::shared_ptr<jw_interface_msgs::msg::BatteryStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BatteryStatus_ & other) const
  {
    if (this->charge != other.charge) {
      return false;
    }
    if (this->amperage != other.amperage) {
      return false;
    }
    return true;
  }
  bool operator!=(const BatteryStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BatteryStatus_

// alias to use template instance with default allocator
using BatteryStatus =
  jw_interface_msgs::msg::BatteryStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace jw_interface_msgs

#endif  // JW_INTERFACE_MSGS__MSG__DETAIL__BATTERY_STATUS__STRUCT_HPP_
