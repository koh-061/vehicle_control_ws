// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from jw_interface_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "jw_interface_msgs/msg/detail/status__rosidl_typesupport_introspection_c.h"
#include "jw_interface_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "jw_interface_msgs/msg/detail/status__functions.h"
#include "jw_interface_msgs/msg/detail/status__struct.h"


// Include directives for member types
// Member `time_stamp`
#include "jw_interface_msgs/msg/time_stamp_status.h"
// Member `time_stamp`
#include "jw_interface_msgs/msg/detail/time_stamp_status__rosidl_typesupport_introspection_c.h"
// Member `motor_rpm`
#include "jw_interface_msgs/msg/motor_rpm_status.h"
// Member `motor_rpm`
#include "jw_interface_msgs/msg/detail/motor_rpm_status__rosidl_typesupport_introspection_c.h"
// Member `battery`
#include "jw_interface_msgs/msg/battery_status.h"
// Member `battery`
#include "jw_interface_msgs/msg/detail/battery_status__rosidl_typesupport_introspection_c.h"
// Member `speed_setting`
#include "jw_interface_msgs/msg/speed_setting_status.h"
// Member `speed_setting`
#include "jw_interface_msgs/msg/detail/speed_setting_status__rosidl_typesupport_introspection_c.h"
// Member `js_ad`
#include "jw_interface_msgs/msg/jsad_status.h"
// Member `js_ad`
#include "jw_interface_msgs/msg/detail/jsad_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void jw_interface_msgs__msg__Status__rosidl_typesupport_introspection_c__Status_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  jw_interface_msgs__msg__Status__init(message_memory);
}

void jw_interface_msgs__msg__Status__rosidl_typesupport_introspection_c__Status_fini_function(void * message_memory)
{
  jw_interface_msgs__msg__Status__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember jw_interface_msgs__msg__Status__rosidl_typesupport_introspection_c__Status_message_member_array[5] = {
  {
    "time_stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jw_interface_msgs__msg__Status, time_stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motor_rpm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jw_interface_msgs__msg__Status, motor_rpm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "battery",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jw_interface_msgs__msg__Status, battery),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_setting",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jw_interface_msgs__msg__Status, speed_setting),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "js_ad",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jw_interface_msgs__msg__Status, js_ad),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers jw_interface_msgs__msg__Status__rosidl_typesupport_introspection_c__Status_message_members = {
  "jw_interface_msgs__msg",  // message namespace
  "Status",  // message name
  5,  // number of fields
  sizeof(jw_interface_msgs__msg__Status),
  jw_interface_msgs__msg__Status__rosidl_typesupport_introspection_c__Status_message_member_array,  // message members
  jw_interface_msgs__msg__Status__rosidl_typesupport_introspection_c__Status_init_function,  // function to initialize message memory (memory has to be allocated)
  jw_interface_msgs__msg__Status__rosidl_typesupport_introspection_c__Status_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t jw_interface_msgs__msg__Status__rosidl_typesupport_introspection_c__Status_message_type_support_handle = {
  0,
  &jw_interface_msgs__msg__Status__rosidl_typesupport_introspection_c__Status_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_jw_interface_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jw_interface_msgs, msg, Status)() {
  jw_interface_msgs__msg__Status__rosidl_typesupport_introspection_c__Status_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jw_interface_msgs, msg, TimeStampStatus)();
  jw_interface_msgs__msg__Status__rosidl_typesupport_introspection_c__Status_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jw_interface_msgs, msg, MotorRPMStatus)();
  jw_interface_msgs__msg__Status__rosidl_typesupport_introspection_c__Status_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jw_interface_msgs, msg, BatteryStatus)();
  jw_interface_msgs__msg__Status__rosidl_typesupport_introspection_c__Status_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jw_interface_msgs, msg, SpeedSettingStatus)();
  jw_interface_msgs__msg__Status__rosidl_typesupport_introspection_c__Status_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jw_interface_msgs, msg, JSADStatus)();
  if (!jw_interface_msgs__msg__Status__rosidl_typesupport_introspection_c__Status_message_type_support_handle.typesupport_identifier) {
    jw_interface_msgs__msg__Status__rosidl_typesupport_introspection_c__Status_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &jw_interface_msgs__msg__Status__rosidl_typesupport_introspection_c__Status_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
