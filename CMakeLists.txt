cmake_minimum_required(VERSION 3.20)
project(info3)

set(CMAKE_CXX_STANDARD 98)

add_executable(ueb03 main.cpp
        caddress.cpp caddress.h
        cdate.cpp cdate.h
        clibrary.cpp clibrary.h
        clibrarypool.cpp clibrarypool.h
        clocation.cpp clocation.h
        cmedium.cpp cmedium.h
        cperson.cpp cperson.h factory.h factory.cpp)
