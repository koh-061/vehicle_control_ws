// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from jw_interface_msgs:msg/Status.idl
// generated code does not contain a copyright notice
#include "jw_interface_msgs/msg/detail/status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "jw_interface_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "jw_interface_msgs/msg/detail/status__struct.h"
#include "jw_interface_msgs/msg/detail/status__functions.h"
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

#include "jw_interface_msgs/msg/detail/battery_status__functions.h"  // battery
#include "jw_interface_msgs/msg/detail/jsad_status__functions.h"  // js_ad
#include "jw_interface_msgs/msg/detail/motor_rpm_status__functions.h"  // motor_rpm
#include "jw_interface_msgs/msg/detail/speed_setting_status__functions.h"  // speed_setting
#include "jw_interface_msgs/msg/detail/time_stamp_status__functions.h"  // time_stamp

// forward declare type support functions
size_t get_serialized_size_jw_interface_msgs__msg__BatteryStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_jw_interface_msgs__msg__BatteryStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jw_interface_msgs, msg, BatteryStatus)();
size_t get_serialized_size_jw_interface_msgs__msg__JSADStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_jw_interface_msgs__msg__JSADStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jw_interface_msgs, msg, JSADStatus)();
size_t get_serialized_size_jw_interface_msgs__msg__MotorRPMStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_jw_interface_msgs__msg__MotorRPMStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jw_interface_msgs, msg, MotorRPMStatus)();
size_t get_serialized_size_jw_interface_msgs__msg__SpeedSettingStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_jw_interface_msgs__msg__SpeedSettingStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jw_interface_msgs, msg, SpeedSettingStatus)();
size_t get_serialized_size_jw_interface_msgs__msg__TimeStampStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_jw_interface_msgs__msg__TimeStampStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jw_interface_msgs, msg, TimeStampStatus)();


using _Status__ros_msg_type = jw_interface_msgs__msg__Status;

static bool _Status__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Status__ros_msg_type * ros_message = static_cast<const _Status__ros_msg_type *>(untyped_ros_message);
  // Field name: time_stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, jw_interface_msgs, msg, TimeStampStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->time_stamp, cdr))
    {
      return false;
    }
  }

  // Field name: motor_rpm
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, jw_interface_msgs, msg, MotorRPMStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->motor_rpm, cdr))
    {
      return false;
    }
  }

  // Field name: battery
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, jw_interface_msgs, msg, BatteryStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->battery, cdr))
    {
      return false;
    }
  }

  // Field name: speed_setting
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, jw_interface_msgs, msg, SpeedSettingStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->speed_setting, cdr))
    {
      return false;
    }
  }

  // Field name: js_ad
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, jw_interface_msgs, msg, JSADStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->js_ad, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Status__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Status__ros_msg_type * ros_message = static_cast<_Status__ros_msg_type *>(untyped_ros_message);
  // Field name: time_stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, jw_interface_msgs, msg, TimeStampStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->time_stamp))
    {
      return false;
    }
  }

  // Field name: motor_rpm
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, jw_interface_msgs, msg, MotorRPMStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->motor_rpm))
    {
      return false;
    }
  }

  // Field name: battery
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, jw_interface_msgs, msg, BatteryStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->battery))
    {
      return false;
    }
  }

  // Field name: speed_setting
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, jw_interface_msgs, msg, SpeedSettingStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->speed_setting))
    {
      return false;
    }
  }

  // Field name: js_ad
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, jw_interface_msgs, msg, JSADStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->js_ad))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jw_interface_msgs
size_t get_serialized_size_jw_interface_msgs__msg__Status(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Status__ros_msg_type * ros_message = static_cast<const _Status__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name time_stamp

  current_alignment += get_serialized_size_jw_interface_msgs__msg__TimeStampStatus(
    &(ros_message->time_stamp), current_alignment);
  // field.name motor_rpm

  current_alignment += get_serialized_size_jw_interface_msgs__msg__MotorRPMStatus(
    &(ros_message->motor_rpm), current_alignment);
  // field.name battery

  current_alignment += get_serialized_size_jw_interface_msgs__msg__BatteryStatus(
    &(ros_message->battery), current_alignment);
  // field.name speed_setting

  current_alignment += get_serialized_size_jw_interface_msgs__msg__SpeedSettingStatus(
    &(ros_message->speed_setting), current_alignment);
  // field.name js_ad

  current_alignment += get_serialized_size_jw_interface_msgs__msg__JSADStatus(
    &(ros_message->js_ad), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Status__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_jw_interface_msgs__msg__Status(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jw_interface_msgs
size_t max_serialized_size_jw_interface_msgs__msg__Status(
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

  // member: time_stamp
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_jw_interface_msgs__msg__TimeStampStatus(
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
        max_serialized_size_jw_interface_msgs__msg__MotorRPMStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: battery
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_jw_interface_msgs__msg__BatteryStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: speed_setting
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_jw_interface_msgs__msg__SpeedSettingStatus(
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
        max_serialized_size_jw_interface_msgs__msg__JSADStatus(
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
    using DataType = jw_interface_msgs__msg__Status;
    is_plain =
      (
      offsetof(DataType, js_ad) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Status__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_jw_interface_msgs__msg__Status(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Status = {
  "jw_interface_msgs::msg",
  "Status",
  _Status__cdr_serialize,
  _Status__cdr_deserialize,
  _Status__get_serialized_size,
  _Status__max_serialized_size
};

static rosidl_message_type_support_t _Status__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Status,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jw_interface_msgs, msg, Status)() {
  return &_Status__type_support;
}

#if defined(__cplusplus)
}
#endif
