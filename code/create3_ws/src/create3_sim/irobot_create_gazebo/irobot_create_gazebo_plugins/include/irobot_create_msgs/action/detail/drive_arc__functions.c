// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from irobot_create_msgs:action/DriveArc.idl
// generated code does not contain a copyright notice
#include "irobot_create_msgs/action/detail/drive_arc__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
irobot_create_msgs__action__DriveArc_Goal__init(irobot_create_msgs__action__DriveArc_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // translate_direction
  // angle
  // radius
  // max_translation_speed
  msg->max_translation_speed = 0.3f;
  return true;
}

void
irobot_create_msgs__action__DriveArc_Goal__fini(irobot_create_msgs__action__DriveArc_Goal * msg)
{
  if (!msg) {
    return;
  }
  // translate_direction
  // angle
  // radius
  // max_translation_speed
}

bool
irobot_create_msgs__action__DriveArc_Goal__are_equal(const irobot_create_msgs__action__DriveArc_Goal * lhs, const irobot_create_msgs__action__DriveArc_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // translate_direction
  if (lhs->translate_direction != rhs->translate_direction) {
    return false;
  }
  // angle
  if (lhs->angle != rhs->angle) {
    return false;
  }
  // radius
  if (lhs->radius != rhs->radius) {
    return false;
  }
  // max_translation_speed
  if (lhs->max_translation_speed != rhs->max_translation_speed) {
    return false;
  }
  return true;
}

bool
irobot_create_msgs__action__DriveArc_Goal__copy(
  const irobot_create_msgs__action__DriveArc_Goal * input,
  irobot_create_msgs__action__DriveArc_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // translate_direction
  output->translate_direction = input->translate_direction;
  // angle
  output->angle = input->angle;
  // radius
  output->radius = input->radius;
  // max_translation_speed
  output->max_translation_speed = input->max_translation_speed;
  return true;
}

