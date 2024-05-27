cmake_minimum_required(VERSION 2.8.11)
project(Inheritance)

include_directories(
    INCLUDE_DIRS include
)

add_executable(main 
src/main.cpp 
include/progression_class.cpp
include/arithprogression_class.cpp
include/geometricprogression_class.cpp
include/fibonacciprogression_class.cpp)
target_link_libraries(main)
