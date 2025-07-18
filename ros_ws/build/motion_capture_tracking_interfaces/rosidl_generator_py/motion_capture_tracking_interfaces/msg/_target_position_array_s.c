// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from motion_capture_tracking_interfaces:msg/TargetPositionArray.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "motion_capture_tracking_interfaces/msg/detail/target_position_array__struct.h"
#include "motion_capture_tracking_interfaces/msg/detail/target_position_array__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "motion_capture_tracking_interfaces/msg/detail/target_position__functions.h"
// end nested array functions include
bool motion_capture_tracking_interfaces__msg__target_position__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * motion_capture_tracking_interfaces__msg__target_position__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool motion_capture_tracking_interfaces__msg__target_position_array__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[82];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("motion_capture_tracking_interfaces.msg._target_position_array.TargetPositionArray", full_classname_dest, 81) == 0);
  }
  motion_capture_tracking_interfaces__msg__TargetPositionArray * ros_message = _ros_message;
  {  // targets
    PyObject * field = PyObject_GetAttrString(_pymsg, "targets");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'targets'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!motion_capture_tracking_interfaces__msg__TargetPosition__Sequence__init(&(ros_message->targets), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create motion_capture_tracking_interfaces__msg__TargetPosition__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    motion_capture_tracking_interfaces__msg__TargetPosition * dest = ros_message->targets.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!motion_capture_tracking_interfaces__msg__target_position__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * motion_capture_tracking_interfaces__msg__target_position_array__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TargetPositionArray */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("motion_capture_tracking_interfaces.msg._target_position_array");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TargetPositionArray");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  motion_capture_tracking_interfaces__msg__TargetPositionArray * ros_message = (motion_capture_tracking_interfaces__msg__TargetPositionArray *)raw_ros_message;
  {  // targets
    PyObject * field = NULL;
    size_t size = ros_message->targets.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    motion_capture_tracking_interfaces__msg__TargetPosition * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->targets.data[i]);
      PyObject * pyitem = motion_capture_tracking_interfaces__msg__target_position__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "targets", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
