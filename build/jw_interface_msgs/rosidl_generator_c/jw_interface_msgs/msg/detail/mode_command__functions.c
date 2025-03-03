// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from jw_interface_msgs:msg/ModeCommand.idl
// generated code does not contain a copyright notice
#include "jw_interface_msgs/msg/detail/mode_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
jw_interface_msgs__msg__ModeCommand__init(jw_interface_msgs__msg__ModeCommand * msg)
{
  if (!msg) {
    return false;
  }
  // mode
  return true;
}

void
jw_interface_msgs__msg__ModeCommand__fini(jw_interface_msgs__msg__ModeCommand * msg)
{
  if (!msg) {
    return;
  }
  // mode
}

bool
jw_interface_msgs__msg__ModeCommand__are_equal(const jw_interface_msgs__msg__ModeCommand * lhs, const jw_interface_msgs__msg__ModeCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  return true;
}

bool
jw_interface_msgs__msg__ModeCommand__copy(
  const jw_interface_msgs__msg__ModeCommand * input,
  jw_interface_msgs__msg__ModeCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // mode
  output->mode = input->mode;
  return true;
}

jw_interface_msgs__msg__ModeCommand *
jw_interface_msgs__msg__ModeCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jw_interface_msgs__msg__ModeCommand * msg = (jw_interface_msgs__msg__ModeCommand *)allocator.allocate(sizeof(jw_interface_msgs__msg__ModeCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(jw_interface_msgs__msg__ModeCommand));
  bool success = jw_interface_msgs__msg__ModeCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
jw_interface_msgs__msg__ModeCommand__destroy(jw_interface_msgs__msg__ModeCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    jw_interface_msgs__msg__ModeCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
jw_interface_msgs__msg__ModeCommand__Sequence__init(jw_interface_msgs__msg__ModeCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jw_interface_msgs__msg__ModeCommand * data = NULL;

  if (size) {
    data = (jw_interface_msgs__msg__ModeCommand *)allocator.zero_allocate(size, sizeof(jw_interface_msgs__msg__ModeCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = jw_interface_msgs__msg__ModeCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        jw_interface_msgs__msg__ModeCommand__fini(&data[i - 1]);
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
jw_interface_msgs__msg__ModeCommand__Sequence__fini(jw_interface_msgs__msg__ModeCommand__Sequence * array)
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
      jw_interface_msgs__msg__ModeCommand__fini(&array->data[i]);
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

jw_interface_msgs__msg__ModeCommand__Sequence *
jw_interface_msgs__msg__ModeCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jw_interface_msgs__msg__ModeCommand__Sequence * array = (jw_interface_msgs__msg__ModeCommand__Sequence *)allocator.allocate(sizeof(jw_interface_msgs__msg__ModeCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = jw_interface_msgs__msg__ModeCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
jw_interface_msgs__msg__ModeCommand__Sequence__destroy(jw_interface_msgs__msg__ModeCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    jw_interface_msgs__msg__ModeCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
jw_interface_msgs__msg__ModeCommand__Sequence__are_equal(const jw_interface_msgs__msg__ModeCommand__Sequence * lhs, const jw_interface_msgs__msg__ModeCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!jw_interface_msgs__msg__ModeCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
jw_interface_msgs__msg__ModeCommand__Sequence__copy(
  const jw_interface_msgs__msg__ModeCommand__Sequence * input,
  jw_interface_msgs__msg__ModeCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(jw_interface_msgs__msg__ModeCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    jw_interface_msgs__msg__ModeCommand * data =
      (jw_interface_msgs__msg__ModeCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!jw_interface_msgs__msg__ModeCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          jw_interface_msgs__msg__ModeCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!jw_interface_msgs__msg__ModeCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
