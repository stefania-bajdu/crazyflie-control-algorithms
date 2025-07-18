// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from motion_capture_tracking_interfaces:msg/TargetPositionArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "motion_capture_tracking_interfaces/msg/detail/target_position_array__rosidl_typesupport_introspection_c.h"
#include "motion_capture_tracking_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "motion_capture_tracking_interfaces/msg/detail/target_position_array__functions.h"
#include "motion_capture_tracking_interfaces/msg/detail/target_position_array__struct.h"


// Include directives for member types
// Member `targets`
#include "motion_capture_tracking_interfaces/msg/target_position.h"
// Member `targets`
#include "motion_capture_tracking_interfaces/msg/detail/target_position__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void motion_capture_tracking_interfaces__msg__TargetPositionArray__rosidl_typesupport_introspection_c__TargetPositionArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  motion_capture_tracking_interfaces__msg__TargetPositionArray__init(message_memory);
}

void motion_capture_tracking_interfaces__msg__TargetPositionArray__rosidl_typesupport_introspection_c__TargetPositionArray_fini_function(void * message_memory)
{
  motion_capture_tracking_interfaces__msg__TargetPositionArray__fini(message_memory);
}

size_t motion_capture_tracking_interfaces__msg__TargetPositionArray__rosidl_typesupport_introspection_c__size_function__TargetPositionArray__targets(
  const void * untyped_member)
{
  const motion_capture_tracking_interfaces__msg__TargetPosition__Sequence * member =
    (const motion_capture_tracking_interfaces__msg__TargetPosition__Sequence *)(untyped_member);
  return member->size;
}

const void * motion_capture_tracking_interfaces__msg__TargetPositionArray__rosidl_typesupport_introspection_c__get_const_function__TargetPositionArray__targets(
  const void * untyped_member, size_t index)
{
  const motion_capture_tracking_interfaces__msg__TargetPosition__Sequence * member =
    (const motion_capture_tracking_interfaces__msg__TargetPosition__Sequence *)(untyped_member);
  return &member->data[index];
}

void * motion_capture_tracking_interfaces__msg__TargetPositionArray__rosidl_typesupport_introspection_c__get_function__TargetPositionArray__targets(
  void * untyped_member, size_t index)
{
  motion_capture_tracking_interfaces__msg__TargetPosition__Sequence * member =
    (motion_capture_tracking_interfaces__msg__TargetPosition__Sequence *)(untyped_member);
  return &member->data[index];
}

void motion_capture_tracking_interfaces__msg__TargetPositionArray__rosidl_typesupport_introspection_c__fetch_function__TargetPositionArray__targets(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const motion_capture_tracking_interfaces__msg__TargetPosition * item =
    ((const motion_capture_tracking_interfaces__msg__TargetPosition *)
    motion_capture_tracking_interfaces__msg__TargetPositionArray__rosidl_typesupport_introspection_c__get_const_function__TargetPositionArray__targets(untyped_member, index));
  motion_capture_tracking_interfaces__msg__TargetPosition * value =
    (motion_capture_tracking_interfaces__msg__TargetPosition *)(untyped_value);
  *value = *item;
}

void motion_capture_tracking_interfaces__msg__TargetPositionArray__rosidl_typesupport_introspection_c__assign_function__TargetPositionArray__targets(
  void * untyped_member, size_t index, const void * untyped_value)
{
  motion_capture_tracking_interfaces__msg__TargetPosition * item =
    ((motion_capture_tracking_interfaces__msg__TargetPosition *)
    motion_capture_tracking_interfaces__msg__TargetPositionArray__rosidl_typesupport_introspection_c__get_function__TargetPositionArray__targets(untyped_member, index));
  const motion_capture_tracking_interfaces__msg__TargetPosition * value =
    (const motion_capture_tracking_interfaces__msg__TargetPosition *)(untyped_value);
  *item = *value;
}

