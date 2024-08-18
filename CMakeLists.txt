cmake_minimum_required(VERSION 3.28)

project(client_dbus_signal)

find_package(fmt)
set(CMAKE_CXX_STANDARD 17)

add_executable(client_dbus_signal
        main.cpp)
target_link_libraries(${PROJECT_NAME} fmt::fmt sdbusc++)