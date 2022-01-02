cmake_minimum_required(VERSION 3.20)
project(ueb05_clion)

set(CMAKE_CXX_STANDARD 98)

add_executable(ueb05_clion main.cpp
        cMedium/CPrintedMedium/CBook.cpp cMedium/CPrintedMedium/CBook.h
        cMedium/CPrintedMedium/CMagazine.h cMedium/CPrintedMedium/CMagazine.cpp
        cMedium/CPrintedMedium/CPrintedMedium.h cMedium/CPrintedMedium/CPrintedMedium.cpp

        cMedium/CAudiobook.h cMedium/CAudiobook.cpp
        cMedium/CCD.h cMedium/CCD.cpp
        cMedium/CDVD.h cMedium/CDVD.cpp
        cMedium/cmedium.cpp cMedium/cmedium.h

        cPerson/CCustomer.cpp cPerson/CCustomer.h
        cPerson/CEmployee.h cPerson/CEmployee.cpp
        cPerson/cperson.cpp cPerson/cperson.h

        helperClasses/caddress.cpp helperClasses/caddress.h
        helperClasses/cdate.cpp helperClasses/cdate.h
        helperClasses/clocation.cpp helperClasses/clocation.h
        helperClasses/factory.h helperClasses/factory.cpp

        library/clibrary.cpp library/clibrary.h
        library/clibrarypool.cpp library/clibrarypool.h)
