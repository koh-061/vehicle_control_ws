// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from jw_interface_msgs:msg/MotorRPMCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "jw_interface_msgs/msg/detail/motor_rpm_command__rosidl_typesupport_introspection_c.h"
#include "jw_interface_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "jw_interface_msgs/msg/detail/motor_rpm_command__functions.h"
#include "jw_interface_msgs/msg/detail/motor_rpm_command__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void jw_interface_msgs__msg__MotorRPMCommand__rosidl_typesupport_introspection_c__MotorRPMCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  jw_interface_msgs__msg__MotorRPMCommand__init(message_memory);
}

void jw_interface_msgs__msg__MotorRPMCommand__rosidl_typesupport_introspection_c__MotorRPMCommand_fini_function(void * message_memory)
{
  jw_interface_msgs__msg__MotorRPMCommand__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember jw_interface_msgs__msg__MotorRPMCommand__rosidl_typesupport_introspection_c__MotorRPMCommand_message_member_array[2] = {
  {
    "left_rpm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jw_interface_msgs__msg__MotorRPMCommand, left_rpm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_rpm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jw_interface_msgs__msg__MotorRPMCommand, right_rpm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers jw_interface_msgs__msg__MotorRPMCommand__rosidl_typesupport_introspection_c__MotorRPMCommand_message_members = {
  "jw_interface_msgs__msg",  // message namespace
  "MotorRPMCommand",  // message name
  2,  // number of fields
  sizeof(jw_interface_msgs__msg__MotorRPMCommand),
  jw_interface_msgs__msg__MotorRPMCommand__rosidl_typesupport_introspection_c__MotorRPMCommand_message_member_array,  // message members
  jw_interface_msgs__msg__MotorRPMCommand__rosidl_typesupport_introspection_c__MotorRPMCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  jw_interface_msgs__msg__MotorRPMCommand__rosidl_typesupport_introspection_c__MotorRPMCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t jw_interface_msgs__msg__MotorRPMCommand__rosidl_typesupport_introspection_c__MotorRPMCommand_message_type_support_handle = {
  0,
  &jw_interface_msgs__msg__MotorRPMCommand__rosidl_typesupport_introspection_c__MotorRPMCommand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_jw_interface_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jw_interface_msgs, msg, MotorRPMCommand)() {
  if (!jw_interface_msgs__msg__MotorRPMCommand__rosidl_typesupport_introspection_c__MotorRPMCommand_message_type_support_handle.typesupport_identifier) {
    jw_interface_msgs__msg__MotorRPMCommand__rosidl_typesupport_introspection_c__MotorRPMCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &jw_interface_msgs__msg__MotorRPMCommand__rosidl_typesupport_introspection_c__MotorRPMCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
