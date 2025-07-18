// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from motion_capture_tracking_interfaces:msg/TargetPosition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motion_capture_tracking_interfaces/msg/target_position.hpp"


#ifndef MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__TARGET_POSITION__TRAITS_HPP_
#define MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__TARGET_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "motion_capture_tracking_interfaces/msg/detail/target_position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace motion_capture_tracking_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const TargetPosition & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_id
  {
    out << "target_id: ";
    rosidl_generator_traits::value_to_yaml(msg.target_id, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TargetPosition & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_id: ";
    rosidl_generator_traits::value_to_yaml(msg.target_id, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TargetPosition & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace motion_capture_tracking_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use motion_capture_tracking_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const motion_capture_tracking_interfaces::msg::TargetPosition & msg,
  std::ostream & out, size_t indentation = 0)
{
  motion_capture_tracking_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use motion_capture_tracking_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const motion_capture_tracking_interfaces::msg::TargetPosition & msg)
{
  return motion_capture_tracking_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<motion_capture_tracking_interfaces::msg::TargetPosition>()
{
  return "motion_capture_tracking_interfaces::msg::TargetPosition";
}

template<>
inline const char * name<motion_capture_tracking_interfaces::msg::TargetPosition>()
{
  return "motion_capture_tracking_interfaces/msg/TargetPosition";
}

template<>
struct has_fixed_size<motion_capture_tracking_interfaces::msg::TargetPosition>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<motion_capture_tracking_interfaces::msg::TargetPosition>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<motion_capture_tracking_interfaces::msg::TargetPosition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__TARGET_POSITION__TRAITS_HPP_
