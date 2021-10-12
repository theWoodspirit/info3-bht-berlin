cmake_minimum_required(VERSION 3.19)
project(info3)

set(CMAKE_CXX_STANDARD 14)

add_executable(info3 main.cpp cdate.h ctime.h cdate.cpp ctime.cpp)