cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

project(Command_Pattern_Test)
enable_testing()

set(gtest_include ${CMAKE_SOURCE_DIR}/lib/googletest/include)
set(test_src_dir ${CMAKE_SOURCE_DIR}/src/Command_Pattern)

include_directories(${gtest_include})
include_directories(${test_src_dir})

set(Command_Pattern_Lists Command_Pattern_Test.cpp ${test_src_dir}/Command_Pattern.cpp)

add_executable(Command_Pattern_Test ${Command_Pattern_Lists})

target_link_libraries(Command_Pattern_Test gtest gtest_main)

