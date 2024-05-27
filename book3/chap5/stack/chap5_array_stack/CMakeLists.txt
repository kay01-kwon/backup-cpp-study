cmake_minimum_required(VERSION 2.8.11)
project(Array_Stack_test)
# set(CMAKE_CXX_STANDARD 11)

include_directories(
    INCLUDE_DIRS include
)

add_executable(main
include/stack_class.cpp
include/runtime_exception.cpp
src/main.cpp)

target_link_libraries(main)


add_executable(main2
include/stack_class.cpp
include/runtime_exception.cpp
src/main2.cpp)

target_link_libraries(main2)