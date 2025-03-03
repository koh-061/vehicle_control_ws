// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_auto_perception_msgs:msg/TrackedObjectKinematics.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_auto_perception_msgs/msg/detail/tracked_object_kinematics__rosidl_typesupport_introspection_c.h"
#include "autoware_auto_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_auto_perception_msgs/msg/detail/tracked_object_kinematics__functions.h"
#include "autoware_auto_perception_msgs/msg/detail/tracked_object_kinematics__struct.h"


// Include directives for member types
// Member `centroid_position`
#include "geometry_msgs/msg/point.h"
// Member `centroid_position`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `orientation`
#include "geometry_msgs/msg/quaternion.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/quaternion__rosidl_typesupport_introspection_c.h"
// Member `twist`
#include "geometry_msgs/msg/twist_with_covariance.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist_with_covariance__rosidl_typesupport_introspection_c.h"
// Member `acceleration`
#include "geometry_msgs/msg/accel_with_covariance.h"
// Member `acceleration`
#include "geometry_msgs/msg/detail/accel_with_covariance__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_auto_perception_msgs__msg__TrackedObjectKinematics__rosidl_typesupport_introspection_c__TrackedObjectKinematics_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_auto_perception_msgs__msg__TrackedObjectKinematics__init(message_memory);
}

void autoware_auto_perception_msgs__msg__TrackedObjectKinematics__rosidl_typesupport_introspection_c__TrackedObjectKinematics_fini_function(void * message_memory)
{
  autoware_auto_perception_msgs__msg__TrackedObjectKinematics__fini(message_memory);
}

size_t autoware_auto_perception_msgs__msg__TrackedObjectKinematics__rosidl_typesupport_introspection_c__size_function__TrackedObjectKinematics__position_covariance(
  const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * autoware_auto_perception_msgs__msg__TrackedObjectKinematics__rosidl_typesupport_introspection_c__get_const_function__TrackedObjectKinematics__position_covariance(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * autoware_auto_perception_msgs__msg__TrackedObjectKinematics__rosidl_typesupport_introspection_c__get_function__TrackedObjectKinematics__position_covariance(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void autoware_auto_perception_msgs__msg__TrackedObjectKinematics__rosidl_typesupport_introspection_c__fetch_function__TrackedObjectKinematics__position_covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    autoware_auto_perception_msgs__msg__TrackedObjectKinematics__rosidl_typesupport_introspection_c__get_const_function__TrackedObjectKinematics__position_covariance(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void autoware_auto_perception_msgs__msg__TrackedObjectKinematics__rosidl_typesupport_introspection_c__assign_function__TrackedObjectKinematics__position_covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    autoware_auto_perception_msgs__msg__TrackedObjectKinematics__rosidl_typesupport_introspection_c__get_function__TrackedObjectKinematics__position_covariance(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember autoware_auto_perception_msgs__msg__TrackedObjectKinematics__rosidl_typesupport_introspection_c__TrackedObjectKinematics_message_member_array[7] = {
  {
    "centroid_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__TrackedObjectKinematics, centroid_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__TrackedObjectKinematics, position_covariance),  // bytes offset in struct
    NULL,  // default value
    autoware_auto_perception_msgs__msg__TrackedObjectKinematics__rosidl_typesupport_introspection_c__size_function__TrackedObjectKinematics__position_covariance,  // size() function pointer
    autoware_auto_perception_msgs__msg__TrackedObjectKinematics__rosidl_typesupport_introspection_c__get_const_function__TrackedObjectKinematics__position_covariance,  // get_const(index) function pointer
    autoware_auto_perception_msgs__msg__TrackedObjectKinematics__rosidl_typesupport_introspection_c__get_function__TrackedObjectKinematics__position_covariance,  // get(index) function pointer
    autoware_auto_perception_msgs__msg__TrackedObjectKinematics__rosidl_typesupport_introspection_c__fetch_function__TrackedObjectKinematics__position_covariance,  // fetch(index, &value) function pointer
    autoware_auto_perception_msgs__msg__TrackedObjectKinematics__rosidl_typesupport_introspection_c__assign_function__TrackedObjectKinematics__position_covariance,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__TrackedObjectKinematics, orientation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation_availability",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__TrackedObjectKinematics, orientation_availability),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "twist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__TrackedObjectKinematics, twist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__TrackedObjectKinematics, acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_stationary",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__TrackedObjectKinematics, is_stationary),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_auto_perception_msgs__msg__TrackedObjectKinematics__rosidl_typesupport_introspection_c__TrackedObjectKinematics_message_members = {
  "autoware_auto_perception_msgs__msg",  // message namespace
  "TrackedObjectKinematics",  // message name
  7,  // number of fields
  sizeof(autoware_auto_perception_msgs__msg__TrackedObjectKinematics),
  autoware_auto_perception_msgs__msg__TrackedObjectKinematics__rosidl_typesupport_introspection_c__TrackedObjectKinematics_message_member_array,  // message members
  autoware_auto_perception_msgs__msg__TrackedObjectKinematics__rosidl_typesupport_introspection_c__TrackedObjectKinematics_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_auto_perception_msgs__msg__TrackedObjectKinematics__rosidl_typesupport_introspection_c__TrackedObjectKinematics_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_auto_perception_msgs__msg__TrackedObjectKinematics__rosidl_typesupport_introspection_c__TrackedObjectKinematics_message_type_support_handle = {
  0,
  &autoware_auto_perception_msgs__msg__TrackedObjectKinematics__rosidl_typesupport_introspection_c__TrackedObjectKinematics_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_auto_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_perception_msgs, msg, TrackedObjectKinematics)() {
  autoware_auto_perception_msgs__msg__TrackedObjectKinematics__rosidl_typesupport_introspection_c__TrackedObjectKinematics_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  autoware_auto_perception_msgs__msg__TrackedObjectKinematics__rosidl_typesupport_introspection_c__TrackedObjectKinematics_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Quaternion)();
  autoware_auto_perception_msgs__msg__TrackedObjectKinematics__rosidl_typesupport_introspection_c__TrackedObjectKinematics_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, TwistWithCovariance)();
  autoware_auto_perception_msgs__msg__TrackedObjectKinematics__rosidl_typesupport_introspection_c__TrackedObjectKinematics_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, AccelWithCovariance)();
  if (!autoware_auto_perception_msgs__msg__TrackedObjectKinematics__rosidl_typesupport_introspection_c__TrackedObjectKinematics_message_type_support_handle.typesupport_identifier) {
    autoware_auto_perception_msgs__msg__TrackedObjectKinematics__rosidl_typesupport_introspection_c__TrackedObjectKinematics_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_auto_perception_msgs__msg__TrackedObjectKinematics__rosidl_typesupport_introspection_c__TrackedObjectKinematics_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
