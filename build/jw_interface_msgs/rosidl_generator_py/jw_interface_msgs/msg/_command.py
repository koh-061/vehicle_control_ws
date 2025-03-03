# generated from rosidl_generator_py/resource/_idl.py.em
# with input from jw_interface_msgs:msg/Command.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Command(type):
    """Metaclass of message 'Command'."""

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
                'jw_interface_msgs.msg.Command')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__command

            from jw_interface_msgs.msg import JSADCommand
            if JSADCommand.__class__._TYPE_SUPPORT is None:
                JSADCommand.__class__.__import_type_support__()

            from jw_interface_msgs.msg import ModeCommand
            if ModeCommand.__class__._TYPE_SUPPORT is None:
                ModeCommand.__class__.__import_type_support__()

            from jw_interface_msgs.msg import MotorRPMCommand
            if MotorRPMCommand.__class__._TYPE_SUPPORT is None:
                MotorRPMCommand.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Command(metaclass=Metaclass_Command):
    """Message class 'Command'."""

    __slots__ = [
        '_mode',
        '_js_ad',
        '_motor_rpm',
    ]

    _fields_and_field_types = {
        'mode': 'jw_interface_msgs/ModeCommand',
        'js_ad': 'jw_interface_msgs/JSADCommand',
        'motor_rpm': 'jw_interface_msgs/MotorRPMCommand',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['jw_interface_msgs', 'msg'], 'ModeCommand'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['jw_interface_msgs', 'msg'], 'JSADCommand'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['jw_interface_msgs', 'msg'], 'MotorRPMCommand'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from jw_interface_msgs.msg import ModeCommand
        self.mode = kwargs.get('mode', ModeCommand())
        from jw_interface_msgs.msg import JSADCommand
        self.js_ad = kwargs.get('js_ad', JSADCommand())
        from jw_interface_msgs.msg import MotorRPMCommand
        self.motor_rpm = kwargs.get('motor_rpm', MotorRPMCommand())

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
        if self.mode != other.mode:
            return False
        if self.js_ad != other.js_ad:
            return False
        if self.motor_rpm != other.motor_rpm:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            from jw_interface_msgs.msg import ModeCommand
            assert \
                isinstance(value, ModeCommand), \
                "The 'mode' field must be a sub message of type 'ModeCommand'"
        self._mode = value

    @builtins.property
    def js_ad(self):
        """Message field 'js_ad'."""
        return self._js_ad

    @js_ad.setter
    def js_ad(self, value):
        if __debug__:
            from jw_interface_msgs.msg import JSADCommand
            assert \
                isinstance(value, JSADCommand), \
                "The 'js_ad' field must be a sub message of type 'JSADCommand'"
        self._js_ad = value

    @builtins.property
    def motor_rpm(self):
        """Message field 'motor_rpm'."""
        return self._motor_rpm

    @motor_rpm.setter
    def motor_rpm(self, value):
        if __debug__:
            from jw_interface_msgs.msg import MotorRPMCommand
            assert \
                isinstance(value, MotorRPMCommand), \
                "The 'motor_rpm' field must be a sub message of type 'MotorRPMCommand'"
        self._motor_rpm = value
