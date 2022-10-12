// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from irobot_create_msgs:msg/WheelVels.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__WHEEL_VELS__FUNCTIONS_H_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__WHEEL_VELS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "irobot_create_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "irobot_create_msgs/msg/detail/wheel_vels__struct.h"

/// Initialize msg/WheelVels message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * irobot_create_msgs__msg__WheelVels
 * )) before or use
 * irobot_create_msgs__msg__WheelVels__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
bool
irobot_create_msgs__msg__WheelVels__init(irobot_create_msgs__msg__WheelVels * msg);

/// Finalize msg/WheelVels message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
void
irobot_create_msgs__msg__WheelVels__fini(irobot_create_msgs__msg__WheelVels * msg);

/// Create msg/WheelVels message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * irobot_create_msgs__msg__WheelVels__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
irobot_create_msgs__msg__WheelVels *
irobot_create_msgs__msg__WheelVels__create();

/// Destroy msg/WheelVels message.
/**
 * It calls
 * irobot_create_msgs__msg__WheelVels__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
void
irobot_create_msgs__msg__WheelVels__destroy(irobot_create_msgs__msg__WheelVels * msg);

/// Check for msg/WheelVels message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
bool
irobot_create_msgs__msg__WheelVels__are_equal(const irobot_create_msgs__msg__WheelVels * lhs, const irobot_create_msgs__msg__WheelVels * rhs);

/// Copy a msg/WheelVels message.
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
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
bool
irobot_create_msgs__msg__WheelVels__copy(
  const irobot_create_msgs__msg__WheelVels * input,
  irobot_create_msgs__msg__WheelVels * output);

/// Initialize array of msg/WheelVels messages.
/**
 * It allocates the memory for the number of elements and calls
 * irobot_create_msgs__msg__WheelVels__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
bool
irobot_create_msgs__msg__WheelVels__Sequence__init(irobot_create_msgs__msg__WheelVels__Sequence * array, size_t size);

/// Finalize array of msg/WheelVels messages.
/**
 * It calls
 * irobot_create_msgs__msg__WheelVels__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
void
irobot_create_msgs__msg__WheelVels__Sequence__fini(irobot_create_msgs__msg__WheelVels__Sequence * array);

/// Create array of msg/WheelVels messages.
/**
 * It allocates the memory for the array and calls
 * irobot_create_msgs__msg__WheelVels__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
irobot_create_msgs__msg__WheelVels__Sequence *
irobot_create_msgs__msg__WheelVels__Sequence__create(size_t size);

/// Destroy array of msg/WheelVels messages.
/**
 * It calls
 * irobot_create_msgs__msg__WheelVels__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
void
irobot_create_msgs__msg__WheelVels__Sequence__destroy(irobot_create_msgs__msg__WheelVels__Sequence * array);

/// Check for msg/WheelVels message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
bool
irobot_create_msgs__msg__WheelVels__Sequence__are_equal(const irobot_create_msgs__msg__WheelVels__Sequence * lhs, const irobot_create_msgs__msg__WheelVels__Sequence * rhs);

/// Copy an array of msg/WheelVels messages.
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
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
bool
irobot_create_msgs__msg__WheelVels__Sequence__copy(
  const irobot_create_msgs__msg__WheelVels__Sequence * input,
  irobot_create_msgs__msg__WheelVels__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__WHEEL_VELS__FUNCTIONS_H_
