// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_planning_msgs:msg/LateralOffset.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__LATERAL_OFFSET__STRUCT_H_
#define AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__LATERAL_OFFSET__STRUCT_H_

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

/// Struct defined in msg/LateralOffset in the package autoware_auto_planning_msgs.
/**
  *  The amount of the offset to shift the reference path.
 */
typedef struct autoware_auto_planning_msgs__msg__LateralOffset
{
  builtin_interfaces__msg__Time stamp;
  float lateral_offset;
} autoware_auto_planning_msgs__msg__LateralOffset;

// Struct for a sequence of autoware_auto_planning_msgs__msg__LateralOffset.
typedef struct autoware_auto_planning_msgs__msg__LateralOffset__Sequence
{
  autoware_auto_planning_msgs__msg__LateralOffset * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_planning_msgs__msg__LateralOffset__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__LATERAL_OFFSET__STRUCT_H_
