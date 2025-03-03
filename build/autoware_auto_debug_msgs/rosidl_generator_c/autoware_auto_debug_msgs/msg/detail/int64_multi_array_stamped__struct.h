// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_debug_msgs:msg/Int64MultiArrayStamped.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_DEBUG_MSGS__MSG__DETAIL__INT64_MULTI_ARRAY_STAMPED__STRUCT_H_
#define AUTOWARE_AUTO_DEBUG_MSGS__MSG__DETAIL__INT64_MULTI_ARRAY_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'layout'
#include "autoware_auto_debug_msgs/msg/detail/multi_array_layout__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Int64MultiArrayStamped in the package autoware_auto_debug_msgs.
typedef struct autoware_auto_debug_msgs__msg__Int64MultiArrayStamped
{
  builtin_interfaces__msg__Time stamp;
  autoware_auto_debug_msgs__msg__MultiArrayLayout layout;
  rosidl_runtime_c__int64__Sequence data;
} autoware_auto_debug_msgs__msg__Int64MultiArrayStamped;

// Struct for a sequence of autoware_auto_debug_msgs__msg__Int64MultiArrayStamped.
typedef struct autoware_auto_debug_msgs__msg__Int64MultiArrayStamped__Sequence
{
  autoware_auto_debug_msgs__msg__Int64MultiArrayStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_debug_msgs__msg__Int64MultiArrayStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_DEBUG_MSGS__MSG__DETAIL__INT64_MULTI_ARRAY_STAMPED__STRUCT_H_
