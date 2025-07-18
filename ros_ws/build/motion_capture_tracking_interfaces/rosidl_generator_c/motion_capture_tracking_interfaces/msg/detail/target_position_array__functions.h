// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from motion_capture_tracking_interfaces:msg/TargetPositionArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motion_capture_tracking_interfaces/msg/target_position_array.h"


#ifndef MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__TARGET_POSITION_ARRAY__FUNCTIONS_H_
#define MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__TARGET_POSITION_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "motion_capture_tracking_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "motion_capture_tracking_interfaces/msg/detail/target_position_array__struct.h"

/// Initialize msg/TargetPositionArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * motion_capture_tracking_interfaces__msg__TargetPositionArray
 * )) before or use
 * motion_capture_tracking_interfaces__msg__TargetPositionArray__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_motion_capture_tracking_interfaces
bool
motion_capture_tracking_interfaces__msg__TargetPositionArray__init(motion_capture_tracking_interfaces__msg__TargetPositionArray * msg);

/// Finalize msg/TargetPositionArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motion_capture_tracking_interfaces
void
motion_capture_tracking_interfaces__msg__TargetPositionArray__fini(motion_capture_tracking_interfaces__msg__TargetPositionArray * msg);

/// Create msg/TargetPositionArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * motion_capture_tracking_interfaces__msg__TargetPositionArray__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_motion_capture_tracking_interfaces
motion_capture_tracking_interfaces__msg__TargetPositionArray *
motion_capture_tracking_interfaces__msg__TargetPositionArray__create(void);

/// Destroy msg/TargetPositionArray message.
/**
 * It calls
 * motion_capture_tracking_interfaces__msg__TargetPositionArray__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motion_capture_tracking_interfaces
void
motion_capture_tracking_interfaces__msg__TargetPositionArray__destroy(motion_capture_tracking_interfaces__msg__TargetPositionArray * msg);

/// Check for msg/TargetPositionArray message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_motion_capture_tracking_interfaces
bool
motion_capture_tracking_interfaces__msg__TargetPositionArray__are_equal(const motion_capture_tracking_interfaces__msg__TargetPositionArray * lhs, const motion_capture_tracking_interfaces__msg__TargetPositionArray * rhs);

/// Copy a msg/TargetPositionArray message.
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
ROSIDL_GENERATOR_C_PUBLIC_motion_capture_tracking_interfaces
bool
motion_capture_tracking_interfaces__msg__TargetPositionArray__copy(
  const motion_capture_tracking_interfaces__msg__TargetPositionArray * input,
  motion_capture_tracking_interfaces__msg__TargetPositionArray * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_motion_capture_tracking_interfaces
const rosidl_type_hash_t *
motion_capture_tracking_interfaces__msg__TargetPositionArray__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_motion_capture_tracking_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
motion_capture_tracking_interfaces__msg__TargetPositionArray__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_motion_capture_tracking_interfaces
const rosidl_runtime_c__type_description__TypeSource *
motion_capture_tracking_interfaces__msg__TargetPositionArray__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_motion_capture_tracking_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
motion_capture_tracking_interfaces__msg__TargetPositionArray__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/TargetPositionArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * motion_capture_tracking_interfaces__msg__TargetPositionArray__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_motion_capture_tracking_interfaces
bool
motion_capture_tracking_interfaces__msg__TargetPositionArray__Sequence__init(motion_capture_tracking_interfaces__msg__TargetPositionArray__Sequence * array, size_t size);

/// Finalize array of msg/TargetPositionArray messages.
/**
 * It calls
 * motion_capture_tracking_interfaces__msg__TargetPositionArray__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motion_capture_tracking_interfaces
void
motion_capture_tracking_interfaces__msg__TargetPositionArray__Sequence__fini(motion_capture_tracking_interfaces__msg__TargetPositionArray__Sequence * array);

/// Create array of msg/TargetPositionArray messages.
/**
 * It allocates the memory for the array and calls
 * motion_capture_tracking_interfaces__msg__TargetPositionArray__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_motion_capture_tracking_interfaces
motion_capture_tracking_interfaces__msg__TargetPositionArray__Sequence *
motion_capture_tracking_interfaces__msg__TargetPositionArray__Sequence__create(size_t size);

/// Destroy array of msg/TargetPositionArray messages.
/**
 * It calls
 * motion_capture_tracking_interfaces__msg__TargetPositionArray__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motion_capture_tracking_interfaces
void
motion_capture_tracking_interfaces__msg__TargetPositionArray__Sequence__destroy(motion_capture_tracking_interfaces__msg__TargetPositionArray__Sequence * array);

/// Check for msg/TargetPositionArray message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_motion_capture_tracking_interfaces
bool
motion_capture_tracking_interfaces__msg__TargetPositionArray__Sequence__are_equal(const motion_capture_tracking_interfaces__msg__TargetPositionArray__Sequence * lhs, const motion_capture_tracking_interfaces__msg__TargetPositionArray__Sequence * rhs);

/// Copy an array of msg/TargetPositionArray messages.
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
ROSIDL_GENERATOR_C_PUBLIC_motion_capture_tracking_interfaces
bool
motion_capture_tracking_interfaces__msg__TargetPositionArray__Sequence__copy(
  const motion_capture_tracking_interfaces__msg__TargetPositionArray__Sequence * input,
  motion_capture_tracking_interfaces__msg__TargetPositionArray__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__TARGET_POSITION_ARRAY__FUNCTIONS_H_
