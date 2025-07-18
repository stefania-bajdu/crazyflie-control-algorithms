// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from motion_capture_tracking_interfaces:msg/TargetPositionArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motion_capture_tracking_interfaces/msg/target_position_array.hpp"


#ifndef MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__TARGET_POSITION_ARRAY__BUILDER_HPP_
#define MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__TARGET_POSITION_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "motion_capture_tracking_interfaces/msg/detail/target_position_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace motion_capture_tracking_interfaces
{

namespace msg
{

namespace builder
{

class Init_TargetPositionArray_targets
{
public:
  Init_TargetPositionArray_targets()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::motion_capture_tracking_interfaces::msg::TargetPositionArray targets(::motion_capture_tracking_interfaces::msg::TargetPositionArray::_targets_type arg)
  {
    msg_.targets = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motion_capture_tracking_interfaces::msg::TargetPositionArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::motion_capture_tracking_interfaces::msg::TargetPositionArray>()
{
  return motion_capture_tracking_interfaces::msg::builder::Init_TargetPositionArray_targets();
}

}  // namespace motion_capture_tracking_interfaces

#endif  // MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__TARGET_POSITION_ARRAY__BUILDER_HPP_
