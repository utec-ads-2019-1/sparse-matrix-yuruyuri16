cmake_minimum_required(VERSION 3.14)
project(sparse-matrix)

set(CMAKE_CXX_STANDARD 17)

add_executable(sparse-matrix main.cpp node.h matrix.h element_node.h detail_node.h header_node.h)
