// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from motion_capture_tracking_interfaces:msg/TargetPosition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motion_capture_tracking_interfaces/msg/target_position.h"


#ifndef MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__TARGET_POSITION__STRUCT_H_
#define MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__TARGET_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/TargetPosition in the package motion_capture_tracking_interfaces.
typedef struct motion_capture_tracking_interfaces__msg__TargetPosition
{
  int32_t target_id;
  geometry_msgs__msg__Point position;
} motion_capture_tracking_interfaces__msg__TargetPosition;

// Struct for a sequence of motion_capture_tracking_interfaces__msg__TargetPosition.
typedef struct motion_capture_tracking_interfaces__msg__TargetPosition__Sequence
{
  motion_capture_tracking_interfaces__msg__TargetPosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motion_capture_tracking_interfaces__msg__TargetPosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__TARGET_POSITION__STRUCT_H_
