cmake_minimum_required(VERSION 2.8.11)
project(Deque)
# set(CMAKE_CXX_STANDARD 11)

include_directories(
    INCLUDE_DIRS include
)

add_executable(dll_test
include/doubly_linked_list.cpp
src/dll_test.cpp)
target_link_libraries(dll_test)

add_executable(main
include/doubly_linked_list.cpp
include/deque_dll.cpp
src/main.cpp)
target_link_libraries(main)