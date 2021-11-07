cmake_minimum_required(VERSION 3.20)
project(info3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(info3 main.cpp
        caddress.cpp caddress.h
        cdate.cpp cdate.h
        clocation.cpp clocation.h
        cperson.cpp cperson.h
        cmedium.cpp cmedium.h
        clibrary.cpp clibrary.h
        clibrarypool.cpp clibrarypool.h)
