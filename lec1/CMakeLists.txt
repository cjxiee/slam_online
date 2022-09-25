cmake_minimum_required(VERSION 3.10)

project(CMake_tutorial)


add_executable(helloslam main.cpp)

add_executable(useHello useHello.cpp)

add_library(hello hello.cpp)

target_link_libraries(useHello hello)

