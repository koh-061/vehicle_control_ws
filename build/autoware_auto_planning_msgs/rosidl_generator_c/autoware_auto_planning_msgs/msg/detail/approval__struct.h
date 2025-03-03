// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_planning_msgs:msg/Approval.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__APPROVAL__STRUCT_H_
#define AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__APPROVAL__STRUCT_H_

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

/// Struct defined in msg/Approval in the package autoware_auto_planning_msgs.
/**
  *  Command for approval when an external input is required to make planning related decisions. A node subscribes this message when it needs an approval from an external source.
 */
typedef struct autoware_auto_planning_msgs__msg__Approval
{
  builtin_interfaces__msg__Time stamp;
  ///  Determines if proposed action is approved.
  bool approval;
} autoware_auto_planning_msgs__msg__Approval;

// Struct for a sequence of autoware_auto_planning_msgs__msg__Approval.
typedef struct autoware_auto_planning_msgs__msg__Approval__Sequence
{
  autoware_auto_planning_msgs__msg__Approval * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_planning_msgs__msg__Approval__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__APPROVAL__STRUCT_H_
