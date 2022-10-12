// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from irobot_create_msgs:msg/Button.idl
// generated code does not contain a copyright notice
#include "irobot_create_msgs/msg/detail/button__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `last_start_pressed_time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `last_pressed_duration`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
irobot_create_msgs__msg__Button__init(irobot_create_msgs__msg__Button * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    irobot_create_msgs__msg__Button__fini(msg);
    return false;
  }
  // is_pressed
  // last_start_pressed_time
  if (!builtin_interfaces__msg__Time__init(&msg->last_start_pressed_time)) {
    irobot_create_msgs__msg__Button__fini(msg);
    return false;
  }
  // last_pressed_duration
  if (!builtin_interfaces__msg__Duration__init(&msg->last_pressed_duration)) {
    irobot_create_msgs__msg__Button__fini(msg);
    return false;
  }
  return true;
}

void
irobot_create_msgs__msg__Button__fini(irobot_create_msgs__msg__Button * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // is_pressed
  // last_start_pressed_time
  builtin_interfaces__msg__Time__fini(&msg->last_start_pressed_time);
  // last_pressed_duration
  builtin_interfaces__msg__Duration__fini(&msg->last_pressed_duration);
}

bool
irobot_create_msgs__msg__Button__are_equal(const irobot_create_msgs__msg__Button * lhs, const irobot_create_msgs__msg__Button * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // is_pressed
  if (lhs->is_pressed != rhs->is_pressed) {
    return false;
  }
  // last_start_pressed_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->last_start_pressed_time), &(rhs->last_start_pressed_time)))
  {
    return false;
  }
  // last_pressed_duration
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->last_pressed_duration), &(rhs->last_pressed_duration)))
  {
    return false;
  }
  return true;
}

bool
irobot_create_msgs__msg__Button__copy(
  const irobot_create_msgs__msg__Button * input,
  irobot_create_msgs__msg__Button * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // is_pressed
  output->is_pressed = input->is_pressed;
  // last_start_pressed_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->last_start_pressed_time), &(output->last_start_pressed_time)))
  {
    return false;
  }
  // last_pressed_duration
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->last_pressed_duration), &(output->last_pressed_duration)))
  {
    return false;
  }
  return true;
}

irobot_create_msgs__msg__Button *
irobot_create_msgs__msg__Button__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irobot_create_msgs__msg__Button * msg = (irobot_create_msgs__msg__Button *)allocator.allocate(sizeof(irobot_create_msgs__msg__Button), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irobot_create_msgs__msg__Button));
  bool success = irobot_create_msgs__msg__Button__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irobot_create_msgs__msg__Button__destroy(irobot_create_msgs__msg__Button * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irobot_create_msgs__msg__Button__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irobot_create_msgs__msg__Button__Sequence__init(irobot_create_msgs__msg__Button__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irobot_create_msgs__msg__Button * data = NULL;

  if (size) {
    data = (irobot_create_msgs__msg__Button *)allocator.zero_allocate(size, sizeof(irobot_create_msgs__msg__Button), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irobot_create_msgs__msg__Button__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irobot_create_msgs__msg__Button__fini(&data[i - 1]);
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
irobot_create_msgs__msg__Button__Sequence__fini(irobot_create_msgs__msg__Button__Sequence * array)
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
      irobot_create_msgs__msg__Button__fini(&array->data[i]);
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

irobot_create_msgs__msg__Button__Sequence *
irobot_create_msgs__msg__Button__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irobot_create_msgs__msg__Button__Sequence * array = (irobot_create_msgs__msg__Button__Sequence *)allocator.allocate(sizeof(irobot_create_msgs__msg__Button__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irobot_create_msgs__msg__Button__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irobot_create_msgs__msg__Button__Sequence__destroy(irobot_create_msgs__msg__Button__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irobot_create_msgs__msg__Button__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irobot_create_msgs__msg__Button__Sequence__are_equal(const irobot_create_msgs__msg__Button__Sequence * lhs, const irobot_create_msgs__msg__Button__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irobot_create_msgs__msg__Button__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irobot_create_msgs__msg__Button__Sequence__copy(
  const irobot_create_msgs__msg__Button__Sequence * input,
  irobot_create_msgs__msg__Button__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irobot_create_msgs__msg__Button);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irobot_create_msgs__msg__Button * data =
      (irobot_create_msgs__msg__Button *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irobot_create_msgs__msg__Button__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irobot_create_msgs__msg__Button__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irobot_create_msgs__msg__Button__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
