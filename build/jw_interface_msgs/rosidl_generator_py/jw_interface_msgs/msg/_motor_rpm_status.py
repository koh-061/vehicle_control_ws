# generated from rosidl_generator_py/resource/_idl.py.em
# with input from jw_interface_msgs:msg/MotorRPMStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorRPMStatus(type):
    """Metaclass of message 'MotorRPMStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('jw_interface_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'jw_interface_msgs.msg.MotorRPMStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motor_rpm_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motor_rpm_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motor_rpm_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motor_rpm_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motor_rpm_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorRPMStatus(metaclass=Metaclass_MotorRPMStatus):
    """Message class 'MotorRPMStatus'."""

    __slots__ = [
        '_left_rpm',
        '_right_rpm',
    ]

    _fields_and_field_types = {
        'left_rpm': 'float',
        'right_rpm': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.left_rpm = kwargs.get('left_rpm', float())
        self.right_rpm = kwargs.get('right_rpm', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.left_rpm != other.left_rpm:
            return False
        if self.right_rpm != other.right_rpm:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def left_rpm(self):
        """Message field 'left_rpm'."""
        return self._left_rpm

    @left_rpm.setter
    def left_rpm(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_rpm' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'left_rpm' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._left_rpm = value

    @builtins.property
    def right_rpm(self):
        """Message field 'right_rpm'."""
        return self._right_rpm

    @right_rpm.setter
    def right_rpm(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_rpm' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'right_rpm' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._right_rpm = value
