// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_debug_msgs:msg/Float64Stamped.idl
// generated code does not contain a copyright notice
#include "autoware_auto_debug_msgs/msg/detail/float64_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
autoware_auto_debug_msgs__msg__Float64Stamped__init(autoware_auto_debug_msgs__msg__Float64Stamped * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    autoware_auto_debug_msgs__msg__Float64Stamped__fini(msg);
    return false;
  }
  // data
  return true;
}

void
autoware_auto_debug_msgs__msg__Float64Stamped__fini(autoware_auto_debug_msgs__msg__Float64Stamped * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // data
}

bool
autoware_auto_debug_msgs__msg__Float64Stamped__are_equal(const autoware_auto_debug_msgs__msg__Float64Stamped * lhs, const autoware_auto_debug_msgs__msg__Float64Stamped * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // data
  if (lhs->data != rhs->data) {
    return false;
  }
  return true;
}

bool
autoware_auto_debug_msgs__msg__Float64Stamped__copy(
  const autoware_auto_debug_msgs__msg__Float64Stamped * input,
  autoware_auto_debug_msgs__msg__Float64Stamped * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // data
  output->data = input->data;
  return true;
}

autoware_auto_debug_msgs__msg__Float64Stamped *
autoware_auto_debug_msgs__msg__Float64Stamped__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_debug_msgs__msg__Float64Stamped * msg = (autoware_auto_debug_msgs__msg__Float64Stamped *)allocator.allocate(sizeof(autoware_auto_debug_msgs__msg__Float64Stamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_debug_msgs__msg__Float64Stamped));
  bool success = autoware_auto_debug_msgs__msg__Float64Stamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_auto_debug_msgs__msg__Float64Stamped__destroy(autoware_auto_debug_msgs__msg__Float64Stamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_auto_debug_msgs__msg__Float64Stamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_auto_debug_msgs__msg__Float64Stamped__Sequence__init(autoware_auto_debug_msgs__msg__Float64Stamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_debug_msgs__msg__Float64Stamped * data = NULL;

  if (size) {
    data = (autoware_auto_debug_msgs__msg__Float64Stamped *)allocator.zero_allocate(size, sizeof(autoware_auto_debug_msgs__msg__Float64Stamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_debug_msgs__msg__Float64Stamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_debug_msgs__msg__Float64Stamped__fini(&data[i - 1]);
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
autoware_auto_debug_msgs__msg__Float64Stamped__Sequence__fini(autoware_auto_debug_msgs__msg__Float64Stamped__Sequence * array)
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
      autoware_auto_debug_msgs__msg__Float64Stamped__fini(&array->data[i]);
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

autoware_auto_debug_msgs__msg__Float64Stamped__Sequence *
autoware_auto_debug_msgs__msg__Float64Stamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_debug_msgs__msg__Float64Stamped__Sequence * array = (autoware_auto_debug_msgs__msg__Float64Stamped__Sequence *)allocator.allocate(sizeof(autoware_auto_debug_msgs__msg__Float64Stamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_debug_msgs__msg__Float64Stamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_auto_debug_msgs__msg__Float64Stamped__Sequence__destroy(autoware_auto_debug_msgs__msg__Float64Stamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_auto_debug_msgs__msg__Float64Stamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_auto_debug_msgs__msg__Float64Stamped__Sequence__are_equal(const autoware_auto_debug_msgs__msg__Float64Stamped__Sequence * lhs, const autoware_auto_debug_msgs__msg__Float64Stamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_debug_msgs__msg__Float64Stamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_debug_msgs__msg__Float64Stamped__Sequence__copy(
  const autoware_auto_debug_msgs__msg__Float64Stamped__Sequence * input,
  autoware_auto_debug_msgs__msg__Float64Stamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_debug_msgs__msg__Float64Stamped);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_auto_debug_msgs__msg__Float64Stamped * data =
      (autoware_auto_debug_msgs__msg__Float64Stamped *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_debug_msgs__msg__Float64Stamped__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_auto_debug_msgs__msg__Float64Stamped__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_auto_debug_msgs__msg__Float64Stamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
