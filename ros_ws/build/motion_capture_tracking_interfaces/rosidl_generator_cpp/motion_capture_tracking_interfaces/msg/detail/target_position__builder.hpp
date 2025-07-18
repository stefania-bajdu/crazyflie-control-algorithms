// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from motion_capture_tracking_interfaces:msg/TargetPosition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motion_capture_tracking_interfaces/msg/target_position.hpp"


#ifndef MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__TARGET_POSITION__BUILDER_HPP_
#define MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__TARGET_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "motion_capture_tracking_interfaces/msg/detail/target_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace motion_capture_tracking_interfaces
{

namespace msg
{

namespace builder
{

class Init_TargetPosition_position
{
public:
  explicit Init_TargetPosition_position(::motion_capture_tracking_interfaces::msg::TargetPosition & msg)
  : msg_(msg)
  {}
  ::motion_capture_tracking_interfaces::msg::TargetPosition position(::motion_capture_tracking_interfaces::msg::TargetPosition::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motion_capture_tracking_interfaces::msg::TargetPosition msg_;
};

class Init_TargetPosition_target_id
{
public:
  Init_TargetPosition_target_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TargetPosition_position target_id(::motion_capture_tracking_interfaces::msg::TargetPosition::_target_id_type arg)
  {
    msg_.target_id = std::move(arg);
    return Init_TargetPosition_position(msg_);
  }

private:
  ::motion_capture_tracking_interfaces::msg::TargetPosition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::motion_capture_tracking_interfaces::msg::TargetPosition>()
{
  return motion_capture_tracking_interfaces::msg::builder::Init_TargetPosition_target_id();
}

}  // namespace motion_capture_tracking_interfaces

#endif  // MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__TARGET_POSITION__BUILDER_HPP_
