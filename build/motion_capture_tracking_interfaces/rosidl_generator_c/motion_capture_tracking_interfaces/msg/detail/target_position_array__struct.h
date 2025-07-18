// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from motion_capture_tracking_interfaces:msg/TargetPositionArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motion_capture_tracking_interfaces/msg/target_position_array.h"


#ifndef MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__TARGET_POSITION_ARRAY__STRUCT_H_
#define MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__TARGET_POSITION_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'targets'
#include "motion_capture_tracking_interfaces/msg/detail/target_position__struct.h"

/// Struct defined in msg/TargetPositionArray in the package motion_capture_tracking_interfaces.
typedef struct motion_capture_tracking_interfaces__msg__TargetPositionArray
{
  motion_capture_tracking_interfaces__msg__TargetPosition__Sequence targets;
} motion_capture_tracking_interfaces__msg__TargetPositionArray;

// Struct for a sequence of motion_capture_tracking_interfaces__msg__TargetPositionArray.
typedef struct motion_capture_tracking_interfaces__msg__TargetPositionArray__Sequence
{
  motion_capture_tracking_interfaces__msg__TargetPositionArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motion_capture_tracking_interfaces__msg__TargetPositionArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__TARGET_POSITION_ARRAY__STRUCT_H_
