cmake_minimum_required(VERSION 3.21)
project(FileReadWrite)

set(CMAKE_CXX_STANDARD 14)

add_executable(FileReadWrite main.cpp write_file.cpp write_file.h read_file.cpp read_file.h)
