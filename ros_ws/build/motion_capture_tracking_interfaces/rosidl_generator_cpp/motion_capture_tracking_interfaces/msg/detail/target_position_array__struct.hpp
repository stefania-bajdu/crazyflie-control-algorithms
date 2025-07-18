// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from motion_capture_tracking_interfaces:msg/TargetPositionArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motion_capture_tracking_interfaces/msg/target_position_array.hpp"


#ifndef MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__TARGET_POSITION_ARRAY__STRUCT_HPP_
#define MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__TARGET_POSITION_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'targets'
#include "motion_capture_tracking_interfaces/msg/detail/target_position__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__motion_capture_tracking_interfaces__msg__TargetPositionArray __attribute__((deprecated))
#else
# define DEPRECATED__motion_capture_tracking_interfaces__msg__TargetPositionArray __declspec(deprecated)
#endif

namespace motion_capture_tracking_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TargetPositionArray_
{
  using Type = TargetPositionArray_<ContainerAllocator>;

  explicit TargetPositionArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit TargetPositionArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _targets_type =
    std::vector<motion_capture_tracking_interfaces::msg::TargetPosition_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<motion_capture_tracking_interfaces::msg::TargetPosition_<ContainerAllocator>>>;
  _targets_type targets;

  // setters for named parameter idiom
  Type & set__targets(
    const std::vector<motion_capture_tracking_interfaces::msg::TargetPosition_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<motion_capture_tracking_interfaces::msg::TargetPosition_<ContainerAllocator>>> & _arg)
  {
    this->targets = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    motion_capture_tracking_interfaces::msg::TargetPositionArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const motion_capture_tracking_interfaces::msg::TargetPositionArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motion_capture_tracking_interfaces::msg::TargetPositionArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motion_capture_tracking_interfaces::msg::TargetPositionArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motion_capture_tracking_interfaces::msg::TargetPositionArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motion_capture_tracking_interfaces::msg::TargetPositionArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motion_capture_tracking_interfaces::msg::TargetPositionArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motion_capture_tracking_interfaces::msg::TargetPositionArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motion_capture_tracking_interfaces::msg::TargetPositionArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motion_capture_tracking_interfaces::msg::TargetPositionArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motion_capture_tracking_interfaces__msg__TargetPositionArray
    std::shared_ptr<motion_capture_tracking_interfaces::msg::TargetPositionArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motion_capture_tracking_interfaces__msg__TargetPositionArray
    std::shared_ptr<motion_capture_tracking_interfaces::msg::TargetPositionArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TargetPositionArray_ & other) const
  {
    if (this->targets != other.targets) {
      return false;
    }
    return true;
  }
  bool operator!=(const TargetPositionArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TargetPositionArray_

// alias to use template instance with default allocator
using TargetPositionArray =
  motion_capture_tracking_interfaces::msg::TargetPositionArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace motion_capture_tracking_interfaces

#endif  // MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__TARGET_POSITION_ARRAY__STRUCT_HPP_
