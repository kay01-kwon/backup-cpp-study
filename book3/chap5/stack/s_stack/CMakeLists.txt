cmake_minimum_required(VERSION 2.8.11)
project(S_Stack)
set(CMAKE_CXX_STANDARD 11)

include_directories(
    INCLUDE_DIRS include
)

add_executable(test_sll
include/s_linked_list.cpp
src/test_sll.cpp)
target_link_libraries(test_sll)

add_executable(main
include/s_linked_list.cpp
include/s_stack.cpp
src/main.cpp)
target_link_libraries(main)