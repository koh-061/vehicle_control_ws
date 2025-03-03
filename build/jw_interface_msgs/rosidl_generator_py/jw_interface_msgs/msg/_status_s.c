// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from jw_interface_msgs:msg/Status.idl
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
#include "jw_interface_msgs/msg/detail/status__struct.h"
#include "jw_interface_msgs/msg/detail/status__functions.h"

bool jw_interface_msgs__msg__time_stamp_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * jw_interface_msgs__msg__time_stamp_status__convert_to_py(void * raw_ros_message);
bool jw_interface_msgs__msg__motor_rpm_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * jw_interface_msgs__msg__motor_rpm_status__convert_to_py(void * raw_ros_message);
bool jw_interface_msgs__msg__battery_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * jw_interface_msgs__msg__battery_status__convert_to_py(void * raw_ros_message);
bool jw_interface_msgs__msg__speed_setting_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * jw_interface_msgs__msg__speed_setting_status__convert_to_py(void * raw_ros_message);
bool jw_interface_msgs__msg__jsad_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * jw_interface_msgs__msg__jsad_status__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool jw_interface_msgs__msg__status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[37];
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
    assert(strncmp("jw_interface_msgs.msg._status.Status", full_classname_dest, 36) == 0);
  }
  jw_interface_msgs__msg__Status * ros_message = _ros_message;
  {  // time_stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_stamp");
    if (!field) {
      return false;
    }
    if (!jw_interface_msgs__msg__time_stamp_status__convert_from_py(field, &ros_message->time_stamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // motor_rpm
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_rpm");
    if (!field) {
      return false;
    }
    if (!jw_interface_msgs__msg__motor_rpm_status__convert_from_py(field, &ros_message->motor_rpm)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // battery
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery");
    if (!field) {
      return false;
    }
    if (!jw_interface_msgs__msg__battery_status__convert_from_py(field, &ros_message->battery)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // speed_setting
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_setting");
    if (!field) {
      return false;
    }
    if (!jw_interface_msgs__msg__speed_setting_status__convert_from_py(field, &ros_message->speed_setting)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // js_ad
    PyObject * field = PyObject_GetAttrString(_pymsg, "js_ad");
    if (!field) {
      return false;
    }
    if (!jw_interface_msgs__msg__jsad_status__convert_from_py(field, &ros_message->js_ad)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * jw_interface_msgs__msg__status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Status */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("jw_interface_msgs.msg._status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Status");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  jw_interface_msgs__msg__Status * ros_message = (jw_interface_msgs__msg__Status *)raw_ros_message;
  {  // time_stamp
    PyObject * field = NULL;
    field = jw_interface_msgs__msg__time_stamp_status__convert_to_py(&ros_message->time_stamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor_rpm
    PyObject * field = NULL;
    field = jw_interface_msgs__msg__motor_rpm_status__convert_to_py(&ros_message->motor_rpm);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_rpm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery
    PyObject * field = NULL;
    field = jw_interface_msgs__msg__battery_status__convert_to_py(&ros_message->battery);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_setting
    PyObject * field = NULL;
    field = jw_interface_msgs__msg__speed_setting_status__convert_to_py(&ros_message->speed_setting);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_setting", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // js_ad
    PyObject * field = NULL;
    field = jw_interface_msgs__msg__jsad_status__convert_to_py(&ros_message->js_ad);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "js_ad", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
