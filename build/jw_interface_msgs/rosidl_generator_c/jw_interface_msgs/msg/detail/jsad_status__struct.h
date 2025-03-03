// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from jw_interface_msgs:msg/JSADStatus.idl
// generated code does not contain a copyright notice

#ifndef JW_INTERFACE_MSGS__MSG__DETAIL__JSAD_STATUS__STRUCT_H_
#define JW_INTERFACE_MSGS__MSG__DETAIL__JSAD_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/JSADStatus in the package jw_interface_msgs.
typedef struct jw_interface_msgs__msg__JSADStatus
{
  float front_back_ratio;
  float left_right_ratio;
} jw_interface_msgs__msg__JSADStatus;

// Struct for a sequence of jw_interface_msgs__msg__JSADStatus.
typedef struct jw_interface_msgs__msg__JSADStatus__Sequence
{
  jw_interface_msgs__msg__JSADStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} jw_interface_msgs__msg__JSADStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // JW_INTERFACE_MSGS__MSG__DETAIL__JSAD_STATUS__STRUCT_H_
