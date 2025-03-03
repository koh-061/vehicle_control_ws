// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_planning_msgs:msg/PathChangeModuleId.idl
// generated code does not contain a copyright notice
#include "autoware_auto_planning_msgs/msg/detail/path_change_module_id__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
autoware_auto_planning_msgs__msg__PathChangeModuleId__init(autoware_auto_planning_msgs__msg__PathChangeModuleId * msg)
{
  if (!msg) {
    return false;
  }
  // type
  msg->type = 0;
  return true;
}

void
autoware_auto_planning_msgs__msg__PathChangeModuleId__fini(autoware_auto_planning_msgs__msg__PathChangeModuleId * msg)
{
  if (!msg) {
    return;
  }
  // type
}

bool
autoware_auto_planning_msgs__msg__PathChangeModuleId__are_equal(const autoware_auto_planning_msgs__msg__PathChangeModuleId * lhs, const autoware_auto_planning_msgs__msg__PathChangeModuleId * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  return true;
}

bool
autoware_auto_planning_msgs__msg__PathChangeModuleId__copy(
  const autoware_auto_planning_msgs__msg__PathChangeModuleId * input,
  autoware_auto_planning_msgs__msg__PathChangeModuleId * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  output->type = input->type;
  return true;
}

autoware_auto_planning_msgs__msg__PathChangeModuleId *
autoware_auto_planning_msgs__msg__PathChangeModuleId__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__msg__PathChangeModuleId * msg = (autoware_auto_planning_msgs__msg__PathChangeModuleId *)allocator.allocate(sizeof(autoware_auto_planning_msgs__msg__PathChangeModuleId), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_planning_msgs__msg__PathChangeModuleId));
  bool success = autoware_auto_planning_msgs__msg__PathChangeModuleId__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_auto_planning_msgs__msg__PathChangeModuleId__destroy(autoware_auto_planning_msgs__msg__PathChangeModuleId * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_auto_planning_msgs__msg__PathChangeModuleId__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_auto_planning_msgs__msg__PathChangeModuleId__Sequence__init(autoware_auto_planning_msgs__msg__PathChangeModuleId__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__msg__PathChangeModuleId * data = NULL;

  if (size) {
    data = (autoware_auto_planning_msgs__msg__PathChangeModuleId *)allocator.zero_allocate(size, sizeof(autoware_auto_planning_msgs__msg__PathChangeModuleId), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_planning_msgs__msg__PathChangeModuleId__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_planning_msgs__msg__PathChangeModuleId__fini(&data[i - 1]);
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
autoware_auto_planning_msgs__msg__PathChangeModuleId__Sequence__fini(autoware_auto_planning_msgs__msg__PathChangeModuleId__Sequence * array)
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
      autoware_auto_planning_msgs__msg__PathChangeModuleId__fini(&array->data[i]);
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

autoware_auto_planning_msgs__msg__PathChangeModuleId__Sequence *
autoware_auto_planning_msgs__msg__PathChangeModuleId__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__msg__PathChangeModuleId__Sequence * array = (autoware_auto_planning_msgs__msg__PathChangeModuleId__Sequence *)allocator.allocate(sizeof(autoware_auto_planning_msgs__msg__PathChangeModuleId__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_planning_msgs__msg__PathChangeModuleId__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_auto_planning_msgs__msg__PathChangeModuleId__Sequence__destroy(autoware_auto_planning_msgs__msg__PathChangeModuleId__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_auto_planning_msgs__msg__PathChangeModuleId__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_auto_planning_msgs__msg__PathChangeModuleId__Sequence__are_equal(const autoware_auto_planning_msgs__msg__PathChangeModuleId__Sequence * lhs, const autoware_auto_planning_msgs__msg__PathChangeModuleId__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_planning_msgs__msg__PathChangeModuleId__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_planning_msgs__msg__PathChangeModuleId__Sequence__copy(
  const autoware_auto_planning_msgs__msg__PathChangeModuleId__Sequence * input,
  autoware_auto_planning_msgs__msg__PathChangeModuleId__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_planning_msgs__msg__PathChangeModuleId);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_auto_planning_msgs__msg__PathChangeModuleId * data =
      (autoware_auto_planning_msgs__msg__PathChangeModuleId *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_planning_msgs__msg__PathChangeModuleId__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_auto_planning_msgs__msg__PathChangeModuleId__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_auto_planning_msgs__msg__PathChangeModuleId__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
