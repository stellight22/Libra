cmake_minimum_required(VERSION 3.23)
project(CPP_CLion)

set(CMAKE_CXX_STANDARD 11)

add_executable(CLion main.cpp)
add_executable(NoArray Module1/NoArray.cpp)