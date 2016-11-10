cmake_minimum_required(VERSION 3.5)
set(CMAKE_CX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

project(src)

set(run_src_lists main.cpp)

add_executable(src ${run_src_lists})
