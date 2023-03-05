cmake_minimum_required(VERSION 3.22)

project(SOLDIER_FIRE)

# 不改变原来c++编译选项的基础上增加其他编译选项
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

set(CMAKE_BUILD_TYPE Debug)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(4.22 4.22.cpp )