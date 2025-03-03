// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from jw_interface_msgs:msg/MotorRPMCommand.idl
// generated code does not contain a copyright notice

#ifndef JW_INTERFACE_MSGS__MSG__DETAIL__MOTOR_RPM_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define JW_INTERFACE_MSGS__MSG__DETAIL__MOTOR_RPM_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "jw_interface_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "jw_interface_msgs/msg/detail/motor_rpm_command__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace jw_interface_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jw_interface_msgs
cdr_serialize(
  const jw_interface_msgs::msg::MotorRPMCommand & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jw_interface_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  jw_interface_msgs::msg::MotorRPMCommand & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jw_interface_msgs
get_serialized_size(
  const jw_interface_msgs::msg::MotorRPMCommand & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jw_interface_msgs
max_serialized_size_MotorRPMCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace jw_interface_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jw_interface_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, jw_interface_msgs, msg, MotorRPMCommand)();

#ifdef __cplusplus
}
#endif

#endif  // JW_INTERFACE_MSGS__MSG__DETAIL__MOTOR_RPM_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
