cmake_minimum_required(VERSION 2.8.4)
project(FirstApp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
set(SOURCE_FILES working.c)
set(SOURCE_FILES working.cpp)
add_executable(FirstApp ${SOURCE_FILES})