// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from jw_interface_msgs:msg/CommandStamped.idl
// generated code does not contain a copyright notice

#ifndef JW_INTERFACE_MSGS__MSG__DETAIL__COMMAND_STAMPED__STRUCT_HPP_
#define JW_INTERFACE_MSGS__MSG__DETAIL__COMMAND_STAMPED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'command'
#include "jw_interface_msgs/msg/detail/command__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__jw_interface_msgs__msg__CommandStamped __attribute__((deprecated))
#else
# define DEPRECATED__jw_interface_msgs__msg__CommandStamped __declspec(deprecated)
#endif

namespace jw_interface_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CommandStamped_
{
  using Type = CommandStamped_<ContainerAllocator>;

  explicit CommandStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    command(_init)
  {
    (void)_init;
  }

  explicit CommandStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    command(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _command_type =
    jw_interface_msgs::msg::Command_<ContainerAllocator>;
  _command_type command;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__command(
    const jw_interface_msgs::msg::Command_<ContainerAllocator> & _arg)
  {
    this->command = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    jw_interface_msgs::msg::CommandStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const jw_interface_msgs::msg::CommandStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<jw_interface_msgs::msg::CommandStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<jw_interface_msgs::msg::CommandStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      jw_interface_msgs::msg::CommandStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<jw_interface_msgs::msg::CommandStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      jw_interface_msgs::msg::CommandStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<jw_interface_msgs::msg::CommandStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<jw_interface_msgs::msg::CommandStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<jw_interface_msgs::msg::CommandStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__jw_interface_msgs__msg__CommandStamped
    std::shared_ptr<jw_interface_msgs::msg::CommandStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__jw_interface_msgs__msg__CommandStamped
    std::shared_ptr<jw_interface_msgs::msg::CommandStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CommandStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->command != other.command) {
      return false;
    }
    return true;
  }
  bool operator!=(const CommandStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CommandStamped_

// alias to use template instance with default allocator
using CommandStamped =
  jw_interface_msgs::msg::CommandStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace jw_interface_msgs

#endif  // JW_INTERFACE_MSGS__MSG__DETAIL__COMMAND_STAMPED__STRUCT_HPP_
