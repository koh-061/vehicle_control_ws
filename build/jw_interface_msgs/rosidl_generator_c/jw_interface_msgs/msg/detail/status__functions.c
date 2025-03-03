// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from jw_interface_msgs:msg/Status.idl
// generated code does not contain a copyright notice
#include "jw_interface_msgs/msg/detail/status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `time_stamp`
#include "jw_interface_msgs/msg/detail/time_stamp_status__functions.h"
// Member `motor_rpm`
#include "jw_interface_msgs/msg/detail/motor_rpm_status__functions.h"
// Member `battery`
#include "jw_interface_msgs/msg/detail/battery_status__functions.h"
// Member `speed_setting`
#include "jw_interface_msgs/msg/detail/speed_setting_status__functions.h"
// Member `js_ad`
#include "jw_interface_msgs/msg/detail/jsad_status__functions.h"

bool
jw_interface_msgs__msg__Status__init(jw_interface_msgs__msg__Status * msg)
{
  if (!msg) {
    return false;
  }
  // time_stamp
  if (!jw_interface_msgs__msg__TimeStampStatus__init(&msg->time_stamp)) {
    jw_interface_msgs__msg__Status__fini(msg);
    return false;
  }
  // motor_rpm
  if (!jw_interface_msgs__msg__MotorRPMStatus__init(&msg->motor_rpm)) {
    jw_interface_msgs__msg__Status__fini(msg);
    return false;
  }
  // battery
  if (!jw_interface_msgs__msg__BatteryStatus__init(&msg->battery)) {
    jw_interface_msgs__msg__Status__fini(msg);
    return false;
  }
  // speed_setting
  if (!jw_interface_msgs__msg__SpeedSettingStatus__init(&msg->speed_setting)) {
    jw_interface_msgs__msg__Status__fini(msg);
    return false;
  }
  // js_ad
  if (!jw_interface_msgs__msg__JSADStatus__init(&msg->js_ad)) {
    jw_interface_msgs__msg__Status__fini(msg);
    return false;
  }
  return true;
}

void
jw_interface_msgs__msg__Status__fini(jw_interface_msgs__msg__Status * msg)
{
  if (!msg) {
    return;
  }
  // time_stamp
  jw_interface_msgs__msg__TimeStampStatus__fini(&msg->time_stamp);
  // motor_rpm
  jw_interface_msgs__msg__MotorRPMStatus__fini(&msg->motor_rpm);
  // battery
  jw_interface_msgs__msg__BatteryStatus__fini(&msg->battery);
  // speed_setting
  jw_interface_msgs__msg__SpeedSettingStatus__fini(&msg->speed_setting);
  // js_ad
  jw_interface_msgs__msg__JSADStatus__fini(&msg->js_ad);
}

bool
jw_interface_msgs__msg__Status__are_equal(const jw_interface_msgs__msg__Status * lhs, const jw_interface_msgs__msg__Status * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // time_stamp
  if (!jw_interface_msgs__msg__TimeStampStatus__are_equal(
      &(lhs->time_stamp), &(rhs->time_stamp)))
  {
    return false;
  }
  // motor_rpm
  if (!jw_interface_msgs__msg__MotorRPMStatus__are_equal(
      &(lhs->motor_rpm), &(rhs->motor_rpm)))
  {
    return false;
  }
  // battery
  if (!jw_interface_msgs__msg__BatteryStatus__are_equal(
      &(lhs->battery), &(rhs->battery)))
  {
    return false;
  }
  // speed_setting
  if (!jw_interface_msgs__msg__SpeedSettingStatus__are_equal(
      &(lhs->speed_setting), &(rhs->speed_setting)))
  {
    return false;
  }
  // js_ad
  if (!jw_interface_msgs__msg__JSADStatus__are_equal(
      &(lhs->js_ad), &(rhs->js_ad)))
  {
    return false;
  }
  return true;
}

bool
jw_interface_msgs__msg__Status__copy(
  const jw_interface_msgs__msg__Status * input,
  jw_interface_msgs__msg__Status * output)
{
  if (!input || !output) {
    return false;
  }
  // time_stamp
  if (!jw_interface_msgs__msg__TimeStampStatus__copy(
      &(input->time_stamp), &(output->time_stamp)))
  {
    return false;
  }
  // motor_rpm
  if (!jw_interface_msgs__msg__MotorRPMStatus__copy(
      &(input->motor_rpm), &(output->motor_rpm)))
  {
    return false;
  }
  // battery
  if (!jw_interface_msgs__msg__BatteryStatus__copy(
      &(input->battery), &(output->battery)))
  {
    return false;
  }
  // speed_setting
  if (!jw_interface_msgs__msg__SpeedSettingStatus__copy(
      &(input->speed_setting), &(output->speed_setting)))
  {
    return false;
  }
  // js_ad
  if (!jw_interface_msgs__msg__JSADStatus__copy(
      &(input->js_ad), &(output->js_ad)))
  {
    return false;
  }
  return true;
}

jw_interface_msgs__msg__Status *
jw_interface_msgs__msg__Status__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jw_interface_msgs__msg__Status * msg = (jw_interface_msgs__msg__Status *)allocator.allocate(sizeof(jw_interface_msgs__msg__Status), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(jw_interface_msgs__msg__Status));
  bool success = jw_interface_msgs__msg__Status__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
jw_interface_msgs__msg__Status__destroy(jw_interface_msgs__msg__Status * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    jw_interface_msgs__msg__Status__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
jw_interface_msgs__msg__Status__Sequence__init(jw_interface_msgs__msg__Status__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jw_interface_msgs__msg__Status * data = NULL;

  if (size) {
    data = (jw_interface_msgs__msg__Status *)allocator.zero_allocate(size, sizeof(jw_interface_msgs__msg__Status), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = jw_interface_msgs__msg__Status__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        jw_interface_msgs__msg__Status__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
jw_interface_msgs__msg__Status__Sequence__fini(jw_interface_msgs__msg__Status__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      jw_interface_msgs__msg__Status__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

jw_interface_msgs__msg__Status__Sequence *
jw_interface_msgs__msg__Status__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jw_interface_msgs__msg__Status__Sequence * array = (jw_interface_msgs__msg__Status__Sequence *)allocator.allocate(sizeof(jw_interface_msgs__msg__Status__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = jw_interface_msgs__msg__Status__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
jw_interface_msgs__msg__Status__Sequence__destroy(jw_interface_msgs__msg__Status__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    jw_interface_msgs__msg__Status__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
jw_interface_msgs__msg__Status__Sequence__are_equal(const jw_interface_msgs__msg__Status__Sequence * lhs, const jw_interface_msgs__msg__Status__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!jw_interface_msgs__msg__Status__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
jw_interface_msgs__msg__Status__Sequence__copy(
  const jw_interface_msgs__msg__Status__Sequence * input,
  jw_interface_msgs__msg__Status__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(jw_interface_msgs__msg__Status);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    jw_interface_msgs__msg__Status * data =
      (jw_interface_msgs__msg__Status *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!jw_interface_msgs__msg__Status__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          jw_interface_msgs__msg__Status__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!jw_interface_msgs__msg__Status__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
