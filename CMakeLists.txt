cmake_minimum_required(VERSION 3.20)
project(info3)

set(CMAKE_CXX_STANDARD 98)

add_executable(ueb03 main.cpp
        helperClasses/caddress.cpp helperClasses/caddress.h
        helperClasses/cdate.cpp helperClasses/cdate.h
        library/clibrary.cpp library/clibrary.h
        library/clibrarypool.cpp library/clibrarypool.h
        helperClasses/clocation.cpp helperClasses/clocation.h
        cMedium/cmedium.cpp cMedium/cmedium.h
        cPerson/cperson.cpp cPerson/cperson.h helperClasses/factory.h helperClasses/factory.cpp cPerson/CCustomer.cpp cPerson/CCustomer.h cPerson/CEmployee.h cPerson/CEmployee.cpp cMedium/CCD.h cMedium/CCD.cpp cMedium/CPrintedMedium/CPrintedMedium.h cMedium/CPrintedMedium/CPrintedMedium.cpp "cMedium/CDVD.h" "cMedium/CDVD.cpp" cMedium/CPrintedMedium/CMagazine.h cMedium/CPrintedMedium/CMagazine.cpp cMedium/CPrintedMedium/CBook.cpp cMedium/CPrintedMedium/CBook.h cMedium/CCD.cpp cMedium/CCD.h cMedium/CAudiobook.h cMedium/CAudiobook.cpp library/CLoan.h library/CLoan.cpp)
