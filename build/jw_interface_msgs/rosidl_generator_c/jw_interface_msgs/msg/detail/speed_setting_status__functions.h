// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from jw_interface_msgs:msg/SpeedSettingStatus.idl
// generated code does not contain a copyright notice

#ifndef JW_INTERFACE_MSGS__MSG__DETAIL__SPEED_SETTING_STATUS__FUNCTIONS_H_
#define JW_INTERFACE_MSGS__MSG__DETAIL__SPEED_SETTING_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "jw_interface_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "jw_interface_msgs/msg/detail/speed_setting_status__struct.h"

/// Initialize msg/SpeedSettingStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * jw_interface_msgs__msg__SpeedSettingStatus
 * )) before or use
 * jw_interface_msgs__msg__SpeedSettingStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_jw_interface_msgs
bool
jw_interface_msgs__msg__SpeedSettingStatus__init(jw_interface_msgs__msg__SpeedSettingStatus * msg);

/// Finalize msg/SpeedSettingStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_jw_interface_msgs
void
jw_interface_msgs__msg__SpeedSettingStatus__fini(jw_interface_msgs__msg__SpeedSettingStatus * msg);

/// Create msg/SpeedSettingStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * jw_interface_msgs__msg__SpeedSettingStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_jw_interface_msgs
jw_interface_msgs__msg__SpeedSettingStatus *
jw_interface_msgs__msg__SpeedSettingStatus__create();

/// Destroy msg/SpeedSettingStatus message.
/**
 * It calls
 * jw_interface_msgs__msg__SpeedSettingStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_jw_interface_msgs
void
jw_interface_msgs__msg__SpeedSettingStatus__destroy(jw_interface_msgs__msg__SpeedSettingStatus * msg);

/// Check for msg/SpeedSettingStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_jw_interface_msgs
bool
jw_interface_msgs__msg__SpeedSettingStatus__are_equal(const jw_interface_msgs__msg__SpeedSettingStatus * lhs, const jw_interface_msgs__msg__SpeedSettingStatus * rhs);

/// Copy a msg/SpeedSettingStatus message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_jw_interface_msgs
bool
jw_interface_msgs__msg__SpeedSettingStatus__copy(
  const jw_interface_msgs__msg__SpeedSettingStatus * input,
  jw_interface_msgs__msg__SpeedSettingStatus * output);

/// Initialize array of msg/SpeedSettingStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * jw_interface_msgs__msg__SpeedSettingStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_jw_interface_msgs
bool
jw_interface_msgs__msg__SpeedSettingStatus__Sequence__init(jw_interface_msgs__msg__SpeedSettingStatus__Sequence * array, size_t size);

/// Finalize array of msg/SpeedSettingStatus messages.
/**
 * It calls
 * jw_interface_msgs__msg__SpeedSettingStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_jw_interface_msgs
void
jw_interface_msgs__msg__SpeedSettingStatus__Sequence__fini(jw_interface_msgs__msg__SpeedSettingStatus__Sequence * array);

/// Create array of msg/SpeedSettingStatus messages.
/**
 * It allocates the memory for the array and calls
 * jw_interface_msgs__msg__SpeedSettingStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_jw_interface_msgs
jw_interface_msgs__msg__SpeedSettingStatus__Sequence *
jw_interface_msgs__msg__SpeedSettingStatus__Sequence__create(size_t size);

/// Destroy array of msg/SpeedSettingStatus messages.
/**
 * It calls
 * jw_interface_msgs__msg__SpeedSettingStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_jw_interface_msgs
void
jw_interface_msgs__msg__SpeedSettingStatus__Sequence__destroy(jw_interface_msgs__msg__SpeedSettingStatus__Sequence * array);

/// Check for msg/SpeedSettingStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_jw_interface_msgs
bool
jw_interface_msgs__msg__SpeedSettingStatus__Sequence__are_equal(const jw_interface_msgs__msg__SpeedSettingStatus__Sequence * lhs, const jw_interface_msgs__msg__SpeedSettingStatus__Sequence * rhs);

/// Copy an array of msg/SpeedSettingStatus messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_jw_interface_msgs
bool
jw_interface_msgs__msg__SpeedSettingStatus__Sequence__copy(
  const jw_interface_msgs__msg__SpeedSettingStatus__Sequence * input,
  jw_interface_msgs__msg__SpeedSettingStatus__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // JW_INTERFACE_MSGS__MSG__DETAIL__SPEED_SETTING_STATUS__FUNCTIONS_H_
