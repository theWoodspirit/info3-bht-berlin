cmake_minimum_required(VERSION 3.19)
project(ueb02)

set(CMAKE_CXX_STANDARD 20)

add_executable(ueb02 main.cpp caddress.cpp caddress.h clocation.cpp clocation.h cperson.cpp cperson.h cdate.cpp cdate.h CMedium.h CMedium.cpp)