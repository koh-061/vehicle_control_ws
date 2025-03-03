// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from jw_interface_msgs:msg/Command.idl
// generated code does not contain a copyright notice
#include "jw_interface_msgs/msg/detail/command__rosidl_typesupport_fastrtps_cpp.hpp"
#include "jw_interface_msgs/msg/detail/command__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace jw_interface_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const jw_interface_msgs::msg::ModeCommand &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  jw_interface_msgs::msg::ModeCommand &);
size_t get_serialized_size(
  const jw_interface_msgs::msg::ModeCommand &,
  size_t current_alignment);
size_t
max_serialized_size_ModeCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace jw_interface_msgs

namespace jw_interface_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const jw_interface_msgs::msg::JSADCommand &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  jw_interface_msgs::msg::JSADCommand &);
size_t get_serialized_size(
  const jw_interface_msgs::msg::JSADCommand &,
  size_t current_alignment);
size_t
max_serialized_size_JSADCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace jw_interface_msgs

namespace jw_interface_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const jw_interface_msgs::msg::MotorRPMCommand &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  jw_interface_msgs::msg::MotorRPMCommand &);
size_t get_serialized_size(
  const jw_interface_msgs::msg::MotorRPMCommand &,
  size_t current_alignment);
size_t
max_serialized_size_MotorRPMCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace jw_interface_msgs


namespace jw_interface_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jw_interface_msgs
cdr_serialize(
  const jw_interface_msgs::msg::Command & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: mode
  jw_interface_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.mode,
    cdr);
  // Member: js_ad
  jw_interface_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.js_ad,
    cdr);
  // Member: motor_rpm
  jw_interface_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.motor_rpm,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jw_interface_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  jw_interface_msgs::msg::Command & ros_message)
{
  // Member: mode
  jw_interface_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.mode);

  // Member: js_ad
  jw_interface_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.js_ad);

  // Member: motor_rpm
  jw_interface_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.motor_rpm);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jw_interface_msgs
get_serialized_size(
  const jw_interface_msgs::msg::Command & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: mode

  current_alignment +=
    jw_interface_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.mode, current_alignment);
  // Member: js_ad

  current_alignment +=
    jw_interface_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.js_ad, current_alignment);
  // Member: motor_rpm

  current_alignment +=
    jw_interface_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.motor_rpm, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jw_interface_msgs
max_serialized_size_Command(
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


  // Member: mode
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        jw_interface_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ModeCommand(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: js_ad
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        jw_interface_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_JSADCommand(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: motor_rpm
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        jw_interface_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_MotorRPMCommand(
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
    using DataType = jw_interface_msgs::msg::Command;
    is_plain =
      (
      offsetof(DataType, motor_rpm) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Command__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const jw_interface_msgs::msg::Command *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Command__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<jw_interface_msgs::msg::Command *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Command__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const jw_interface_msgs::msg::Command *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Command__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Command(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Command__callbacks = {
  "jw_interface_msgs::msg",
  "Command",
  _Command__cdr_serialize,
  _Command__cdr_deserialize,
  _Command__get_serialized_size,
  _Command__max_serialized_size
};

static rosidl_message_type_support_t _Command__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Command__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace jw_interface_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_jw_interface_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<jw_interface_msgs::msg::Command>()
{
  return &jw_interface_msgs::msg::typesupport_fastrtps_cpp::_Command__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, jw_interface_msgs, msg, Command)() {
  return &jw_interface_msgs::msg::typesupport_fastrtps_cpp::_Command__handle;
}

#ifdef __cplusplus
}
#endif
