// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from jw_interface_msgs:msg/TimeStampStatus.idl
// generated code does not contain a copyright notice

#ifndef JW_INTERFACE_MSGS__MSG__DETAIL__TIME_STAMP_STATUS__STRUCT_H_
#define JW_INTERFACE_MSGS__MSG__DETAIL__TIME_STAMP_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/TimeStampStatus in the package jw_interface_msgs.
typedef struct jw_interface_msgs__msg__TimeStampStatus
{
  float time_stamp;
} jw_interface_msgs__msg__TimeStampStatus;

// Struct for a sequence of jw_interface_msgs__msg__TimeStampStatus.
typedef struct jw_interface_msgs__msg__TimeStampStatus__Sequence
{
  jw_interface_msgs__msg__TimeStampStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} jw_interface_msgs__msg__TimeStampStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // JW_INTERFACE_MSGS__MSG__DETAIL__TIME_STAMP_STATUS__STRUCT_H_
