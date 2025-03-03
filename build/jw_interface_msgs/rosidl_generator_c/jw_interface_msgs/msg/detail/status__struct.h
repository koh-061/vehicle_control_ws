// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from jw_interface_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef JW_INTERFACE_MSGS__MSG__DETAIL__STATUS__STRUCT_H_
#define JW_INTERFACE_MSGS__MSG__DETAIL__STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'time_stamp'
#include "jw_interface_msgs/msg/detail/time_stamp_status__struct.h"
// Member 'motor_rpm'
#include "jw_interface_msgs/msg/detail/motor_rpm_status__struct.h"
// Member 'battery'
#include "jw_interface_msgs/msg/detail/battery_status__struct.h"
// Member 'speed_setting'
#include "jw_interface_msgs/msg/detail/speed_setting_status__struct.h"
// Member 'js_ad'
#include "jw_interface_msgs/msg/detail/jsad_status__struct.h"

/// Struct defined in msg/Status in the package jw_interface_msgs.
typedef struct jw_interface_msgs__msg__Status
{
  jw_interface_msgs__msg__TimeStampStatus time_stamp;
  jw_interface_msgs__msg__MotorRPMStatus motor_rpm;
  jw_interface_msgs__msg__BatteryStatus battery;
  jw_interface_msgs__msg__SpeedSettingStatus speed_setting;
  jw_interface_msgs__msg__JSADStatus js_ad;
} jw_interface_msgs__msg__Status;

// Struct for a sequence of jw_interface_msgs__msg__Status.
typedef struct jw_interface_msgs__msg__Status__Sequence
{
  jw_interface_msgs__msg__Status * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} jw_interface_msgs__msg__Status__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // JW_INTERFACE_MSGS__MSG__DETAIL__STATUS__STRUCT_H_
