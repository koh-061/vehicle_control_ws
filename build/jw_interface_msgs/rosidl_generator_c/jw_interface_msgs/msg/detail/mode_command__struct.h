// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from jw_interface_msgs:msg/ModeCommand.idl
// generated code does not contain a copyright notice

#ifndef JW_INTERFACE_MSGS__MSG__DETAIL__MODE_COMMAND__STRUCT_H_
#define JW_INTERFACE_MSGS__MSG__DETAIL__MODE_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MANUAL'.
enum
{
  jw_interface_msgs__msg__ModeCommand__MANUAL = 0
};

/// Constant 'JS_AD_CONTROL'.
enum
{
  jw_interface_msgs__msg__ModeCommand__JS_AD_CONTROL = 1
};

/// Constant 'MOTOR_RPM_CONTROL'.
enum
{
  jw_interface_msgs__msg__ModeCommand__MOTOR_RPM_CONTROL = 2
};

/// Struct defined in msg/ModeCommand in the package jw_interface_msgs.
typedef struct jw_interface_msgs__msg__ModeCommand
{
  uint8_t mode;
} jw_interface_msgs__msg__ModeCommand;

// Struct for a sequence of jw_interface_msgs__msg__ModeCommand.
typedef struct jw_interface_msgs__msg__ModeCommand__Sequence
{
  jw_interface_msgs__msg__ModeCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} jw_interface_msgs__msg__ModeCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // JW_INTERFACE_MSGS__MSG__DETAIL__MODE_COMMAND__STRUCT_H_
