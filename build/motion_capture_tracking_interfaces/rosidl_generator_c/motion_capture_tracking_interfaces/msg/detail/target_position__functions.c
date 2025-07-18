// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from motion_capture_tracking_interfaces:msg/TargetPosition.idl
// generated code does not contain a copyright notice
#include "motion_capture_tracking_interfaces/msg/detail/target_position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `position`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
motion_capture_tracking_interfaces__msg__TargetPosition__init(motion_capture_tracking_interfaces__msg__TargetPosition * msg)
{
  if (!msg) {
    return false;
  }
  // target_id
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    motion_capture_tracking_interfaces__msg__TargetPosition__fini(msg);
    return false;
  }
  return true;
}

void
motion_capture_tracking_interfaces__msg__TargetPosition__fini(motion_capture_tracking_interfaces__msg__TargetPosition * msg)
{
  if (!msg) {
    return;
  }
  // target_id
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
}

bool
motion_capture_tracking_interfaces__msg__TargetPosition__are_equal(const motion_capture_tracking_interfaces__msg__TargetPosition * lhs, const motion_capture_tracking_interfaces__msg__TargetPosition * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_id
  if (lhs->target_id != rhs->target_id) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  return true;
}

bool
motion_capture_tracking_interfaces__msg__TargetPosition__copy(
  const motion_capture_tracking_interfaces__msg__TargetPosition * input,
  motion_capture_tracking_interfaces__msg__TargetPosition * output)
{
  if (!input || !output) {
    return false;
  }
  // target_id
  output->target_id = input->target_id;
  // position
  if (!geometry_msgs__msg__Point__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  return true;
}

motion_capture_tracking_interfaces__msg__TargetPosition *
motion_capture_tracking_interfaces__msg__TargetPosition__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motion_capture_tracking_interfaces__msg__TargetPosition * msg = (motion_capture_tracking_interfaces__msg__TargetPosition *)allocator.allocate(sizeof(motion_capture_tracking_interfaces__msg__TargetPosition), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(motion_capture_tracking_interfaces__msg__TargetPosition));
  bool success = motion_capture_tracking_interfaces__msg__TargetPosition__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
motion_capture_tracking_interfaces__msg__TargetPosition__destroy(motion_capture_tracking_interfaces__msg__TargetPosition * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    motion_capture_tracking_interfaces__msg__TargetPosition__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
motion_capture_tracking_interfaces__msg__TargetPosition__Sequence__init(motion_capture_tracking_interfaces__msg__TargetPosition__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motion_capture_tracking_interfaces__msg__TargetPosition * data = NULL;

  if (size) {
    data = (motion_capture_tracking_interfaces__msg__TargetPosition *)allocator.zero_allocate(size, sizeof(motion_capture_tracking_interfaces__msg__TargetPosition), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = motion_capture_tracking_interfaces__msg__TargetPosition__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        motion_capture_tracking_interfaces__msg__TargetPosition__fini(&data[i - 1]);
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
motion_capture_tracking_interfaces__msg__TargetPosition__Sequence__fini(motion_capture_tracking_interfaces__msg__TargetPosition__Sequence * array)
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
      motion_capture_tracking_interfaces__msg__TargetPosition__fini(&array->data[i]);
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

motion_capture_tracking_interfaces__msg__TargetPosition__Sequence *
motion_capture_tracking_interfaces__msg__TargetPosition__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motion_capture_tracking_interfaces__msg__TargetPosition__Sequence * array = (motion_capture_tracking_interfaces__msg__TargetPosition__Sequence *)allocator.allocate(sizeof(motion_capture_tracking_interfaces__msg__TargetPosition__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = motion_capture_tracking_interfaces__msg__TargetPosition__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
motion_capture_tracking_interfaces__msg__TargetPosition__Sequence__destroy(motion_capture_tracking_interfaces__msg__TargetPosition__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    motion_capture_tracking_interfaces__msg__TargetPosition__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
motion_capture_tracking_interfaces__msg__TargetPosition__Sequence__are_equal(const motion_capture_tracking_interfaces__msg__TargetPosition__Sequence * lhs, const motion_capture_tracking_interfaces__msg__TargetPosition__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!motion_capture_tracking_interfaces__msg__TargetPosition__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
motion_capture_tracking_interfaces__msg__TargetPosition__Sequence__copy(
  const motion_capture_tracking_interfaces__msg__TargetPosition__Sequence * input,
  motion_capture_tracking_interfaces__msg__TargetPosition__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(motion_capture_tracking_interfaces__msg__TargetPosition);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    motion_capture_tracking_interfaces__msg__TargetPosition * data =
      (motion_capture_tracking_interfaces__msg__TargetPosition *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!motion_capture_tracking_interfaces__msg__TargetPosition__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          motion_capture_tracking_interfaces__msg__TargetPosition__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!motion_capture_tracking_interfaces__msg__TargetPosition__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
