cmake_minimum_required(VERSION 2.8.11)
project(CLL_QUE)
set(CMAKE_CXX_STANDARD 11)

include_directories(
    INCLUDE_DIRS include
)

add_executable(main
include/clinked_list.cpp
include/cll_queue.cpp
src/main.cpp
)

target_link_libraries(main)

add_executable(test_cll
include/clinked_list.cpp
src/test_cll.cpp
)

target_link_libraries(test_cll)