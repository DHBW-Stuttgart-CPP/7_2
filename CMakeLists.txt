cmake_minimum_required(VERSION 3.15)
project(7_2)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(lib/)

add_executable(7_2 main.cpp Sorting.cpp Sorting.h)