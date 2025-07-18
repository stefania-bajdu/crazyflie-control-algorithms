// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from motion_capture_tracking_interfaces:msg/TargetPosition.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "motion_capture_tracking_interfaces/msg/detail/target_position__functions.h"
#include "motion_capture_tracking_interfaces/msg/detail/target_position__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace motion_capture_tracking_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TargetPosition_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) motion_capture_tracking_interfaces::msg::TargetPosition(_init);
}

void TargetPosition_fini_function(void * message_memory)
{
  auto typed_message = static_cast<motion_capture_tracking_interfaces::msg::TargetPosition *>(message_memory);
  typed_message->~TargetPosition();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TargetPosition_message_member_array[2] = {
  {
    "target_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motion_capture_tracking_interfaces::msg::TargetPosition, target_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motion_capture_tracking_interfaces::msg::TargetPosition, position),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TargetPosition_message_members = {
  "motion_capture_tracking_interfaces::msg",  // message namespace
  "TargetPosition",  // message name
  2,  // number of fields
  sizeof(motion_capture_tracking_interfaces::msg::TargetPosition),
  false,  // has_any_key_member_
  TargetPosition_message_member_array,  // message members
  TargetPosition_init_function,  // function to initialize message memory (memory has to be allocated)
  TargetPosition_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TargetPosition_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TargetPosition_message_members,
  get_message_typesupport_handle_function,
  &motion_capture_tracking_interfaces__msg__TargetPosition__get_type_hash,
  &motion_capture_tracking_interfaces__msg__TargetPosition__get_type_description,
  &motion_capture_tracking_interfaces__msg__TargetPosition__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace motion_capture_tracking_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<motion_capture_tracking_interfaces::msg::TargetPosition>()
{
  return &::motion_capture_tracking_interfaces::msg::rosidl_typesupport_introspection_cpp::TargetPosition_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motion_capture_tracking_interfaces, msg, TargetPosition)() {
  return &::motion_capture_tracking_interfaces::msg::rosidl_typesupport_introspection_cpp::TargetPosition_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
