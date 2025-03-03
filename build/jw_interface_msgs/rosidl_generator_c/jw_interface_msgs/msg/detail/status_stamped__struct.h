// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from jw_interface_msgs:msg/StatusStamped.idl
// generated code does not contain a copyright notice

#ifndef JW_INTERFACE_MSGS__MSG__DETAIL__STATUS_STAMPED__STRUCT_H_
#define JW_INTERFACE_MSGS__MSG__DETAIL__STATUS_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'status'
#include "jw_interface_msgs/msg/detail/status__struct.h"

/// Struct defined in msg/StatusStamped in the package jw_interface_msgs.
typedef struct jw_interface_msgs__msg__StatusStamped
{
  std_msgs__msg__Header header;
  jw_interface_msgs__msg__Status status;
} jw_interface_msgs__msg__StatusStamped;

// Struct for a sequence of jw_interface_msgs__msg__StatusStamped.
typedef struct jw_interface_msgs__msg__StatusStamped__Sequence
{
  jw_interface_msgs__msg__StatusStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} jw_interface_msgs__msg__StatusStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // JW_INTERFACE_MSGS__MSG__DETAIL__STATUS_STAMPED__STRUCT_H_
