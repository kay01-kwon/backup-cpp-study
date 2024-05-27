cmake_minimum_required(VERSION 2.8.11)
project(HT)
set(CMAKE_CXX_STANDARD 11)

include_directories(
    INCLUDE_DIRS include
)

add_executable(main_1
include/HT.cpp
src/main_1.cpp
)
target_link_libraries(main_1)

add_executable(main_2
include/HT.cpp
src/main_2.cpp
)
target_link_libraries(main_2)

add_executable(main_3
include/HT.cpp
src/main_3.cpp
)
target_link_libraries(main_3)

add_executable(main_4
include/HT.cpp
src/main_4.cpp
)
target_link_libraries(main_4)