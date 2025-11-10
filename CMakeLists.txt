cmake_minimum_required(VERSION 4.0)
project(AlgoLab)

set(CMAKE_CXX_STANDARD 20)

add_executable(AlgoLab
        stack.cpp
        queue.cpp)

add_executable(queue queue.cpp)
add_executable(stack stack.cpp)
add_executable(test test.cpp)