// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from motion_capture_tracking_interfaces:msg/TargetPositionArray.idl
// generated code does not contain a copyright notice
#include "motion_capture_tracking_interfaces/msg/detail/target_position_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `targets`
#include "motion_capture_tracking_interfaces/msg/detail/target_position__functions.h"

bool
motion_capture_tracking_interfaces__msg__TargetPositionArray__init(motion_capture_tracking_interfaces__msg__TargetPositionArray * msg)
{
  if (!msg) {
    return false;
  }
  // targets
  if (!motion_capture_tracking_interfaces__msg__TargetPosition__Sequence__init(&msg->targets, 0)) {
    motion_capture_tracking_interfaces__msg__TargetPositionArray__fini(msg);
    return false;
  }
  return true;
}

void
motion_capture_tracking_interfaces__msg__TargetPositionArray__fini(motion_capture_tracking_interfaces__msg__TargetPositionArray * msg)
{
  if (!msg) {
    return;
  }
  // targets
  motion_capture_tracking_interfaces__msg__TargetPosition__Sequence__fini(&msg->targets);
}

bool
motion_capture_tracking_interfaces__msg__TargetPositionArray__are_equal(const motion_capture_tracking_interfaces__msg__TargetPositionArray * lhs, const motion_capture_tracking_interfaces__msg__TargetPositionArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // targets
  if (!motion_capture_tracking_interfaces__msg__TargetPosition__Sequence__are_equal(
      &(lhs->targets), &(rhs->targets)))
  {
    return false;
  }
  return true;
}

bool
motion_capture_tracking_interfaces__msg__TargetPositionArray__copy(
  const motion_capture_tracking_interfaces__msg__TargetPositionArray * input,
  motion_capture_tracking_interfaces__msg__TargetPositionArray * output)
{
  if (!input || !output) {
    return false;
  }
  // targets
  if (!motion_capture_tracking_interfaces__msg__TargetPosition__Sequence__copy(
      &(input->targets), &(output->targets)))
  {
    return false;
  }
  return true;
}

motion_capture_tracking_interfaces__msg__TargetPositionArray *
motion_capture_tracking_interfaces__msg__TargetPositionArray__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motion_capture_tracking_interfaces__msg__TargetPositionArray * msg = (motion_capture_tracking_interfaces__msg__TargetPositionArray *)allocator.allocate(sizeof(motion_capture_tracking_interfaces__msg__TargetPositionArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(motion_capture_tracking_interfaces__msg__TargetPositionArray));
  bool success = motion_capture_tracking_interfaces__msg__TargetPositionArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
motion_capture_tracking_interfaces__msg__TargetPositionArray__destroy(motion_capture_tracking_interfaces__msg__TargetPositionArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    motion_capture_tracking_interfaces__msg__TargetPositionArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
motion_capture_tracking_interfaces__msg__TargetPositionArray__Sequence__init(motion_capture_tracking_interfaces__msg__TargetPositionArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motion_capture_tracking_interfaces__msg__TargetPositionArray * data = NULL;

  if (size) {
    data = (motion_capture_tracking_interfaces__msg__TargetPositionArray *)allocator.zero_allocate(size, sizeof(motion_capture_tracking_interfaces__msg__TargetPositionArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = motion_capture_tracking_interfaces__msg__TargetPositionArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        motion_capture_tracking_interfaces__msg__TargetPositionArray__fini(&data[i - 1]);
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
motion_capture_tracking_interfaces__msg__TargetPositionArray__Sequence__fini(motion_capture_tracking_interfaces__msg__TargetPositionArray__Sequence * array)
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
      motion_capture_tracking_interfaces__msg__TargetPositionArray__fini(&array->data[i]);
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

motion_capture_tracking_interfaces__msg__TargetPositionArray__Sequence *
motion_capture_tracking_interfaces__msg__TargetPositionArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motion_capture_tracking_interfaces__msg__TargetPositionArray__Sequence * array = (motion_capture_tracking_interfaces__msg__TargetPositionArray__Sequence *)allocator.allocate(sizeof(motion_capture_tracking_interfaces__msg__TargetPositionArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = motion_capture_tracking_interfaces__msg__TargetPositionArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
motion_capture_tracking_interfaces__msg__TargetPositionArray__Sequence__destroy(motion_capture_tracking_interfaces__msg__TargetPositionArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    motion_capture_tracking_interfaces__msg__TargetPositionArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
motion_capture_tracking_interfaces__msg__TargetPositionArray__Sequence__are_equal(const motion_capture_tracking_interfaces__msg__TargetPositionArray__Sequence * lhs, const motion_capture_tracking_interfaces__msg__TargetPositionArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!motion_capture_tracking_interfaces__msg__TargetPositionArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
motion_capture_tracking_interfaces__msg__TargetPositionArray__Sequence__copy(
  const motion_capture_tracking_interfaces__msg__TargetPositionArray__Sequence * input,
  motion_capture_tracking_interfaces__msg__TargetPositionArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(motion_capture_tracking_interfaces__msg__TargetPositionArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    motion_capture_tracking_interfaces__msg__TargetPositionArray * data =
      (motion_capture_tracking_interfaces__msg__TargetPositionArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!motion_capture_tracking_interfaces__msg__TargetPositionArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          motion_capture_tracking_interfaces__msg__TargetPositionArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!motion_capture_tracking_interfaces__msg__TargetPositionArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
