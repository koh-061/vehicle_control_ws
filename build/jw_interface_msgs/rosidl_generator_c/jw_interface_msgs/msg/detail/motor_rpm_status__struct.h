// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from jw_interface_msgs:msg/MotorRPMStatus.idl
// generated code does not contain a copyright notice

#ifndef JW_INTERFACE_MSGS__MSG__DETAIL__MOTOR_RPM_STATUS__STRUCT_H_
#define JW_INTERFACE_MSGS__MSG__DETAIL__MOTOR_RPM_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MotorRPMStatus in the package jw_interface_msgs.
typedef struct jw_interface_msgs__msg__MotorRPMStatus
{
  float left_rpm;
  float right_rpm;
} jw_interface_msgs__msg__MotorRPMStatus;

// Struct for a sequence of jw_interface_msgs__msg__MotorRPMStatus.
typedef struct jw_interface_msgs__msg__MotorRPMStatus__Sequence
{
  jw_interface_msgs__msg__MotorRPMStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} jw_interface_msgs__msg__MotorRPMStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // JW_INTERFACE_MSGS__MSG__DETAIL__MOTOR_RPM_STATUS__STRUCT_H_
