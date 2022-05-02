cmake_minimum_required(VERSION 3.22)
project(SysExecute)

set(CMAKE_CXX_STANDARD 14)

add_executable(SysExecute main.cpp fork_call.h system_call.h)
