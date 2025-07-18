// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from motion_capture_tracking_interfaces:msg/TargetPosition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motion_capture_tracking_interfaces/msg/target_position.hpp"


#ifndef MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__TARGET_POSITION__STRUCT_HPP_
#define MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__TARGET_POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__motion_capture_tracking_interfaces__msg__TargetPosition __attribute__((deprecated))
#else
# define DEPRECATED__motion_capture_tracking_interfaces__msg__TargetPosition __declspec(deprecated)
#endif

namespace motion_capture_tracking_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TargetPosition_
{
  using Type = TargetPosition_<ContainerAllocator>;

  explicit TargetPosition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_id = 0l;
    }
  }

  explicit TargetPosition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_id = 0l;
    }
  }

  // field types and members
  using _target_id_type =
    int32_t;
  _target_id_type target_id;
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;

  // setters for named parameter idiom
  Type & set__target_id(
    const int32_t & _arg)
  {
    this->target_id = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    motion_capture_tracking_interfaces::msg::TargetPosition_<ContainerAllocator> *;
  using ConstRawPtr =
    const motion_capture_tracking_interfaces::msg::TargetPosition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motion_capture_tracking_interfaces::msg::TargetPosition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motion_capture_tracking_interfaces::msg::TargetPosition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motion_capture_tracking_interfaces::msg::TargetPosition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motion_capture_tracking_interfaces::msg::TargetPosition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motion_capture_tracking_interfaces::msg::TargetPosition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motion_capture_tracking_interfaces::msg::TargetPosition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motion_capture_tracking_interfaces::msg::TargetPosition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motion_capture_tracking_interfaces::msg::TargetPosition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motion_capture_tracking_interfaces__msg__TargetPosition
    std::shared_ptr<motion_capture_tracking_interfaces::msg::TargetPosition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motion_capture_tracking_interfaces__msg__TargetPosition
    std::shared_ptr<motion_capture_tracking_interfaces::msg::TargetPosition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TargetPosition_ & other) const
  {
    if (this->target_id != other.target_id) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    return true;
  }
  bool operator!=(const TargetPosition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TargetPosition_

// alias to use template instance with default allocator
using TargetPosition =
  motion_capture_tracking_interfaces::msg::TargetPosition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace motion_capture_tracking_interfaces

#endif  // MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__TARGET_POSITION__STRUCT_HPP_
