// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from motion_capture_tracking_interfaces:msg/TargetPosition.idl
// generated code does not contain a copyright notice
#include "motion_capture_tracking_interfaces/msg/detail/target_position__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "motion_capture_tracking_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "motion_capture_tracking_interfaces/msg/detail/target_position__struct.h"
#include "motion_capture_tracking_interfaces/msg/detail/target_position__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/point__functions.h"  // position

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_motion_capture_tracking_interfaces
bool cdr_serialize_geometry_msgs__msg__Point(
  const geometry_msgs__msg__Point * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_motion_capture_tracking_interfaces
bool cdr_deserialize_geometry_msgs__msg__Point(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Point * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_motion_capture_tracking_interfaces
size_t get_serialized_size_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_motion_capture_tracking_interfaces
size_t max_serialized_size_geometry_msgs__msg__Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_motion_capture_tracking_interfaces
bool cdr_serialize_key_geometry_msgs__msg__Point(
  const geometry_msgs__msg__Point * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_motion_capture_tracking_interfaces
size_t get_serialized_size_key_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_motion_capture_tracking_interfaces
size_t max_serialized_size_key_geometry_msgs__msg__Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_motion_capture_tracking_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point)();


using _TargetPosition__ros_msg_type = motion_capture_tracking_interfaces__msg__TargetPosition;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_motion_capture_tracking_interfaces
bool cdr_serialize_motion_capture_tracking_interfaces__msg__TargetPosition(
  const motion_capture_tracking_interfaces__msg__TargetPosition * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: target_id
  {
    cdr << ros_message->target_id;
  }

  // Field name: position
  {
    cdr_serialize_geometry_msgs__msg__Point(
      &ros_message->position, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_motion_capture_tracking_interfaces
bool cdr_deserialize_motion_capture_tracking_interfaces__msg__TargetPosition(
  eprosima::fastcdr::Cdr & cdr,
  motion_capture_tracking_interfaces__msg__TargetPosition * ros_message)
{
  // Field name: target_id
  {
    cdr >> ros_message->target_id;
  }

  // Field name: position
  {
    cdr_deserialize_geometry_msgs__msg__Point(cdr, &ros_message->position);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_motion_capture_tracking_interfaces
size_t get_serialized_size_motion_capture_tracking_interfaces__msg__TargetPosition(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TargetPosition__ros_msg_type * ros_message = static_cast<const _TargetPosition__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: target_id
  {
    size_t item_size = sizeof(ros_message->target_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: position
  current_alignment += get_serialized_size_geometry_msgs__msg__Point(
    &(ros_message->position), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_motion_capture_tracking_interfaces
size_t max_serialized_size_motion_capture_tracking_interfaces__msg__TargetPosition(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: target_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = motion_capture_tracking_interfaces__msg__TargetPosition;
    is_plain =
      (
      offsetof(DataType, position) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_motion_capture_tracking_interfaces
bool cdr_serialize_key_motion_capture_tracking_interfaces__msg__TargetPosition(
  const motion_capture_tracking_interfaces__msg__TargetPosition * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: target_id
  {
    cdr << ros_message->target_id;
  }

  // Field name: position
  {
    cdr_serialize_key_geometry_msgs__msg__Point(
      &ros_message->position, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_motion_capture_tracking_interfaces
size_t get_serialized_size_key_motion_capture_tracking_interfaces__msg__TargetPosition(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TargetPosition__ros_msg_type * ros_message = static_cast<const _TargetPosition__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: target_id
  {
    size_t item_size = sizeof(ros_message->target_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: position
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Point(
    &(ros_message->position), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_motion_capture_tracking_interfaces
size_t max_serialized_size_key_motion_capture_tracking_interfaces__msg__TargetPosition(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: target_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = motion_capture_tracking_interfaces__msg__TargetPosition;
    is_plain =
      (
      offsetof(DataType, position) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _TargetPosition__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const motion_capture_tracking_interfaces__msg__TargetPosition * ros_message = static_cast<const motion_capture_tracking_interfaces__msg__TargetPosition *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_motion_capture_tracking_interfaces__msg__TargetPosition(ros_message, cdr);
}

static bool _TargetPosition__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  motion_capture_tracking_interfaces__msg__TargetPosition * ros_message = static_cast<motion_capture_tracking_interfaces__msg__TargetPosition *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_motion_capture_tracking_interfaces__msg__TargetPosition(cdr, ros_message);
}

static uint32_t _TargetPosition__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_motion_capture_tracking_interfaces__msg__TargetPosition(
      untyped_ros_message, 0));
}

static size_t _TargetPosition__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_motion_capture_tracking_interfaces__msg__TargetPosition(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TargetPosition = {
  "motion_capture_tracking_interfaces::msg",
  "TargetPosition",
  _TargetPosition__cdr_serialize,
  _TargetPosition__cdr_deserialize,
  _TargetPosition__get_serialized_size,
  _TargetPosition__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _TargetPosition__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TargetPosition,
  get_message_typesupport_handle_function,
  &motion_capture_tracking_interfaces__msg__TargetPosition__get_type_hash,
  &motion_capture_tracking_interfaces__msg__TargetPosition__get_type_description,
  &motion_capture_tracking_interfaces__msg__TargetPosition__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, motion_capture_tracking_interfaces, msg, TargetPosition)() {
  return &_TargetPosition__type_support;
}

#if defined(__cplusplus)
}
#endif
