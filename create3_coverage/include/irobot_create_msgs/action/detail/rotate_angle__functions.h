// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from irobot_create_msgs:action/RotateAngle.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__ACTION__DETAIL__ROTATE_ANGLE__FUNCTIONS_H_
#define IROBOT_CREATE_MSGS__ACTION__DETAIL__ROTATE_ANGLE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "irobot_create_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "irobot_create_msgs/action/detail/rotate_angle__struct.h"

/// Initialize action/RotateAngle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * irobot_create_msgs__action__RotateAngle_Goal
 * )) before or use
 * irobot_create_msgs__action__RotateAngle_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
bool
irobot_create_msgs__action__RotateAngle_Goal__init(irobot_create_msgs__action__RotateAngle_Goal * msg);

/// Finalize action/RotateAngle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
void
irobot_create_msgs__action__RotateAngle_Goal__fini(irobot_create_msgs__action__RotateAngle_Goal * msg);

/// Create action/RotateAngle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * irobot_create_msgs__action__RotateAngle_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
irobot_create_msgs__action__RotateAngle_Goal *
irobot_create_msgs__action__RotateAngle_Goal__create();

/// Destroy action/RotateAngle message.
/**
 * It calls
 * irobot_create_msgs__action__RotateAngle_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
void
irobot_create_msgs__action__RotateAngle_Goal__destroy(irobot_create_msgs__action__RotateAngle_Goal * msg);

/// Check for action/RotateAngle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
bool
irobot_create_msgs__action__RotateAngle_Goal__are_equal(const irobot_create_msgs__action__RotateAngle_Goal * lhs, const irobot_create_msgs__action__RotateAngle_Goal * rhs);

/// Copy a action/RotateAngle message.
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
irobot_create_msgs__action__RotateAngle_Goal__copy(
  const irobot_create_msgs__action__RotateAngle_Goal * input,
  irobot_create_msgs__action__RotateAngle_Goal * output);

/// Initialize array of action/RotateAngle messages.
/**
 * It allocates the memory for the number of elements and calls
 * irobot_create_msgs__action__RotateAngle_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
bool
irobot_create_msgs__action__RotateAngle_Goal__Sequence__init(irobot_create_msgs__action__RotateAngle_Goal__Sequence * array, size_t size);

/// Finalize array of action/RotateAngle messages.
/**
 * It calls
 * irobot_create_msgs__action__RotateAngle_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
void
irobot_create_msgs__action__RotateAngle_Goal__Sequence__fini(irobot_create_msgs__action__RotateAngle_Goal__Sequence * array);

/// Create array of action/RotateAngle messages.
/**
 * It allocates the memory for the array and calls
 * irobot_create_msgs__action__RotateAngle_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
irobot_create_msgs__action__RotateAngle_Goal__Sequence *
irobot_create_msgs__action__RotateAngle_Goal__Sequence__create(size_t size);

/// Destroy array of action/RotateAngle messages.
/**
 * It calls
 * irobot_create_msgs__action__RotateAngle_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
void
irobot_create_msgs__action__RotateAngle_Goal__Sequence__destroy(irobot_create_msgs__action__RotateAngle_Goal__Sequence * array);

/// Check for action/RotateAngle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
bool
irobot_create_msgs__action__RotateAngle_Goal__Sequence__are_equal(const irobot_create_msgs__action__RotateAngle_Goal__Sequence * lhs, const irobot_create_msgs__action__RotateAngle_Goal__Sequence * rhs);

/// Copy an array of action/RotateAngle messages.
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
irobot_create_msgs__action__RotateAngle_Goal__Sequence__copy(
  const irobot_create_msgs__action__RotateAngle_Goal__Sequence * input,
  irobot_create_msgs__action__RotateAngle_Goal__Sequence * output);

/// Initialize action/RotateAngle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * irobot_create_msgs__action__RotateAngle_Result
 * )) before or use
 * irobot_create_msgs__action__RotateAngle_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
bool
irobot_create_msgs__action__RotateAngle_Result__init(irobot_create_msgs__action__RotateAngle_Result * msg);

/// Finalize action/RotateAngle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
void
irobot_create_msgs__action__RotateAngle_Result__fini(irobot_create_msgs__action__RotateAngle_Result * msg);

/// Create action/RotateAngle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * irobot_create_msgs__action__RotateAngle_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
irobot_create_msgs__action__RotateAngle_Result *
irobot_create_msgs__action__RotateAngle_Result__create();

/// Destroy action/RotateAngle message.
/**
 * It calls
 * irobot_create_msgs__action__RotateAngle_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
void
irobot_create_msgs__action__RotateAngle_Result__destroy(irobot_create_msgs__action__RotateAngle_Result * msg);

/// Check for action/RotateAngle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
bool
irobot_create_msgs__action__RotateAngle_Result__are_equal(const irobot_create_msgs__action__RotateAngle_Result * lhs, const irobot_create_msgs__action__RotateAngle_Result * rhs);

/// Copy a action/RotateAngle message.
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
irobot_create_msgs__action__RotateAngle_Result__copy(
  const irobot_create_msgs__action__RotateAngle_Result * input,
  irobot_create_msgs__action__RotateAngle_Result * output);

/// Initialize array of action/RotateAngle messages.
/**
 * It allocates the memory for the number of elements and calls
 * irobot_create_msgs__action__RotateAngle_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
bool
irobot_create_msgs__action__RotateAngle_Result__Sequence__init(irobot_create_msgs__action__RotateAngle_Result__Sequence * array, size_t size);

/// Finalize array of action/RotateAngle messages.
/**
 * It calls
 * irobot_create_msgs__action__RotateAngle_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
void
irobot_create_msgs__action__RotateAngle_Result__Sequence__fini(irobot_create_msgs__action__RotateAngle_Result__Sequence * array);

/// Create array of action/RotateAngle messages.
/**
 * It allocates the memory for the array and calls
 * irobot_create_msgs__action__RotateAngle_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
irobot_create_msgs__action__RotateAngle_Result__Sequence *
irobot_create_msgs__action__RotateAngle_Result__Sequence__create(size_t size);

/// Destroy array of action/RotateAngle messages.
/**
 * It calls
 * irobot_create_msgs__action__RotateAngle_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
void
irobot_create_msgs__action__RotateAngle_Result__Sequence__destroy(irobot_create_msgs__action__RotateAngle_Result__Sequence * array);

/// Check for action/RotateAngle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
bool
irobot_create_msgs__action__RotateAngle_Result__Sequence__are_equal(const irobot_create_msgs__action__RotateAngle_Result__Sequence * lhs, const irobot_create_msgs__action__RotateAngle_Result__Sequence * rhs);

/// Copy an array of action/RotateAngle messages.
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
irobot_create_msgs__action__RotateAngle_Result__Sequence__copy(
  const irobot_create_msgs__action__RotateAngle_Result__Sequence * input,
  irobot_create_msgs__action__RotateAngle_Result__Sequence * output);

/// Initialize action/RotateAngle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * irobot_create_msgs__action__RotateAngle_Feedback
 * )) before or use
 * irobot_create_msgs__action__RotateAngle_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
bool
irobot_create_msgs__action__RotateAngle_Feedback__init(irobot_create_msgs__action__RotateAngle_Feedback * msg);

/// Finalize action/RotateAngle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
void
irobot_create_msgs__action__RotateAngle_Feedback__fini(irobot_create_msgs__action__RotateAngle_Feedback * msg);

/// Create action/RotateAngle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * irobot_create_msgs__action__RotateAngle_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
irobot_create_msgs__action__RotateAngle_Feedback *
irobot_create_msgs__action__RotateAngle_Feedback__create();

/// Destroy action/RotateAngle message.
/**
 * It calls
 * irobot_create_msgs__action__RotateAngle_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
void
irobot_create_msgs__action__RotateAngle_Feedback__destroy(irobot_create_msgs__action__RotateAngle_Feedback * msg);

/// Check for action/RotateAngle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
bool
irobot_create_msgs__action__RotateAngle_Feedback__are_equal(const irobot_create_msgs__action__RotateAngle_Feedback * lhs, const irobot_create_msgs__action__RotateAngle_Feedback * rhs);

/// Copy a action/RotateAngle message.
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
irobot_create_msgs__action__RotateAngle_Feedback__copy(
  const irobot_create_msgs__action__RotateAngle_Feedback * input,
  irobot_create_msgs__action__RotateAngle_Feedback * output);

/// Initialize array of action/RotateAngle messages.
/**
 * It allocates the memory for the number of elements and calls
 * irobot_create_msgs__action__RotateAngle_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
bool
irobot_create_msgs__action__RotateAngle_Feedback__Sequence__init(irobot_create_msgs__action__RotateAngle_Feedback__Sequence * array, size_t size);

/// Finalize array of action/RotateAngle messages.
/**
 * It calls
 * irobot_create_msgs__action__RotateAngle_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
void
irobot_create_msgs__action__RotateAngle_Feedback__Sequence__fini(irobot_create_msgs__action__RotateAngle_Feedback__Sequence * array);

/// Create array of action/RotateAngle messages.
/**
 * It allocates the memory for the array and calls
 * irobot_create_msgs__action__RotateAngle_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
irobot_create_msgs__action__RotateAngle_Feedback__Sequence *
irobot_create_msgs__action__RotateAngle_Feedback__Sequence__create(size_t size);

/// Destroy array of action/RotateAngle messages.
/**
 * It calls
 * irobot_create_msgs__action__RotateAngle_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
void
irobot_create_msgs__action__RotateAngle_Feedback__Sequence__destroy(irobot_create_msgs__action__RotateAngle_Feedback__Sequence * array);

/// Check for action/RotateAngle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
bool
irobot_create_msgs__action__RotateAngle_Feedback__Sequence__are_equal(const irobot_create_msgs__action__RotateAngle_Feedback__Sequence * lhs, const irobot_create_msgs__action__RotateAngle_Feedback__Sequence * rhs);

/// Copy an array of action/RotateAngle messages.
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
irobot_create_msgs__action__RotateAngle_Feedback__Sequence__copy(
  const irobot_create_msgs__action__RotateAngle_Feedback__Sequence * input,
  irobot_create_msgs__action__RotateAngle_Feedback__Sequence * output);

/// Initialize action/RotateAngle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * irobot_create_msgs__action__RotateAngle_SendGoal_Request
 * )) before or use
 * irobot_create_msgs__action__RotateAngle_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
bool
irobot_create_msgs__action__RotateAngle_SendGoal_Request__init(irobot_create_msgs__action__RotateAngle_SendGoal_Request * msg);

/// Finalize action/RotateAngle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
void
irobot_create_msgs__action__RotateAngle_SendGoal_Request__fini(irobot_create_msgs__action__RotateAngle_SendGoal_Request * msg);

/// Create action/RotateAngle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * irobot_create_msgs__action__RotateAngle_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
irobot_create_msgs__action__RotateAngle_SendGoal_Request *
irobot_create_msgs__action__RotateAngle_SendGoal_Request__create();

/// Destroy action/RotateAngle message.
/**
 * It calls
 * irobot_create_msgs__action__RotateAngle_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
void
irobot_create_msgs__action__RotateAngle_SendGoal_Request__destroy(irobot_create_msgs__action__RotateAngle_SendGoal_Request * msg);

/// Check for action/RotateAngle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
bool
irobot_create_msgs__action__RotateAngle_SendGoal_Request__are_equal(const irobot_create_msgs__action__RotateAngle_SendGoal_Request * lhs, const irobot_create_msgs__action__RotateAngle_SendGoal_Request * rhs);

/// Copy a action/RotateAngle message.
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
irobot_create_msgs__action__RotateAngle_SendGoal_Request__copy(
  const irobot_create_msgs__action__RotateAngle_SendGoal_Request * input,
  irobot_create_msgs__action__RotateAngle_SendGoal_Request * output);

/// Initialize array of action/RotateAngle messages.
/**
 * It allocates the memory for the number of elements and calls
 * irobot_create_msgs__action__RotateAngle_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
bool
irobot_create_msgs__action__RotateAngle_SendGoal_Request__Sequence__init(irobot_create_msgs__action__RotateAngle_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/RotateAngle messages.
/**
 * It calls
 * irobot_create_msgs__action__RotateAngle_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
void
irobot_create_msgs__action__RotateAngle_SendGoal_Request__Sequence__fini(irobot_create_msgs__action__RotateAngle_SendGoal_Request__Sequence * array);

/// Create array of action/RotateAngle messages.
/**
 * It allocates the memory for the array and calls
 * irobot_create_msgs__action__RotateAngle_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
irobot_create_msgs__action__RotateAngle_SendGoal_Request__Sequence *
irobot_create_msgs__action__RotateAngle_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/RotateAngle messages.
/**
 * It calls
 * irobot_create_msgs__action__RotateAngle_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
void
irobot_create_msgs__action__RotateAngle_SendGoal_Request__Sequence__destroy(irobot_create_msgs__action__RotateAngle_SendGoal_Request__Sequence * array);

/// Check for action/RotateAngle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
bool
irobot_create_msgs__action__RotateAngle_SendGoal_Request__Sequence__are_equal(const irobot_create_msgs__action__RotateAngle_SendGoal_Request__Sequence * lhs, const irobot_create_msgs__action__RotateAngle_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/RotateAngle messages.
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
irobot_create_msgs__action__RotateAngle_SendGoal_Request__Sequence__copy(
  const irobot_create_msgs__action__RotateAngle_SendGoal_Request__Sequence * input,
  irobot_create_msgs__action__RotateAngle_SendGoal_Request__Sequence * output);

/// Initialize action/RotateAngle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * irobot_create_msgs__action__RotateAngle_SendGoal_Response
 * )) before or use
 * irobot_create_msgs__action__RotateAngle_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
bool
irobot_create_msgs__action__RotateAngle_SendGoal_Response__init(irobot_create_msgs__action__RotateAngle_SendGoal_Response * msg);

/// Finalize action/RotateAngle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
void
irobot_create_msgs__action__RotateAngle_SendGoal_Response__fini(irobot_create_msgs__action__RotateAngle_SendGoal_Response * msg);

/// Create action/RotateAngle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * irobot_create_msgs__action__RotateAngle_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
irobot_create_msgs__action__RotateAngle_SendGoal_Response *
irobot_create_msgs__action__RotateAngle_SendGoal_Response__create();

/// Destroy action/RotateAngle message.
/**
 * It calls
 * irobot_create_msgs__action__RotateAngle_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
void
irobot_create_msgs__action__RotateAngle_SendGoal_Response__destroy(irobot_create_msgs__action__RotateAngle_SendGoal_Response * msg);

/// Check for action/RotateAngle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
bool
irobot_create_msgs__action__RotateAngle_SendGoal_Response__are_equal(const irobot_create_msgs__action__RotateAngle_SendGoal_Response * lhs, const irobot_create_msgs__action__RotateAngle_SendGoal_Response * rhs);

/// Copy a action/RotateAngle message.
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
irobot_create_msgs__action__RotateAngle_SendGoal_Response__copy(
  const irobot_create_msgs__action__RotateAngle_SendGoal_Response * input,
  irobot_create_msgs__action__RotateAngle_SendGoal_Response * output);

/// Initialize array of action/RotateAngle messages.
/**
 * It allocates the memory for the number of elements and calls
 * irobot_create_msgs__action__RotateAngle_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
bool
irobot_create_msgs__action__RotateAngle_SendGoal_Response__Sequence__init(irobot_create_msgs__action__RotateAngle_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/RotateAngle messages.
/**
 * It calls
 * irobot_create_msgs__action__RotateAngle_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
void
irobot_create_msgs__action__RotateAngle_SendGoal_Response__Sequence__fini(irobot_create_msgs__action__RotateAngle_SendGoal_Response__Sequence * array);

/// Create array of action/RotateAngle messages.
/**
 * It allocates the memory for the array and calls
 * irobot_create_msgs__action__RotateAngle_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
irobot_create_msgs__action__RotateAngle_SendGoal_Response__Sequence *
irobot_create_msgs__action__RotateAngle_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/RotateAngle messages.
/**
 * It calls
 * irobot_create_msgs__action__RotateAngle_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
void
irobot_create_msgs__action__RotateAngle_SendGoal_Response__Sequence__destroy(irobot_create_msgs__action__RotateAngle_SendGoal_Response__Sequence * array);

/// Check for action/RotateAngle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
bool
irobot_create_msgs__action__RotateAngle_SendGoal_Response__Sequence__are_equal(const irobot_create_msgs__action__RotateAngle_SendGoal_Response__Sequence * lhs, const irobot_create_msgs__action__RotateAngle_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/RotateAngle messages.
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
irobot_create_msgs__action__RotateAngle_SendGoal_Response__Sequence__copy(
  const irobot_create_msgs__action__RotateAngle_SendGoal_Response__Sequence * input,
  irobot_create_msgs__action__RotateAngle_SendGoal_Response__Sequence * output);

/// Initialize action/RotateAngle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * irobot_create_msgs__action__RotateAngle_GetResult_Request
 * )) before or use
 * irobot_create_msgs__action__RotateAngle_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
bool
irobot_create_msgs__action__RotateAngle_GetResult_Request__init(irobot_create_msgs__action__RotateAngle_GetResult_Request * msg);

/// Finalize action/RotateAngle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
void
irobot_create_msgs__action__RotateAngle_GetResult_Request__fini(irobot_create_msgs__action__RotateAngle_GetResult_Request * msg);

/// Create action/RotateAngle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * irobot_create_msgs__action__RotateAngle_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
irobot_create_msgs__action__RotateAngle_GetResult_Request *
irobot_create_msgs__action__RotateAngle_GetResult_Request__create();

/// Destroy action/RotateAngle message.
/**
 * It calls
 * irobot_create_msgs__action__RotateAngle_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
void
irobot_create_msgs__action__RotateAngle_GetResult_Request__destroy(irobot_create_msgs__action__RotateAngle_GetResult_Request * msg);

/// Check for action/RotateAngle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
bool
irobot_create_msgs__action__RotateAngle_GetResult_Request__are_equal(const irobot_create_msgs__action__RotateAngle_GetResult_Request * lhs, const irobot_create_msgs__action__RotateAngle_GetResult_Request * rhs);

/// Copy a action/RotateAngle message.
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
irobot_create_msgs__action__RotateAngle_GetResult_Request__copy(
  const irobot_create_msgs__action__RotateAngle_GetResult_Request * input,
  irobot_create_msgs__action__RotateAngle_GetResult_Request * output);

/// Initialize array of action/RotateAngle messages.
/**
 * It allocates the memory for the number of elements and calls
 * irobot_create_msgs__action__RotateAngle_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
bool
irobot_create_msgs__action__RotateAngle_GetResult_Request__Sequence__init(irobot_create_msgs__action__RotateAngle_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/RotateAngle messages.
/**
 * It calls
 * irobot_create_msgs__action__RotateAngle_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
void
irobot_create_msgs__action__RotateAngle_GetResult_Request__Sequence__fini(irobot_create_msgs__action__RotateAngle_GetResult_Request__Sequence * array);

/// Create array of action/RotateAngle messages.
/**
 * It allocates the memory for the array and calls
 * irobot_create_msgs__action__RotateAngle_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
irobot_create_msgs__action__RotateAngle_GetResult_Request__Sequence *
irobot_create_msgs__action__RotateAngle_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/RotateAngle messages.
/**
 * It calls
 * irobot_create_msgs__action__RotateAngle_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
void
irobot_create_msgs__action__RotateAngle_GetResult_Request__Sequence__destroy(irobot_create_msgs__action__RotateAngle_GetResult_Request__Sequence * array);

/// Check for action/RotateAngle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
bool
irobot_create_msgs__action__RotateAngle_GetResult_Request__Sequence__are_equal(const irobot_create_msgs__action__RotateAngle_GetResult_Request__Sequence * lhs, const irobot_create_msgs__action__RotateAngle_GetResult_Request__Sequence * rhs);

/// Copy an array of action/RotateAngle messages.
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
irobot_create_msgs__action__RotateAngle_GetResult_Request__Sequence__copy(
  const irobot_create_msgs__action__RotateAngle_GetResult_Request__Sequence * input,
  irobot_create_msgs__action__RotateAngle_GetResult_Request__Sequence * output);

/// Initialize action/RotateAngle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * irobot_create_msgs__action__RotateAngle_GetResult_Response
 * )) before or use
 * irobot_create_msgs__action__RotateAngle_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
bool
irobot_create_msgs__action__RotateAngle_GetResult_Response__init(irobot_create_msgs__action__RotateAngle_GetResult_Response * msg);

/// Finalize action/RotateAngle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
void
irobot_create_msgs__action__RotateAngle_GetResult_Response__fini(irobot_create_msgs__action__RotateAngle_GetResult_Response * msg);

/// Create action/RotateAngle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * irobot_create_msgs__action__RotateAngle_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
irobot_create_msgs__action__RotateAngle_GetResult_Response *
irobot_create_msgs__action__RotateAngle_GetResult_Response__create();

/// Destroy action/RotateAngle message.
/**
 * It calls
 * irobot_create_msgs__action__RotateAngle_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
void
irobot_create_msgs__action__RotateAngle_GetResult_Response__destroy(irobot_create_msgs__action__RotateAngle_GetResult_Response * msg);

/// Check for action/RotateAngle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
bool
irobot_create_msgs__action__RotateAngle_GetResult_Response__are_equal(const irobot_create_msgs__action__RotateAngle_GetResult_Response * lhs, const irobot_create_msgs__action__RotateAngle_GetResult_Response * rhs);

/// Copy a action/RotateAngle message.
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
irobot_create_msgs__action__RotateAngle_GetResult_Response__copy(
  const irobot_create_msgs__action__RotateAngle_GetResult_Response * input,
  irobot_create_msgs__action__RotateAngle_GetResult_Response * output);

/// Initialize array of action/RotateAngle messages.
/**
 * It allocates the memory for the number of elements and calls
 * irobot_create_msgs__action__RotateAngle_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
bool
irobot_create_msgs__action__RotateAngle_GetResult_Response__Sequence__init(irobot_create_msgs__action__RotateAngle_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/RotateAngle messages.
/**
 * It calls
 * irobot_create_msgs__action__RotateAngle_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
void
irobot_create_msgs__action__RotateAngle_GetResult_Response__Sequence__fini(irobot_create_msgs__action__RotateAngle_GetResult_Response__Sequence * array);

/// Create array of action/RotateAngle messages.
/**
 * It allocates the memory for the array and calls
 * irobot_create_msgs__action__RotateAngle_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
irobot_create_msgs__action__RotateAngle_GetResult_Response__Sequence *
irobot_create_msgs__action__RotateAngle_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/RotateAngle messages.
/**
 * It calls
 * irobot_create_msgs__action__RotateAngle_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
void
irobot_create_msgs__action__RotateAngle_GetResult_Response__Sequence__destroy(irobot_create_msgs__action__RotateAngle_GetResult_Response__Sequence * array);

/// Check for action/RotateAngle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
bool
irobot_create_msgs__action__RotateAngle_GetResult_Response__Sequence__are_equal(const irobot_create_msgs__action__RotateAngle_GetResult_Response__Sequence * lhs, const irobot_create_msgs__action__RotateAngle_GetResult_Response__Sequence * rhs);

/// Copy an array of action/RotateAngle messages.
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
irobot_create_msgs__action__RotateAngle_GetResult_Response__Sequence__copy(
  const irobot_create_msgs__action__RotateAngle_GetResult_Response__Sequence * input,
  irobot_create_msgs__action__RotateAngle_GetResult_Response__Sequence * output);

/// Initialize action/RotateAngle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * irobot_create_msgs__action__RotateAngle_FeedbackMessage
 * )) before or use
 * irobot_create_msgs__action__RotateAngle_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
bool
irobot_create_msgs__action__RotateAngle_FeedbackMessage__init(irobot_create_msgs__action__RotateAngle_FeedbackMessage * msg);

/// Finalize action/RotateAngle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
void
irobot_create_msgs__action__RotateAngle_FeedbackMessage__fini(irobot_create_msgs__action__RotateAngle_FeedbackMessage * msg);

/// Create action/RotateAngle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * irobot_create_msgs__action__RotateAngle_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
irobot_create_msgs__action__RotateAngle_FeedbackMessage *
irobot_create_msgs__action__RotateAngle_FeedbackMessage__create();

/// Destroy action/RotateAngle message.
/**
 * It calls
 * irobot_create_msgs__action__RotateAngle_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
void
irobot_create_msgs__action__RotateAngle_FeedbackMessage__destroy(irobot_create_msgs__action__RotateAngle_FeedbackMessage * msg);

/// Check for action/RotateAngle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
bool
irobot_create_msgs__action__RotateAngle_FeedbackMessage__are_equal(const irobot_create_msgs__action__RotateAngle_FeedbackMessage * lhs, const irobot_create_msgs__action__RotateAngle_FeedbackMessage * rhs);

/// Copy a action/RotateAngle message.
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
irobot_create_msgs__action__RotateAngle_FeedbackMessage__copy(
  const irobot_create_msgs__action__RotateAngle_FeedbackMessage * input,
  irobot_create_msgs__action__RotateAngle_FeedbackMessage * output);

/// Initialize array of action/RotateAngle messages.
/**
 * It allocates the memory for the number of elements and calls
 * irobot_create_msgs__action__RotateAngle_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
bool
irobot_create_msgs__action__RotateAngle_FeedbackMessage__Sequence__init(irobot_create_msgs__action__RotateAngle_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/RotateAngle messages.
/**
 * It calls
 * irobot_create_msgs__action__RotateAngle_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
void
irobot_create_msgs__action__RotateAngle_FeedbackMessage__Sequence__fini(irobot_create_msgs__action__RotateAngle_FeedbackMessage__Sequence * array);

/// Create array of action/RotateAngle messages.
/**
 * It allocates the memory for the array and calls
 * irobot_create_msgs__action__RotateAngle_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
irobot_create_msgs__action__RotateAngle_FeedbackMessage__Sequence *
irobot_create_msgs__action__RotateAngle_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/RotateAngle messages.
/**
 * It calls
 * irobot_create_msgs__action__RotateAngle_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
void
irobot_create_msgs__action__RotateAngle_FeedbackMessage__Sequence__destroy(irobot_create_msgs__action__RotateAngle_FeedbackMessage__Sequence * array);

/// Check for action/RotateAngle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_irobot_create_msgs
bool
irobot_create_msgs__action__RotateAngle_FeedbackMessage__Sequence__are_equal(const irobot_create_msgs__action__RotateAngle_FeedbackMessage__Sequence * lhs, const irobot_create_msgs__action__RotateAngle_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/RotateAngle messages.
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
irobot_create_msgs__action__RotateAngle_FeedbackMessage__Sequence__copy(
  const irobot_create_msgs__action__RotateAngle_FeedbackMessage__Sequence * input,
  irobot_create_msgs__action__RotateAngle_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // IROBOT_CREATE_MSGS__ACTION__DETAIL__ROTATE_ANGLE__FUNCTIONS_H_
