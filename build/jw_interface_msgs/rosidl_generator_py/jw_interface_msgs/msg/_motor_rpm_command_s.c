// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from jw_interface_msgs:msg/MotorRPMCommand.idl
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
#include "jw_interface_msgs/msg/detail/motor_rpm_command__struct.h"
#include "jw_interface_msgs/msg/detail/motor_rpm_command__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool jw_interface_msgs__msg__motor_rpm_command__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[57];
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
    assert(strncmp("jw_interface_msgs.msg._motor_rpm_command.MotorRPMCommand", full_classname_dest, 56) == 0);
  }
  jw_interface_msgs__msg__MotorRPMCommand * ros_message = _ros_message;
  {  // left_rpm
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_rpm");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_rpm = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_rpm
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_rpm");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_rpm = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * jw_interface_msgs__msg__motor_rpm_command__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MotorRPMCommand */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("jw_interface_msgs.msg._motor_rpm_command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MotorRPMCommand");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  jw_interface_msgs__msg__MotorRPMCommand * ros_message = (jw_interface_msgs__msg__MotorRPMCommand *)raw_ros_message;
  {  // left_rpm
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_rpm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_rpm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_rpm
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_rpm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_rpm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
