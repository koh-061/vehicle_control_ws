// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from jw_interface_msgs:msg/MotorRPMStatus.idl
// generated code does not contain a copyright notice

#ifndef JW_INTERFACE_MSGS__MSG__DETAIL__MOTOR_RPM_STATUS__STRUCT_HPP_
#define JW_INTERFACE_MSGS__MSG__DETAIL__MOTOR_RPM_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__jw_interface_msgs__msg__MotorRPMStatus __attribute__((deprecated))
#else
# define DEPRECATED__jw_interface_msgs__msg__MotorRPMStatus __declspec(deprecated)
#endif

namespace jw_interface_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorRPMStatus_
{
  using Type = MotorRPMStatus_<ContainerAllocator>;

  explicit MotorRPMStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_rpm = 0.0f;
      this->right_rpm = 0.0f;
    }
  }

  explicit MotorRPMStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_rpm = 0.0f;
      this->right_rpm = 0.0f;
    }
  }

  // field types and members
  using _left_rpm_type =
    float;
  _left_rpm_type left_rpm;
  using _right_rpm_type =
    float;
  _right_rpm_type right_rpm;

  // setters for named parameter idiom
  Type & set__left_rpm(
    const float & _arg)
  {
    this->left_rpm = _arg;
    return *this;
  }
  Type & set__right_rpm(
    const float & _arg)
  {
    this->right_rpm = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    jw_interface_msgs::msg::MotorRPMStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const jw_interface_msgs::msg::MotorRPMStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<jw_interface_msgs::msg::MotorRPMStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<jw_interface_msgs::msg::MotorRPMStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      jw_interface_msgs::msg::MotorRPMStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<jw_interface_msgs::msg::MotorRPMStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      jw_interface_msgs::msg::MotorRPMStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<jw_interface_msgs::msg::MotorRPMStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<jw_interface_msgs::msg::MotorRPMStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<jw_interface_msgs::msg::MotorRPMStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__jw_interface_msgs__msg__MotorRPMStatus
    std::shared_ptr<jw_interface_msgs::msg::MotorRPMStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__jw_interface_msgs__msg__MotorRPMStatus
    std::shared_ptr<jw_interface_msgs::msg::MotorRPMStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorRPMStatus_ & other) const
  {
    if (this->left_rpm != other.left_rpm) {
      return false;
    }
    if (this->right_rpm != other.right_rpm) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorRPMStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorRPMStatus_

// alias to use template instance with default allocator
using MotorRPMStatus =
  jw_interface_msgs::msg::MotorRPMStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace jw_interface_msgs

#endif  // JW_INTERFACE_MSGS__MSG__DETAIL__MOTOR_RPM_STATUS__STRUCT_HPP_
