// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from jw_interface_msgs:msg/MotorRPMCommand.idl
// generated code does not contain a copyright notice

#ifndef JW_INTERFACE_MSGS__MSG__DETAIL__MOTOR_RPM_COMMAND__FUNCTIONS_H_
#define JW_INTERFACE_MSGS__MSG__DETAIL__MOTOR_RPM_COMMAND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "jw_interface_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "jw_interface_msgs/msg/detail/motor_rpm_command__struct.h"

/// Initialize msg/MotorRPMCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * jw_interface_msgs__msg__MotorRPMCommand
 * )) before or use
 * jw_interface_msgs__msg__MotorRPMCommand__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_jw_interface_msgs
bool
jw_interface_msgs__msg__MotorRPMCommand__init(jw_interface_msgs__msg__MotorRPMCommand * msg);

/// Finalize msg/MotorRPMCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_jw_interface_msgs
void
jw_interface_msgs__msg__MotorRPMCommand__fini(jw_interface_msgs__msg__MotorRPMCommand * msg);

/// Create msg/MotorRPMCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * jw_interface_msgs__msg__MotorRPMCommand__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_jw_interface_msgs
jw_interface_msgs__msg__MotorRPMCommand *
jw_interface_msgs__msg__MotorRPMCommand__create();

/// Destroy msg/MotorRPMCommand message.
/**
 * It calls
 * jw_interface_msgs__msg__MotorRPMCommand__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_jw_interface_msgs
void
jw_interface_msgs__msg__MotorRPMCommand__destroy(jw_interface_msgs__msg__MotorRPMCommand * msg);

/// Check for msg/MotorRPMCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_jw_interface_msgs
bool
jw_interface_msgs__msg__MotorRPMCommand__are_equal(const jw_interface_msgs__msg__MotorRPMCommand * lhs, const jw_interface_msgs__msg__MotorRPMCommand * rhs);

/// Copy a msg/MotorRPMCommand message.
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
jw_interface_msgs__msg__MotorRPMCommand__copy(
  const jw_interface_msgs__msg__MotorRPMCommand * input,
  jw_interface_msgs__msg__MotorRPMCommand * output);

/// Initialize array of msg/MotorRPMCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * jw_interface_msgs__msg__MotorRPMCommand__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_jw_interface_msgs
bool
jw_interface_msgs__msg__MotorRPMCommand__Sequence__init(jw_interface_msgs__msg__MotorRPMCommand__Sequence * array, size_t size);

/// Finalize array of msg/MotorRPMCommand messages.
/**
 * It calls
 * jw_interface_msgs__msg__MotorRPMCommand__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_jw_interface_msgs
void
jw_interface_msgs__msg__MotorRPMCommand__Sequence__fini(jw_interface_msgs__msg__MotorRPMCommand__Sequence * array);

/// Create array of msg/MotorRPMCommand messages.
/**
 * It allocates the memory for the array and calls
 * jw_interface_msgs__msg__MotorRPMCommand__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_jw_interface_msgs
jw_interface_msgs__msg__MotorRPMCommand__Sequence *
jw_interface_msgs__msg__MotorRPMCommand__Sequence__create(size_t size);

/// Destroy array of msg/MotorRPMCommand messages.
/**
 * It calls
 * jw_interface_msgs__msg__MotorRPMCommand__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_jw_interface_msgs
void
jw_interface_msgs__msg__MotorRPMCommand__Sequence__destroy(jw_interface_msgs__msg__MotorRPMCommand__Sequence * array);

/// Check for msg/MotorRPMCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_jw_interface_msgs
bool
jw_interface_msgs__msg__MotorRPMCommand__Sequence__are_equal(const jw_interface_msgs__msg__MotorRPMCommand__Sequence * lhs, const jw_interface_msgs__msg__MotorRPMCommand__Sequence * rhs);

/// Copy an array of msg/MotorRPMCommand messages.
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
jw_interface_msgs__msg__MotorRPMCommand__Sequence__copy(
  const jw_interface_msgs__msg__MotorRPMCommand__Sequence * input,
  jw_interface_msgs__msg__MotorRPMCommand__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // JW_INTERFACE_MSGS__MSG__DETAIL__MOTOR_RPM_COMMAND__FUNCTIONS_H_