bool motion_capture_tracking_interfaces__msg__TargetPositionArray__rosidl_typesupport_introspection_c__resize_function__TargetPositionArray__targets(
  void * untyped_member, size_t size)
{
  motion_capture_tracking_interfaces__msg__TargetPosition__Sequence * member =
    (motion_capture_tracking_interfaces__msg__TargetPosition__Sequence *)(untyped_member);
  motion_capture_tracking_interfaces__msg__TargetPosition__Sequence__fini(member);
  return motion_capture_tracking_interfaces__msg__TargetPosition__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember motion_capture_tracking_interfaces__msg__TargetPositionArray__rosidl_typesupport_introspection_c__TargetPositionArray_message_member_array[1] = {
  {
    "targets",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motion_capture_tracking_interfaces__msg__TargetPositionArray, targets),  // bytes offset in struct
    NULL,  // default value
    motion_capture_tracking_interfaces__msg__TargetPositionArray__rosidl_typesupport_introspection_c__size_function__TargetPositionArray__targets,  // size() function pointer
    motion_capture_tracking_interfaces__msg__TargetPositionArray__rosidl_typesupport_introspection_c__get_const_function__TargetPositionArray__targets,  // get_const(index) function pointer
    motion_capture_tracking_interfaces__msg__TargetPositionArray__rosidl_typesupport_introspection_c__get_function__TargetPositionArray__targets,  // get(index) function pointer
    motion_capture_tracking_interfaces__msg__TargetPositionArray__rosidl_typesupport_introspection_c__fetch_function__TargetPositionArray__targets,  // fetch(index, &value) function pointer
    motion_capture_tracking_interfaces__msg__TargetPositionArray__rosidl_typesupport_introspection_c__assign_function__TargetPositionArray__targets,  // assign(index, value) function pointer
    motion_capture_tracking_interfaces__msg__TargetPositionArray__rosidl_typesupport_introspection_c__resize_function__TargetPositionArray__targets  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers motion_capture_tracking_interfaces__msg__TargetPositionArray__rosidl_typesupport_introspection_c__TargetPositionArray_message_members = {
  "motion_capture_tracking_interfaces__msg",  // message namespace
  "TargetPositionArray",  // message name
  1,  // number of fields
  sizeof(motion_capture_tracking_interfaces__msg__TargetPositionArray),
  false,  // has_any_key_member_
  motion_capture_tracking_interfaces__msg__TargetPositionArray__rosidl_typesupport_introspection_c__TargetPositionArray_message_member_array,  // message members
  motion_capture_tracking_interfaces__msg__TargetPositionArray__rosidl_typesupport_introspection_c__TargetPositionArray_init_function,  // function to initialize message memory (memory has to be allocated)
  motion_capture_tracking_interfaces__msg__TargetPositionArray__rosidl_typesupport_introspection_c__TargetPositionArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t motion_capture_tracking_interfaces__msg__TargetPositionArray__rosidl_typesupport_introspection_c__TargetPositionArray_message_type_support_handle = {
  0,
  &motion_capture_tracking_interfaces__msg__TargetPositionArray__rosidl_typesupport_introspection_c__TargetPositionArray_message_members,
  get_message_typesupport_handle_function,
  &motion_capture_tracking_interfaces__msg__TargetPositionArray__get_type_hash,
  &motion_capture_tracking_interfaces__msg__TargetPositionArray__get_type_description,
  &motion_capture_tracking_interfaces__msg__TargetPositionArray__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_motion_capture_tracking_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motion_capture_tracking_interfaces, msg, TargetPositionArray)() {
  motion_capture_tracking_interfaces__msg__TargetPositionArray__rosidl_typesupport_introspection_c__TargetPositionArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motion_capture_tracking_interfaces, msg, TargetPosition)();
  if (!motion_capture_tracking_interfaces__msg__TargetPositionArray__rosidl_typesupport_introspection_c__TargetPositionArray_message_type_support_handle.typesupport_identifier) {
    motion_capture_tracking_interfaces__msg__TargetPositionArray__rosidl_typesupport_introspection_c__TargetPositionArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &motion_capture_tracking_interfaces__msg__TargetPositionArray__rosidl_typesupport_introspection_c__TargetPositionArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
