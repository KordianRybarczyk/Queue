cmake_minimum_required(VERSION 3.28)
project(Queue123)

set(CMAKE_CXX_STANDARD 17)

add_executable(Queue123 main.cpp
        queue.cpp
        Queue.h)
