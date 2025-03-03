// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from jw_interface_msgs:msg/Command.idl
// generated code does not contain a copyright notice
#include "jw_interface_msgs/msg/detail/command__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "jw_interface_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "jw_interface_msgs/msg/detail/command__struct.h"
#include "jw_interface_msgs/msg/detail/command__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "jw_interface_msgs/msg/detail/jsad_command__functions.h"  // js_ad
#include "jw_interface_msgs/msg/detail/mode_command__functions.h"  // mode
#include "jw_interface_msgs/msg/detail/motor_rpm_command__functions.h"  // motor_rpm

// forward declare type support functions
size_t get_serialized_size_jw_interface_msgs__msg__JSADCommand(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_jw_interface_msgs__msg__JSADCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jw_interface_msgs, msg, JSADCommand)();
size_t get_serialized_size_jw_interface_msgs__msg__ModeCommand(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_jw_interface_msgs__msg__ModeCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jw_interface_msgs, msg, ModeCommand)();
size_t get_serialized_size_jw_interface_msgs__msg__MotorRPMCommand(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_jw_interface_msgs__msg__MotorRPMCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jw_interface_msgs, msg, MotorRPMCommand)();


using _Command__ros_msg_type = jw_interface_msgs__msg__Command;

static bool _Command__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Command__ros_msg_type * ros_message = static_cast<const _Command__ros_msg_type *>(untyped_ros_message);
  // Field name: mode
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, jw_interface_msgs, msg, ModeCommand
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->mode, cdr))
    {
      return false;
    }
  }

  // Field name: js_ad
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, jw_interface_msgs, msg, JSADCommand
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->js_ad, cdr))
    {
      return false;
    }
  }

  // Field name: motor_rpm
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, jw_interface_msgs, msg, MotorRPMCommand
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->motor_rpm, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Command__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Command__ros_msg_type * ros_message = static_cast<_Command__ros_msg_type *>(untyped_ros_message);
  // Field name: mode
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, jw_interface_msgs, msg, ModeCommand
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->mode))
    {
      return false;
    }
  }

  // Field name: js_ad
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, jw_interface_msgs, msg, JSADCommand
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->js_ad))
    {
      return false;
    }
  }

  // Field name: motor_rpm
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, jw_interface_msgs, msg, MotorRPMCommand
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->motor_rpm))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jw_interface_msgs
size_t get_serialized_size_jw_interface_msgs__msg__Command(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Command__ros_msg_type * ros_message = static_cast<const _Command__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name mode

  current_alignment += get_serialized_size_jw_interface_msgs__msg__ModeCommand(
    &(ros_message->mode), current_alignment);
  // field.name js_ad

  current_alignment += get_serialized_size_jw_interface_msgs__msg__JSADCommand(
    &(ros_message->js_ad), current_alignment);
  // field.name motor_rpm

  current_alignment += get_serialized_size_jw_interface_msgs__msg__MotorRPMCommand(
    &(ros_message->motor_rpm), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Command__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_jw_interface_msgs__msg__Command(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jw_interface_msgs
size_t max_serialized_size_jw_interface_msgs__msg__Command(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: mode
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_jw_interface_msgs__msg__ModeCommand(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: js_ad
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_jw_interface_msgs__msg__JSADCommand(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: motor_rpm
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_jw_interface_msgs__msg__MotorRPMCommand(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = jw_interface_msgs__msg__Command;
    is_plain =
      (
      offsetof(DataType, motor_rpm) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Command__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_jw_interface_msgs__msg__Command(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Command = {
  "jw_interface_msgs::msg",
  "Command",
  _Command__cdr_serialize,
  _Command__cdr_deserialize,
  _Command__get_serialized_size,
  _Command__max_serialized_size
};

static rosidl_message_type_support_t _Command__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Command,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jw_interface_msgs, msg, Command)() {
  return &_Command__type_support;
}

#if defined(__cplusplus)
}
#endif
