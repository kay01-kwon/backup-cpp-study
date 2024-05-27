cmake_minimum_required(VERSION 2.8.11)
project(DynamicMatrix)

add_executable(main
src/dynamic_matrix.cpp)
target_link_libraries(main)

add_executable(main2
src/vector_matrix.cpp)
target_link_libraries(main2)
