# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_jw_interface_serial_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED jw_interface_serial_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(jw_interface_serial_FOUND FALSE)
  elseif(NOT jw_interface_serial_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(jw_interface_serial_FOUND FALSE)
  endif()
  return()
endif()
set(_jw_interface_serial_CONFIG_INCLUDED TRUE)

# output package information
if(NOT jw_interface_serial_FIND_QUIETLY)
  message(STATUS "Found jw_interface_serial: 0.0.0 (${jw_interface_serial_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'jw_interface_serial' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${jw_interface_serial_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(jw_interface_serial_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake")
foreach(_extra ${_extras})
  include("${jw_interface_serial_DIR}/${_extra}")
endforeach()
