// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from jw_interface_msgs:msg/TimeStampStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "jw_interface_msgs/msg/detail/time_stamp_status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace jw_interface_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TimeStampStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) jw_interface_msgs::msg::TimeStampStatus(_init);
}

void TimeStampStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<jw_interface_msgs::msg::TimeStampStatus *>(message_memory);
  typed_message->~TimeStampStatus();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TimeStampStatus_message_member_array[1] = {
  {
    "time_stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jw_interface_msgs::msg::TimeStampStatus, time_stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TimeStampStatus_message_members = {
  "jw_interface_msgs::msg",  // message namespace
  "TimeStampStatus",  // message name
  1,  // number of fields
  sizeof(jw_interface_msgs::msg::TimeStampStatus),
  TimeStampStatus_message_member_array,  // message members
  TimeStampStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  TimeStampStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TimeStampStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TimeStampStatus_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace jw_interface_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<jw_interface_msgs::msg::TimeStampStatus>()
{
  return &::jw_interface_msgs::msg::rosidl_typesupport_introspection_cpp::TimeStampStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, jw_interface_msgs, msg, TimeStampStatus)() {
  return &::jw_interface_msgs::msg::rosidl_typesupport_introspection_cpp::TimeStampStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
