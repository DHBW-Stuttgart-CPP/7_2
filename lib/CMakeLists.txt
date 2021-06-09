# 'Google_test' is the subproject name
project(7_2)

# 'lib' is the folder with Google Test sources
add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# 'Google_Tests_run' is the target name
add_executable(Google_Tests_run Tests/SortingTest.cpp)
target_link_libraries(Google_Tests_run gtest gtest_main)