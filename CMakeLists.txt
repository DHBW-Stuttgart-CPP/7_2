cmake_minimum_required(VERSION 3.17)
project(7_2)

set(CMAKE_CXX_STANDARD 14)

#add_subdirectory(lib)
add_subdirectory(lib/googletest-master/googletest-master)
#include_directories(lib/googletest-master/googletest-master/googletest/include)
#include_directories(lib/googletest-master/googletest-master/googlemock/include)

add_executable(7_2 main.cpp Sorting.cpp Sorting.h lib/Tests/SortingTest.cpp lib/Tests/BasicTest.cpp)
target_link_libraries(7_2 gtest gtest_main)