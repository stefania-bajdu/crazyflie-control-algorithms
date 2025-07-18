// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from motion_capture_tracking_interfaces:msg/TargetPosition.idl
// generated code does not contain a copyright notice

#include "motion_capture_tracking_interfaces/msg/detail/target_position__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_motion_capture_tracking_interfaces
const rosidl_type_hash_t *
motion_capture_tracking_interfaces__msg__TargetPosition__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3a, 0x06, 0xf6, 0x64, 0x6d, 0x99, 0x78, 0xa9,
      0x05, 0x02, 0x32, 0x62, 0xbe, 0x77, 0x30, 0xba,
      0xcd, 0x8e, 0x36, 0xc8, 0x19, 0x77, 0x46, 0x9b,
      0x0a, 0x0d, 0x4a, 0x4a, 0xa0, 0xc4, 0x40, 0x90,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/point__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
#endif

static char motion_capture_tracking_interfaces__msg__TargetPosition__TYPE_NAME[] = "motion_capture_tracking_interfaces/msg/TargetPosition";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";

// Define type names, field names, and default values
static char motion_capture_tracking_interfaces__msg__TargetPosition__FIELD_NAME__target_id[] = "target_id";
static char motion_capture_tracking_interfaces__msg__TargetPosition__FIELD_NAME__position[] = "position";

static rosidl_runtime_c__type_description__Field motion_capture_tracking_interfaces__msg__TargetPosition__FIELDS[] = {
  {
    {motion_capture_tracking_interfaces__msg__TargetPosition__FIELD_NAME__target_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {motion_capture_tracking_interfaces__msg__TargetPosition__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription motion_capture_tracking_interfaces__msg__TargetPosition__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
motion_capture_tracking_interfaces__msg__TargetPosition__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {motion_capture_tracking_interfaces__msg__TargetPosition__TYPE_NAME, 53, 53},
      {motion_capture_tracking_interfaces__msg__TargetPosition__FIELDS, 2, 2},
    },
    {motion_capture_tracking_interfaces__msg__TargetPosition__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 target_id\n"
  "geometry_msgs/Point position";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
motion_capture_tracking_interfaces__msg__TargetPosition__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {motion_capture_tracking_interfaces__msg__TargetPosition__TYPE_NAME, 53, 53},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 44, 44},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
motion_capture_tracking_interfaces__msg__TargetPosition__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *motion_capture_tracking_interfaces__msg__TargetPosition__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
