cmake_minimum_required(VERSION 2.8.11)
project(Stack)
set(CMAKE_CXX_STANDARD 11)

include_directories(
    INCLUDE_DIRS include
)

add_executable(main
include/stack_practice.cpp
src/main.cpp
)

target_link_libraries(main)

add_executable(main_2
include/stack_practice.cpp
src/main_2.cpp
)

target_link_libraries(main_2)

add_executable(main_3
include/stack_practice.cpp
src/main_3.cpp
)

target_link_libraries(main_3)