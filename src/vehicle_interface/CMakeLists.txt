cmake_minimum_required(VERSION 3.5)
project(vehicle_interface)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(geometry_msgs REQUIRED)

# **ヘッダーファイルの検索ディレクトリを明示的に指定**
include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# **ターゲットにヘッダーファイルの検索パスを追加**
add_executable(vehicle_interface_node 
    src/vehicle_interface_node.cpp 
    src/serial_communication.cpp
)

target_include_directories(vehicle_interface_node PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/include/vehicle_interface
)

ament_target_dependencies(vehicle_interface_node rclcpp geometry_msgs)

install(TARGETS vehicle_interface_node
  DESTINATION lib/${PROJECT_NAME})

ament_package()
