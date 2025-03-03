// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from jw_interface_msgs:msg/JSADStatus.idl
// generated code does not contain a copyright notice

#ifndef JW_INTERFACE_MSGS__MSG__DETAIL__JSAD_STATUS__STRUCT_HPP_
#define JW_INTERFACE_MSGS__MSG__DETAIL__JSAD_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__jw_interface_msgs__msg__JSADStatus __attribute__((deprecated))
#else
# define DEPRECATED__jw_interface_msgs__msg__JSADStatus __declspec(deprecated)
#endif

namespace jw_interface_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JSADStatus_
{
  using Type = JSADStatus_<ContainerAllocator>;

  explicit JSADStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->front_back_ratio = 0.0f;
      this->left_right_ratio = 0.0f;
    }
  }

  explicit JSADStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->front_back_ratio = 0.0f;
      this->left_right_ratio = 0.0f;
    }
  }

  // field types and members
  using _front_back_ratio_type =
    float;
  _front_back_ratio_type front_back_ratio;
  using _left_right_ratio_type =
    float;
  _left_right_ratio_type left_right_ratio;

  // setters for named parameter idiom
  Type & set__front_back_ratio(
    const float & _arg)
  {
    this->front_back_ratio = _arg;
    return *this;
  }
  Type & set__left_right_ratio(
    const float & _arg)
  {
    this->left_right_ratio = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    jw_interface_msgs::msg::JSADStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const jw_interface_msgs::msg::JSADStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<jw_interface_msgs::msg::JSADStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<jw_interface_msgs::msg::JSADStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      jw_interface_msgs::msg::JSADStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<jw_interface_msgs::msg::JSADStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      jw_interface_msgs::msg::JSADStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<jw_interface_msgs::msg::JSADStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<jw_interface_msgs::msg::JSADStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<jw_interface_msgs::msg::JSADStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__jw_interface_msgs__msg__JSADStatus
    std::shared_ptr<jw_interface_msgs::msg::JSADStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__jw_interface_msgs__msg__JSADStatus
    std::shared_ptr<jw_interface_msgs::msg::JSADStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JSADStatus_ & other) const
  {
    if (this->front_back_ratio != other.front_back_ratio) {
      return false;
    }
    if (this->left_right_ratio != other.left_right_ratio) {
      return false;
    }
    return true;
  }
  bool operator!=(const JSADStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JSADStatus_

// alias to use template instance with default allocator
using JSADStatus =
  jw_interface_msgs::msg::JSADStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace jw_interface_msgs

#endif  // JW_INTERFACE_MSGS__MSG__DETAIL__JSAD_STATUS__STRUCT_HPP_
