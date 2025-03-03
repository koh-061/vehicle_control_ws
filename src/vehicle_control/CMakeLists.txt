cmake_minimum_required(VERSION 3.5)
project(vehicle_control)

find_package(ament_cmake REQUIRED)
find_package(ament_python REQUIRED)

install(
    DIRECTORY vehicle_control
    DESTINATION lib/${PROJECT_NAME}
)

ament_package()
