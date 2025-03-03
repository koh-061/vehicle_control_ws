// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from jw_interface_msgs:msg/Command.idl
// generated code does not contain a copyright notice

#ifndef JW_INTERFACE_MSGS__MSG__DETAIL__COMMAND__STRUCT_H_
#define JW_INTERFACE_MSGS__MSG__DETAIL__COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mode'
#include "jw_interface_msgs/msg/detail/mode_command__struct.h"
// Member 'js_ad'
#include "jw_interface_msgs/msg/detail/jsad_command__struct.h"
// Member 'motor_rpm'
#include "jw_interface_msgs/msg/detail/motor_rpm_command__struct.h"

/// Struct defined in msg/Command in the package jw_interface_msgs.
typedef struct jw_interface_msgs__msg__Command
{
  jw_interface_msgs__msg__ModeCommand mode;
  jw_interface_msgs__msg__JSADCommand js_ad;
  jw_interface_msgs__msg__MotorRPMCommand motor_rpm;
} jw_interface_msgs__msg__Command;

// Struct for a sequence of jw_interface_msgs__msg__Command.
typedef struct jw_interface_msgs__msg__Command__Sequence
{
  jw_interface_msgs__msg__Command * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} jw_interface_msgs__msg__Command__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // JW_INTERFACE_MSGS__MSG__DETAIL__COMMAND__STRUCT_H_
