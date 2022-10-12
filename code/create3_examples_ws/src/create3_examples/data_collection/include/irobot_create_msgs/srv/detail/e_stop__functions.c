// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from irobot_create_msgs:srv/EStop.idl
// generated code does not contain a copyright notice
#include "irobot_create_msgs/srv/detail/e_stop__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
irobot_create_msgs__srv__EStop_Request__init(irobot_create_msgs__srv__EStop_Request * msg)
{
  if (!msg) {
    return false;
  }
  // e_stop_on
  return true;
}

void
irobot_create_msgs__srv__EStop_Request__fini(irobot_create_msgs__srv__EStop_Request * msg)
{
  if (!msg) {
    return;
  }
  // e_stop_on
}

bool
irobot_create_msgs__srv__EStop_Request__are_equal(const irobot_create_msgs__srv__EStop_Request * lhs, const irobot_create_msgs__srv__EStop_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // e_stop_on
  if (lhs->e_stop_on != rhs->e_stop_on) {
    return false;
  }
  return true;
}

bool
irobot_create_msgs__srv__EStop_Request__copy(
  const irobot_create_msgs__srv__EStop_Request * input,
  irobot_create_msgs__srv__EStop_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // e_stop_on
  output->e_stop_on = input->e_stop_on;
  return true;
}

irobot_create_msgs__srv__EStop_Request *
irobot_create_msgs__srv__EStop_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irobot_create_msgs__srv__EStop_Request * msg = (irobot_create_msgs__srv__EStop_Request *)allocator.allocate(sizeof(irobot_create_msgs__srv__EStop_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irobot_create_msgs__srv__EStop_Request));
  bool success = irobot_create_msgs__srv__EStop_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irobot_create_msgs__srv__EStop_Request__destroy(irobot_create_msgs__srv__EStop_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irobot_create_msgs__srv__EStop_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irobot_create_msgs__srv__EStop_Request__Sequence__init(irobot_create_msgs__srv__EStop_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irobot_create_msgs__srv__EStop_Request * data = NULL;

  if (size) {
    data = (irobot_create_msgs__srv__EStop_Request *)allocator.zero_allocate(size, sizeof(irobot_create_msgs__srv__EStop_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irobot_create_msgs__srv__EStop_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irobot_create_msgs__srv__EStop_Request__fini(&data[i - 1]);
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
irobot_create_msgs__srv__EStop_Request__Sequence__fini(irobot_create_msgs__srv__EStop_Request__Sequence * array)
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
      irobot_create_msgs__srv__EStop_Request__fini(&array->data[i]);
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

irobot_create_msgs__srv__EStop_Request__Sequence *
irobot_create_msgs__srv__EStop_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irobot_create_msgs__srv__EStop_Request__Sequence * array = (irobot_create_msgs__srv__EStop_Request__Sequence *)allocator.allocate(sizeof(irobot_create_msgs__srv__EStop_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irobot_create_msgs__srv__EStop_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irobot_create_msgs__srv__EStop_Request__Sequence__destroy(irobot_create_msgs__srv__EStop_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irobot_create_msgs__srv__EStop_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irobot_create_msgs__srv__EStop_Request__Sequence__are_equal(const irobot_create_msgs__srv__EStop_Request__Sequence * lhs, const irobot_create_msgs__srv__EStop_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irobot_create_msgs__srv__EStop_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irobot_create_msgs__srv__EStop_Request__Sequence__copy(
  const irobot_create_msgs__srv__EStop_Request__Sequence * input,
  irobot_create_msgs__srv__EStop_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irobot_create_msgs__srv__EStop_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irobot_create_msgs__srv__EStop_Request * data =
      (irobot_create_msgs__srv__EStop_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irobot_create_msgs__srv__EStop_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irobot_create_msgs__srv__EStop_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irobot_create_msgs__srv__EStop_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
irobot_create_msgs__srv__EStop_Response__init(irobot_create_msgs__srv__EStop_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    irobot_create_msgs__srv__EStop_Response__fini(msg);
    return false;
  }
  return true;
}

void
irobot_create_msgs__srv__EStop_Response__fini(irobot_create_msgs__srv__EStop_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
irobot_create_msgs__srv__EStop_Response__are_equal(const irobot_create_msgs__srv__EStop_Response * lhs, const irobot_create_msgs__srv__EStop_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
irobot_create_msgs__srv__EStop_Response__copy(
  const irobot_create_msgs__srv__EStop_Response * input,
  irobot_create_msgs__srv__EStop_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

irobot_create_msgs__srv__EStop_Response *
irobot_create_msgs__srv__EStop_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irobot_create_msgs__srv__EStop_Response * msg = (irobot_create_msgs__srv__EStop_Response *)allocator.allocate(sizeof(irobot_create_msgs__srv__EStop_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irobot_create_msgs__srv__EStop_Response));
  bool success = irobot_create_msgs__srv__EStop_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irobot_create_msgs__srv__EStop_Response__destroy(irobot_create_msgs__srv__EStop_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irobot_create_msgs__srv__EStop_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irobot_create_msgs__srv__EStop_Response__Sequence__init(irobot_create_msgs__srv__EStop_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irobot_create_msgs__srv__EStop_Response * data = NULL;

  if (size) {
    data = (irobot_create_msgs__srv__EStop_Response *)allocator.zero_allocate(size, sizeof(irobot_create_msgs__srv__EStop_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irobot_create_msgs__srv__EStop_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irobot_create_msgs__srv__EStop_Response__fini(&data[i - 1]);
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
irobot_create_msgs__srv__EStop_Response__Sequence__fini(irobot_create_msgs__srv__EStop_Response__Sequence * array)
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
      irobot_create_msgs__srv__EStop_Response__fini(&array->data[i]);
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

irobot_create_msgs__srv__EStop_Response__Sequence *
irobot_create_msgs__srv__EStop_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irobot_create_msgs__srv__EStop_Response__Sequence * array = (irobot_create_msgs__srv__EStop_Response__Sequence *)allocator.allocate(sizeof(irobot_create_msgs__srv__EStop_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irobot_create_msgs__srv__EStop_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irobot_create_msgs__srv__EStop_Response__Sequence__destroy(irobot_create_msgs__srv__EStop_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irobot_create_msgs__srv__EStop_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irobot_create_msgs__srv__EStop_Response__Sequence__are_equal(const irobot_create_msgs__srv__EStop_Response__Sequence * lhs, const irobot_create_msgs__srv__EStop_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irobot_create_msgs__srv__EStop_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irobot_create_msgs__srv__EStop_Response__Sequence__copy(
  const irobot_create_msgs__srv__EStop_Response__Sequence * input,
  irobot_create_msgs__srv__EStop_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irobot_create_msgs__srv__EStop_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irobot_create_msgs__srv__EStop_Response * data =
      (irobot_create_msgs__srv__EStop_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irobot_create_msgs__srv__EStop_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irobot_create_msgs__srv__EStop_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irobot_create_msgs__srv__EStop_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
