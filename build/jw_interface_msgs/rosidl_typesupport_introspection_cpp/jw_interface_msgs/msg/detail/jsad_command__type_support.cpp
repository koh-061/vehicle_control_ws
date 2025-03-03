// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from jw_interface_msgs:msg/JSADCommand.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "jw_interface_msgs/msg/detail/jsad_command__struct.hpp"
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

void JSADCommand_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) jw_interface_msgs::msg::JSADCommand(_init);
}

void JSADCommand_fini_function(void * message_memory)
{
  auto typed_message = static_cast<jw_interface_msgs::msg::JSADCommand *>(message_memory);
  typed_message->~JSADCommand();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember JSADCommand_message_member_array[2] = {
  {
    "front_back_ratio",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jw_interface_msgs::msg::JSADCommand, front_back_ratio),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "left_right_ratio",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jw_interface_msgs::msg::JSADCommand, left_right_ratio),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers JSADCommand_message_members = {
  "jw_interface_msgs::msg",  // message namespace
  "JSADCommand",  // message name
  2,  // number of fields
  sizeof(jw_interface_msgs::msg::JSADCommand),
  JSADCommand_message_member_array,  // message members
  JSADCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  JSADCommand_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t JSADCommand_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &JSADCommand_message_members,
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
get_message_type_support_handle<jw_interface_msgs::msg::JSADCommand>()
{
  return &::jw_interface_msgs::msg::rosidl_typesupport_introspection_cpp::JSADCommand_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, jw_interface_msgs, msg, JSADCommand)() {
  return &::jw_interface_msgs::msg::rosidl_typesupport_introspection_cpp::JSADCommand_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
