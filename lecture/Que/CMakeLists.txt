cmake_minimum_required(VERSION 2.8.11)
project(Que)
set(CMAKE_CXX_STANDARD 11)

include_directories(
    INCLUDE_DIRS include
)

add_executable(main
include/que_practice.cpp
src/main.cpp
)

add_executable(main_2
include/que_practice.cpp
src/main_2.cpp
)

add_executable(main_3
include/que_practice.cpp
src/main_3.cpp
)