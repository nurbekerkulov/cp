cmake_minimum_required(VERSION 3.17)
project(cp)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "-DLOCAL")

add_executable(cp main.cpp)
