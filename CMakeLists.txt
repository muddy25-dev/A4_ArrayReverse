cmake_minimum_required(VERSION 3.16)
project(A4_ArrayReverse)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Main program
add_executable(main main.cpp)

# Test program
add_executable(test_reverse test.cpp)