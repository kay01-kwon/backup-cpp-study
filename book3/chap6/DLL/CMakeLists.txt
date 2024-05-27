cmake_minimum_required(VERSION 2.8.11)
project(DoublyLinkedList)
# set(CMAKE_CXX_STANDARD 11)

include_directories(
    INCLUDE_DIRS include
)

add_executable(main
include/node_list.cpp
src/main.cpp)
target_link_libraries(main)