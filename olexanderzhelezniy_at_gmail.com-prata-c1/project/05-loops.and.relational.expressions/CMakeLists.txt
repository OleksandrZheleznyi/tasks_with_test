# CMake build script.
cmake_minimum_required(VERSION 2.8)

project(example)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -std=c++11 -Wall -Wextra -pthread")

#add_subdirectory(lib/googletest/googletest)

enable_testing()

set(GTEST_DIR /lib/googletest/googletest)

include_directories(${GTEST_DIR})

#add_library(gtest_lib STATIC lib/googletest/googletest/include/gtest/*.h
# 							lib/googletest/googletest/include/gtest/internal/*.h)

add_executable(main src/main.cpp src/foo.cpp)

target_link_libraries(main gtest)

add_test(tests tests_run)