irobot_create_msgs__action__DriveArc_Goal *
irobot_create_msgs__action__DriveArc_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irobot_create_msgs__action__DriveArc_Goal * msg = (irobot_create_msgs__action__DriveArc_Goal *)allocator.allocate(sizeof(irobot_create_msgs__action__DriveArc_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irobot_create_msgs__action__DriveArc_Goal));
  bool success = irobot_create_msgs__action__DriveArc_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irobot_create_msgs__action__DriveArc_Goal__destroy(irobot_create_msgs__action__DriveArc_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irobot_create_msgs__action__DriveArc_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irobot_create_msgs__action__DriveArc_Goal__Sequence__init(irobot_create_msgs__action__DriveArc_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irobot_create_msgs__action__DriveArc_Goal * data = NULL;

  if (size) {
    data = (irobot_create_msgs__action__DriveArc_Goal *)allocator.zero_allocate(size, sizeof(irobot_create_msgs__action__DriveArc_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irobot_create_msgs__action__DriveArc_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irobot_create_msgs__action__DriveArc_Goal__fini(&data[i - 1]);
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
irobot_create_msgs__action__DriveArc_Goal__Sequence__fini(irobot_create_msgs__action__DriveArc_Goal__Sequence * array)
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
      irobot_create_msgs__action__DriveArc_Goal__fini(&array->data[i]);
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

irobot_create_msgs__action__DriveArc_Goal__Sequence *
irobot_create_msgs__action__DriveArc_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irobot_create_msgs__action__DriveArc_Goal__Sequence * array = (irobot_create_msgs__action__DriveArc_Goal__Sequence *)allocator.allocate(sizeof(irobot_create_msgs__action__DriveArc_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irobot_create_msgs__action__DriveArc_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irobot_create_msgs__action__DriveArc_Goal__Sequence__destroy(irobot_create_msgs__action__DriveArc_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irobot_create_msgs__action__DriveArc_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irobot_create_msgs__action__DriveArc_Goal__Sequence__are_equal(const irobot_create_msgs__action__DriveArc_Goal__Sequence * lhs, const irobot_create_msgs__action__DriveArc_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irobot_create_msgs__action__DriveArc_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irobot_create_msgs__action__DriveArc_Goal__Sequence__copy(
  const irobot_create_msgs__action__DriveArc_Goal__Sequence * input,
  irobot_create_msgs__action__DriveArc_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irobot_create_msgs__action__DriveArc_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irobot_create_msgs__action__DriveArc_Goal * data =
      (irobot_create_msgs__action__DriveArc_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irobot_create_msgs__action__DriveArc_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irobot_create_msgs__action__DriveArc_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irobot_create_msgs__action__DriveArc_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
irobot_create_msgs__action__DriveArc_Result__init(irobot_create_msgs__action__DriveArc_Result * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->pose)) {
    irobot_create_msgs__action__DriveArc_Result__fini(msg);
    return false;
  }
  return true;
}

void
irobot_create_msgs__action__DriveArc_Result__fini(irobot_create_msgs__action__DriveArc_Result * msg)
{
  if (!msg) {
    return;
  }
  // pose
  geometry_msgs__msg__PoseStamped__fini(&msg->pose);
}

bool
irobot_create_msgs__action__DriveArc_Result__are_equal(const irobot_create_msgs__action__DriveArc_Result * lhs, const irobot_create_msgs__action__DriveArc_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  return true;
}

bool
irobot_create_msgs__action__DriveArc_Result__copy(
  const irobot_create_msgs__action__DriveArc_Result * input,
  irobot_create_msgs__action__DriveArc_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  return true;
}

irobot_create_msgs__action__DriveArc_Result *
irobot_create_msgs__action__DriveArc_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irobot_create_msgs__action__DriveArc_Result * msg = (irobot_create_msgs__action__DriveArc_Result *)allocator.allocate(sizeof(irobot_create_msgs__action__DriveArc_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irobot_create_msgs__action__DriveArc_Result));
  bool success = irobot_create_msgs__action__DriveArc_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irobot_create_msgs__action__DriveArc_Result__destroy(irobot_create_msgs__action__DriveArc_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irobot_create_msgs__action__DriveArc_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irobot_create_msgs__action__DriveArc_Result__Sequence__init(irobot_create_msgs__action__DriveArc_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irobot_create_msgs__action__DriveArc_Result * data = NULL;

  if (size) {
    data = (irobot_create_msgs__action__DriveArc_Result *)allocator.zero_allocate(size, sizeof(irobot_create_msgs__action__DriveArc_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irobot_create_msgs__action__DriveArc_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irobot_create_msgs__action__DriveArc_Result__fini(&data[i - 1]);
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
irobot_create_msgs__action__DriveArc_Result__Sequence__fini(irobot_create_msgs__action__DriveArc_Result__Sequence * array)
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
      irobot_create_msgs__action__DriveArc_Result__fini(&array->data[i]);
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

irobot_create_msgs__action__DriveArc_Result__Sequence *
irobot_create_msgs__action__DriveArc_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irobot_create_msgs__action__DriveArc_Result__Sequence * array = (irobot_create_msgs__action__DriveArc_Result__Sequence *)allocator.allocate(sizeof(irobot_create_msgs__action__DriveArc_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irobot_create_msgs__action__DriveArc_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irobot_create_msgs__action__DriveArc_Result__Sequence__destroy(irobot_create_msgs__action__DriveArc_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irobot_create_msgs__action__DriveArc_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irobot_create_msgs__action__DriveArc_Result__Sequence__are_equal(const irobot_create_msgs__action__DriveArc_Result__Sequence * lhs, const irobot_create_msgs__action__DriveArc_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irobot_create_msgs__action__DriveArc_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irobot_create_msgs__action__DriveArc_Result__Sequence__copy(
  const irobot_create_msgs__action__DriveArc_Result__Sequence * input,
  irobot_create_msgs__action__DriveArc_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irobot_create_msgs__action__DriveArc_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irobot_create_msgs__action__DriveArc_Result * data =
      (irobot_create_msgs__action__DriveArc_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irobot_create_msgs__action__DriveArc_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irobot_create_msgs__action__DriveArc_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irobot_create_msgs__action__DriveArc_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
irobot_create_msgs__action__DriveArc_Feedback__init(irobot_create_msgs__action__DriveArc_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // remaining_angle_travel
  return true;
}

void
irobot_create_msgs__action__DriveArc_Feedback__fini(irobot_create_msgs__action__DriveArc_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // remaining_angle_travel
}

bool
irobot_create_msgs__action__DriveArc_Feedback__are_equal(const irobot_create_msgs__action__DriveArc_Feedback * lhs, const irobot_create_msgs__action__DriveArc_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // remaining_angle_travel
  if (lhs->remaining_angle_travel != rhs->remaining_angle_travel) {
    return false;
  }
  return true;
}

bool
irobot_create_msgs__action__DriveArc_Feedback__copy(
  const irobot_create_msgs__action__DriveArc_Feedback * input,
  irobot_create_msgs__action__DriveArc_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // remaining_angle_travel
  output->remaining_angle_travel = input->remaining_angle_travel;
  return true;
}

irobot_create_msgs__action__DriveArc_Feedback *
irobot_create_msgs__action__DriveArc_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irobot_create_msgs__action__DriveArc_Feedback * msg = (irobot_create_msgs__action__DriveArc_Feedback *)allocator.allocate(sizeof(irobot_create_msgs__action__DriveArc_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irobot_create_msgs__action__DriveArc_Feedback));
  bool success = irobot_create_msgs__action__DriveArc_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irobot_create_msgs__action__DriveArc_Feedback__destroy(irobot_create_msgs__action__DriveArc_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irobot_create_msgs__action__DriveArc_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irobot_create_msgs__action__DriveArc_Feedback__Sequence__init(irobot_create_msgs__action__DriveArc_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irobot_create_msgs__action__DriveArc_Feedback * data = NULL;

  if (size) {
    data = (irobot_create_msgs__action__DriveArc_Feedback *)allocator.zero_allocate(size, sizeof(irobot_create_msgs__action__DriveArc_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irobot_create_msgs__action__DriveArc_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irobot_create_msgs__action__DriveArc_Feedback__fini(&data[i - 1]);
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
irobot_create_msgs__action__DriveArc_Feedback__Sequence__fini(irobot_create_msgs__action__DriveArc_Feedback__Sequence * array)
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
      irobot_create_msgs__action__DriveArc_Feedback__fini(&array->data[i]);
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

irobot_create_msgs__action__DriveArc_Feedback__Sequence *
irobot_create_msgs__action__DriveArc_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irobot_create_msgs__action__DriveArc_Feedback__Sequence * array = (irobot_create_msgs__action__DriveArc_Feedback__Sequence *)allocator.allocate(sizeof(irobot_create_msgs__action__DriveArc_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irobot_create_msgs__action__DriveArc_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irobot_create_msgs__action__DriveArc_Feedback__Sequence__destroy(irobot_create_msgs__action__DriveArc_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irobot_create_msgs__action__DriveArc_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irobot_create_msgs__action__DriveArc_Feedback__Sequence__are_equal(const irobot_create_msgs__action__DriveArc_Feedback__Sequence * lhs, const irobot_create_msgs__action__DriveArc_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irobot_create_msgs__action__DriveArc_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irobot_create_msgs__action__DriveArc_Feedback__Sequence__copy(
  const irobot_create_msgs__action__DriveArc_Feedback__Sequence * input,
  irobot_create_msgs__action__DriveArc_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irobot_create_msgs__action__DriveArc_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irobot_create_msgs__action__DriveArc_Feedback * data =
      (irobot_create_msgs__action__DriveArc_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irobot_create_msgs__action__DriveArc_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irobot_create_msgs__action__DriveArc_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irobot_create_msgs__action__DriveArc_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "irobot_create_msgs/action/detail/drive_arc__functions.h"

bool
irobot_create_msgs__action__DriveArc_SendGoal_Request__init(irobot_create_msgs__action__DriveArc_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    irobot_create_msgs__action__DriveArc_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!irobot_create_msgs__action__DriveArc_Goal__init(&msg->goal)) {
    irobot_create_msgs__action__DriveArc_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
irobot_create_msgs__action__DriveArc_SendGoal_Request__fini(irobot_create_msgs__action__DriveArc_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  irobot_create_msgs__action__DriveArc_Goal__fini(&msg->goal);
}

bool
irobot_create_msgs__action__DriveArc_SendGoal_Request__are_equal(const irobot_create_msgs__action__DriveArc_SendGoal_Request * lhs, const irobot_create_msgs__action__DriveArc_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!irobot_create_msgs__action__DriveArc_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
irobot_create_msgs__action__DriveArc_SendGoal_Request__copy(
  const irobot_create_msgs__action__DriveArc_SendGoal_Request * input,
  irobot_create_msgs__action__DriveArc_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!irobot_create_msgs__action__DriveArc_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

irobot_create_msgs__action__DriveArc_SendGoal_Request *
irobot_create_msgs__action__DriveArc_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irobot_create_msgs__action__DriveArc_SendGoal_Request * msg = (irobot_create_msgs__action__DriveArc_SendGoal_Request *)allocator.allocate(sizeof(irobot_create_msgs__action__DriveArc_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irobot_create_msgs__action__DriveArc_SendGoal_Request));
  bool success = irobot_create_msgs__action__DriveArc_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irobot_create_msgs__action__DriveArc_SendGoal_Request__destroy(irobot_create_msgs__action__DriveArc_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irobot_create_msgs__action__DriveArc_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irobot_create_msgs__action__DriveArc_SendGoal_Request__Sequence__init(irobot_create_msgs__action__DriveArc_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irobot_create_msgs__action__DriveArc_SendGoal_Request * data = NULL;

  if (size) {
    data = (irobot_create_msgs__action__DriveArc_SendGoal_Request *)allocator.zero_allocate(size, sizeof(irobot_create_msgs__action__DriveArc_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irobot_create_msgs__action__DriveArc_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irobot_create_msgs__action__DriveArc_SendGoal_Request__fini(&data[i - 1]);
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
irobot_create_msgs__action__DriveArc_SendGoal_Request__Sequence__fini(irobot_create_msgs__action__DriveArc_SendGoal_Request__Sequence * array)
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
      irobot_create_msgs__action__DriveArc_SendGoal_Request__fini(&array->data[i]);
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

irobot_create_msgs__action__DriveArc_SendGoal_Request__Sequence *
irobot_create_msgs__action__DriveArc_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irobot_create_msgs__action__DriveArc_SendGoal_Request__Sequence * array = (irobot_create_msgs__action__DriveArc_SendGoal_Request__Sequence *)allocator.allocate(sizeof(irobot_create_msgs__action__DriveArc_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irobot_create_msgs__action__DriveArc_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irobot_create_msgs__action__DriveArc_SendGoal_Request__Sequence__destroy(irobot_create_msgs__action__DriveArc_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irobot_create_msgs__action__DriveArc_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irobot_create_msgs__action__DriveArc_SendGoal_Request__Sequence__are_equal(const irobot_create_msgs__action__DriveArc_SendGoal_Request__Sequence * lhs, const irobot_create_msgs__action__DriveArc_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irobot_create_msgs__action__DriveArc_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irobot_create_msgs__action__DriveArc_SendGoal_Request__Sequence__copy(
  const irobot_create_msgs__action__DriveArc_SendGoal_Request__Sequence * input,
  irobot_create_msgs__action__DriveArc_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irobot_create_msgs__action__DriveArc_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irobot_create_msgs__action__DriveArc_SendGoal_Request * data =
      (irobot_create_msgs__action__DriveArc_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irobot_create_msgs__action__DriveArc_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irobot_create_msgs__action__DriveArc_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irobot_create_msgs__action__DriveArc_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
irobot_create_msgs__action__DriveArc_SendGoal_Response__init(irobot_create_msgs__action__DriveArc_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    irobot_create_msgs__action__DriveArc_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
irobot_create_msgs__action__DriveArc_SendGoal_Response__fini(irobot_create_msgs__action__DriveArc_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
irobot_create_msgs__action__DriveArc_SendGoal_Response__are_equal(const irobot_create_msgs__action__DriveArc_SendGoal_Response * lhs, const irobot_create_msgs__action__DriveArc_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
irobot_create_msgs__action__DriveArc_SendGoal_Response__copy(
  const irobot_create_msgs__action__DriveArc_SendGoal_Response * input,
  irobot_create_msgs__action__DriveArc_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

irobot_create_msgs__action__DriveArc_SendGoal_Response *
irobot_create_msgs__action__DriveArc_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irobot_create_msgs__action__DriveArc_SendGoal_Response * msg = (irobot_create_msgs__action__DriveArc_SendGoal_Response *)allocator.allocate(sizeof(irobot_create_msgs__action__DriveArc_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irobot_create_msgs__action__DriveArc_SendGoal_Response));
  bool success = irobot_create_msgs__action__DriveArc_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irobot_create_msgs__action__DriveArc_SendGoal_Response__destroy(irobot_create_msgs__action__DriveArc_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irobot_create_msgs__action__DriveArc_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irobot_create_msgs__action__DriveArc_SendGoal_Response__Sequence__init(irobot_create_msgs__action__DriveArc_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irobot_create_msgs__action__DriveArc_SendGoal_Response * data = NULL;

  if (size) {
    data = (irobot_create_msgs__action__DriveArc_SendGoal_Response *)allocator.zero_allocate(size, sizeof(irobot_create_msgs__action__DriveArc_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irobot_create_msgs__action__DriveArc_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irobot_create_msgs__action__DriveArc_SendGoal_Response__fini(&data[i - 1]);
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
irobot_create_msgs__action__DriveArc_SendGoal_Response__Sequence__fini(irobot_create_msgs__action__DriveArc_SendGoal_Response__Sequence * array)
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
      irobot_create_msgs__action__DriveArc_SendGoal_Response__fini(&array->data[i]);
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

irobot_create_msgs__action__DriveArc_SendGoal_Response__Sequence *
irobot_create_msgs__action__DriveArc_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irobot_create_msgs__action__DriveArc_SendGoal_Response__Sequence * array = (irobot_create_msgs__action__DriveArc_SendGoal_Response__Sequence *)allocator.allocate(sizeof(irobot_create_msgs__action__DriveArc_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irobot_create_msgs__action__DriveArc_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irobot_create_msgs__action__DriveArc_SendGoal_Response__Sequence__destroy(irobot_create_msgs__action__DriveArc_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irobot_create_msgs__action__DriveArc_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irobot_create_msgs__action__DriveArc_SendGoal_Response__Sequence__are_equal(const irobot_create_msgs__action__DriveArc_SendGoal_Response__Sequence * lhs, const irobot_create_msgs__action__DriveArc_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irobot_create_msgs__action__DriveArc_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irobot_create_msgs__action__DriveArc_SendGoal_Response__Sequence__copy(
  const irobot_create_msgs__action__DriveArc_SendGoal_Response__Sequence * input,
  irobot_create_msgs__action__DriveArc_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irobot_create_msgs__action__DriveArc_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irobot_create_msgs__action__DriveArc_SendGoal_Response * data =
      (irobot_create_msgs__action__DriveArc_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irobot_create_msgs__action__DriveArc_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irobot_create_msgs__action__DriveArc_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irobot_create_msgs__action__DriveArc_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
irobot_create_msgs__action__DriveArc_GetResult_Request__init(irobot_create_msgs__action__DriveArc_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    irobot_create_msgs__action__DriveArc_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
irobot_create_msgs__action__DriveArc_GetResult_Request__fini(irobot_create_msgs__action__DriveArc_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
irobot_create_msgs__action__DriveArc_GetResult_Request__are_equal(const irobot_create_msgs__action__DriveArc_GetResult_Request * lhs, const irobot_create_msgs__action__DriveArc_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
irobot_create_msgs__action__DriveArc_GetResult_Request__copy(
  const irobot_create_msgs__action__DriveArc_GetResult_Request * input,
  irobot_create_msgs__action__DriveArc_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

irobot_create_msgs__action__DriveArc_GetResult_Request *
irobot_create_msgs__action__DriveArc_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irobot_create_msgs__action__DriveArc_GetResult_Request * msg = (irobot_create_msgs__action__DriveArc_GetResult_Request *)allocator.allocate(sizeof(irobot_create_msgs__action__DriveArc_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irobot_create_msgs__action__DriveArc_GetResult_Request));
  bool success = irobot_create_msgs__action__DriveArc_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irobot_create_msgs__action__DriveArc_GetResult_Request__destroy(irobot_create_msgs__action__DriveArc_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irobot_create_msgs__action__DriveArc_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irobot_create_msgs__action__DriveArc_GetResult_Request__Sequence__init(irobot_create_msgs__action__DriveArc_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irobot_create_msgs__action__DriveArc_GetResult_Request * data = NULL;

  if (size) {
    data = (irobot_create_msgs__action__DriveArc_GetResult_Request *)allocator.zero_allocate(size, sizeof(irobot_create_msgs__action__DriveArc_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irobot_create_msgs__action__DriveArc_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irobot_create_msgs__action__DriveArc_GetResult_Request__fini(&data[i - 1]);
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
irobot_create_msgs__action__DriveArc_GetResult_Request__Sequence__fini(irobot_create_msgs__action__DriveArc_GetResult_Request__Sequence * array)
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
      irobot_create_msgs__action__DriveArc_GetResult_Request__fini(&array->data[i]);
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

irobot_create_msgs__action__DriveArc_GetResult_Request__Sequence *
irobot_create_msgs__action__DriveArc_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irobot_create_msgs__action__DriveArc_GetResult_Request__Sequence * array = (irobot_create_msgs__action__DriveArc_GetResult_Request__Sequence *)allocator.allocate(sizeof(irobot_create_msgs__action__DriveArc_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irobot_create_msgs__action__DriveArc_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irobot_create_msgs__action__DriveArc_GetResult_Request__Sequence__destroy(irobot_create_msgs__action__DriveArc_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irobot_create_msgs__action__DriveArc_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irobot_create_msgs__action__DriveArc_GetResult_Request__Sequence__are_equal(const irobot_create_msgs__action__DriveArc_GetResult_Request__Sequence * lhs, const irobot_create_msgs__action__DriveArc_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irobot_create_msgs__action__DriveArc_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irobot_create_msgs__action__DriveArc_GetResult_Request__Sequence__copy(
  const irobot_create_msgs__action__DriveArc_GetResult_Request__Sequence * input,
  irobot_create_msgs__action__DriveArc_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irobot_create_msgs__action__DriveArc_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irobot_create_msgs__action__DriveArc_GetResult_Request * data =
      (irobot_create_msgs__action__DriveArc_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irobot_create_msgs__action__DriveArc_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irobot_create_msgs__action__DriveArc_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irobot_create_msgs__action__DriveArc_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "irobot_create_msgs/action/detail/drive_arc__functions.h"

bool
irobot_create_msgs__action__DriveArc_GetResult_Response__init(irobot_create_msgs__action__DriveArc_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!irobot_create_msgs__action__DriveArc_Result__init(&msg->result)) {
    irobot_create_msgs__action__DriveArc_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
irobot_create_msgs__action__DriveArc_GetResult_Response__fini(irobot_create_msgs__action__DriveArc_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  irobot_create_msgs__action__DriveArc_Result__fini(&msg->result);
}

bool
irobot_create_msgs__action__DriveArc_GetResult_Response__are_equal(const irobot_create_msgs__action__DriveArc_GetResult_Response * lhs, const irobot_create_msgs__action__DriveArc_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!irobot_create_msgs__action__DriveArc_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
irobot_create_msgs__action__DriveArc_GetResult_Response__copy(
  const irobot_create_msgs__action__DriveArc_GetResult_Response * input,
  irobot_create_msgs__action__DriveArc_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!irobot_create_msgs__action__DriveArc_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

irobot_create_msgs__action__DriveArc_GetResult_Response *
irobot_create_msgs__action__DriveArc_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irobot_create_msgs__action__DriveArc_GetResult_Response * msg = (irobot_create_msgs__action__DriveArc_GetResult_Response *)allocator.allocate(sizeof(irobot_create_msgs__action__DriveArc_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irobot_create_msgs__action__DriveArc_GetResult_Response));
  bool success = irobot_create_msgs__action__DriveArc_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irobot_create_msgs__action__DriveArc_GetResult_Response__destroy(irobot_create_msgs__action__DriveArc_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irobot_create_msgs__action__DriveArc_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irobot_create_msgs__action__DriveArc_GetResult_Response__Sequence__init(irobot_create_msgs__action__DriveArc_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irobot_create_msgs__action__DriveArc_GetResult_Response * data = NULL;

  if (size) {
    data = (irobot_create_msgs__action__DriveArc_GetResult_Response *)allocator.zero_allocate(size, sizeof(irobot_create_msgs__action__DriveArc_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irobot_create_msgs__action__DriveArc_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irobot_create_msgs__action__DriveArc_GetResult_Response__fini(&data[i - 1]);
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
irobot_create_msgs__action__DriveArc_GetResult_Response__Sequence__fini(irobot_create_msgs__action__DriveArc_GetResult_Response__Sequence * array)
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
      irobot_create_msgs__action__DriveArc_GetResult_Response__fini(&array->data[i]);
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

irobot_create_msgs__action__DriveArc_GetResult_Response__Sequence *
irobot_create_msgs__action__DriveArc_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irobot_create_msgs__action__DriveArc_GetResult_Response__Sequence * array = (irobot_create_msgs__action__DriveArc_GetResult_Response__Sequence *)allocator.allocate(sizeof(irobot_create_msgs__action__DriveArc_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irobot_create_msgs__action__DriveArc_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irobot_create_msgs__action__DriveArc_GetResult_Response__Sequence__destroy(irobot_create_msgs__action__DriveArc_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irobot_create_msgs__action__DriveArc_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irobot_create_msgs__action__DriveArc_GetResult_Response__Sequence__are_equal(const irobot_create_msgs__action__DriveArc_GetResult_Response__Sequence * lhs, const irobot_create_msgs__action__DriveArc_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irobot_create_msgs__action__DriveArc_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irobot_create_msgs__action__DriveArc_GetResult_Response__Sequence__copy(
  const irobot_create_msgs__action__DriveArc_GetResult_Response__Sequence * input,
  irobot_create_msgs__action__DriveArc_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irobot_create_msgs__action__DriveArc_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irobot_create_msgs__action__DriveArc_GetResult_Response * data =
      (irobot_create_msgs__action__DriveArc_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irobot_create_msgs__action__DriveArc_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irobot_create_msgs__action__DriveArc_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irobot_create_msgs__action__DriveArc_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "irobot_create_msgs/action/detail/drive_arc__functions.h"

bool
irobot_create_msgs__action__DriveArc_FeedbackMessage__init(irobot_create_msgs__action__DriveArc_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    irobot_create_msgs__action__DriveArc_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!irobot_create_msgs__action__DriveArc_Feedback__init(&msg->feedback)) {
    irobot_create_msgs__action__DriveArc_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
irobot_create_msgs__action__DriveArc_FeedbackMessage__fini(irobot_create_msgs__action__DriveArc_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  irobot_create_msgs__action__DriveArc_Feedback__fini(&msg->feedback);
}

bool
irobot_create_msgs__action__DriveArc_FeedbackMessage__are_equal(const irobot_create_msgs__action__DriveArc_FeedbackMessage * lhs, const irobot_create_msgs__action__DriveArc_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!irobot_create_msgs__action__DriveArc_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
irobot_create_msgs__action__DriveArc_FeedbackMessage__copy(
  const irobot_create_msgs__action__DriveArc_FeedbackMessage * input,
  irobot_create_msgs__action__DriveArc_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!irobot_create_msgs__action__DriveArc_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

irobot_create_msgs__action__DriveArc_FeedbackMessage *
irobot_create_msgs__action__DriveArc_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irobot_create_msgs__action__DriveArc_FeedbackMessage * msg = (irobot_create_msgs__action__DriveArc_FeedbackMessage *)allocator.allocate(sizeof(irobot_create_msgs__action__DriveArc_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irobot_create_msgs__action__DriveArc_FeedbackMessage));
  bool success = irobot_create_msgs__action__DriveArc_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irobot_create_msgs__action__DriveArc_FeedbackMessage__destroy(irobot_create_msgs__action__DriveArc_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irobot_create_msgs__action__DriveArc_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irobot_create_msgs__action__DriveArc_FeedbackMessage__Sequence__init(irobot_create_msgs__action__DriveArc_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irobot_create_msgs__action__DriveArc_FeedbackMessage * data = NULL;

  if (size) {
    data = (irobot_create_msgs__action__DriveArc_FeedbackMessage *)allocator.zero_allocate(size, sizeof(irobot_create_msgs__action__DriveArc_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irobot_create_msgs__action__DriveArc_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irobot_create_msgs__action__DriveArc_FeedbackMessage__fini(&data[i - 1]);
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
irobot_create_msgs__action__DriveArc_FeedbackMessage__Sequence__fini(irobot_create_msgs__action__DriveArc_FeedbackMessage__Sequence * array)
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
      irobot_create_msgs__action__DriveArc_FeedbackMessage__fini(&array->data[i]);
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

irobot_create_msgs__action__DriveArc_FeedbackMessage__Sequence *
irobot_create_msgs__action__DriveArc_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irobot_create_msgs__action__DriveArc_FeedbackMessage__Sequence * array = (irobot_create_msgs__action__DriveArc_FeedbackMessage__Sequence *)allocator.allocate(sizeof(irobot_create_msgs__action__DriveArc_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irobot_create_msgs__action__DriveArc_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irobot_create_msgs__action__DriveArc_FeedbackMessage__Sequence__destroy(irobot_create_msgs__action__DriveArc_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irobot_create_msgs__action__DriveArc_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irobot_create_msgs__action__DriveArc_FeedbackMessage__Sequence__are_equal(const irobot_create_msgs__action__DriveArc_FeedbackMessage__Sequence * lhs, const irobot_create_msgs__action__DriveArc_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irobot_create_msgs__action__DriveArc_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irobot_create_msgs__action__DriveArc_FeedbackMessage__Sequence__copy(
  const irobot_create_msgs__action__DriveArc_FeedbackMessage__Sequence * input,
  irobot_create_msgs__action__DriveArc_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irobot_create_msgs__action__DriveArc_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irobot_create_msgs__action__DriveArc_FeedbackMessage * data =
      (irobot_create_msgs__action__DriveArc_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irobot_create_msgs__action__DriveArc_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irobot_create_msgs__action__DriveArc_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irobot_create_msgs__action__DriveArc_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
