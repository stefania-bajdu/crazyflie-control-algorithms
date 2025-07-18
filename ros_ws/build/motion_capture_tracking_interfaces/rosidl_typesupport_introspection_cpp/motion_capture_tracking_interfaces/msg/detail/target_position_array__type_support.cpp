// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from motion_capture_tracking_interfaces:msg/TargetPositionArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "motion_capture_tracking_interfaces/msg/detail/target_position_array__functions.h"
#include "motion_capture_tracking_interfaces/msg/detail/target_position_array__struct.hpp"
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

void TargetPositionArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) motion_capture_tracking_interfaces::msg::TargetPositionArray(_init);
}

void TargetPositionArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<motion_capture_tracking_interfaces::msg::TargetPositionArray *>(message_memory);
  typed_message->~TargetPositionArray();
}

size_t size_function__TargetPositionArray__targets(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<motion_capture_tracking_interfaces::msg::TargetPosition> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TargetPositionArray__targets(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<motion_capture_tracking_interfaces::msg::TargetPosition> *>(untyped_member);
  return &member[index];
}

void * get_function__TargetPositionArray__targets(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<motion_capture_tracking_interfaces::msg::TargetPosition> *>(untyped_member);
  return &member[index];
}

void fetch_function__TargetPositionArray__targets(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const motion_capture_tracking_interfaces::msg::TargetPosition *>(
    get_const_function__TargetPositionArray__targets(untyped_member, index));
  auto & value = *reinterpret_cast<motion_capture_tracking_interfaces::msg::TargetPosition *>(untyped_value);
  value = item;
}

void assign_function__TargetPositionArray__targets(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<motion_capture_tracking_interfaces::msg::TargetPosition *>(
    get_function__TargetPositionArray__targets(untyped_member, index));
  const auto & value = *reinterpret_cast<const motion_capture_tracking_interfaces::msg::TargetPosition *>(untyped_value);
  item = value;
}

void resize_function__TargetPositionArray__targets(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<motion_capture_tracking_interfaces::msg::TargetPosition> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TargetPositionArray_message_member_array[1] = {
  {
    "targets",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<motion_capture_tracking_interfaces::msg::TargetPosition>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motion_capture_tracking_interfaces::msg::TargetPositionArray, targets),  // bytes offset in struct
    nullptr,  // default value
    size_function__TargetPositionArray__targets,  // size() function pointer
    get_const_function__TargetPositionArray__targets,  // get_const(index) function pointer
    get_function__TargetPositionArray__targets,  // get(index) function pointer
    fetch_function__TargetPositionArray__targets,  // fetch(index, &value) function pointer
    assign_function__TargetPositionArray__targets,  // assign(index, value) function pointer
    resize_function__TargetPositionArray__targets  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TargetPositionArray_message_members = {
  "motion_capture_tracking_interfaces::msg",  // message namespace
  "TargetPositionArray",  // message name
  1,  // number of fields
  sizeof(motion_capture_tracking_interfaces::msg::TargetPositionArray),
  false,  // has_any_key_member_
  TargetPositionArray_message_member_array,  // message members
  TargetPositionArray_init_function,  // function to initialize message memory (memory has to be allocated)
  TargetPositionArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TargetPositionArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TargetPositionArray_message_members,
  get_message_typesupport_handle_function,
  &motion_capture_tracking_interfaces__msg__TargetPositionArray__get_type_hash,
  &motion_capture_tracking_interfaces__msg__TargetPositionArray__get_type_description,
  &motion_capture_tracking_interfaces__msg__TargetPositionArray__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace motion_capture_tracking_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<motion_capture_tracking_interfaces::msg::TargetPositionArray>()
{
  return &::motion_capture_tracking_interfaces::msg::rosidl_typesupport_introspection_cpp::TargetPositionArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motion_capture_tracking_interfaces, msg, TargetPositionArray)() {
  return &::motion_capture_tracking_interfaces::msg::rosidl_typesupport_introspection_cpp::TargetPositionArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
