<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
# Install script for directory: C:/Users/Jakob/OneDrive - beuthhs/Dokumente/Beuth Hochschule/3. Semester/Informatik 3/Uebung/Uebung 5/ueb05_clion
=======
# Install script for directory: C:/UserData/z00430rr/Documents/GitHub/info3
>>>>>>> parent of 93e58ea (ausleihen fast fertig)
=======
# Install script for directory: C:/Users/Jakob/OneDrive - beuthhs/Dokumente/Beuth Hochschule/3. Semester/Informatik 3/info3
>>>>>>> parent of 8bc1cc9 (Übung 5)
=======
# Install script for directory: C:/UserData/z00430rr/Documents/GitHub/info3
>>>>>>> parent of 93e58ea (ausleihen fast fertig)
=======
# Install script for directory: C:/UserData/z00430rr/Documents/GitHub/info3
>>>>>>> parent of 899812a (asd)

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/info3")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
file(WRITE "C:/Users/Jakob/OneDrive - beuthhs/Dokumente/Beuth Hochschule/3. Semester/Informatik 3/Uebung/Uebung 5/ueb05_clion/cmake-build-debug/${CMAKE_INSTALL_MANIFEST}"
=======
file(WRITE "C:/UserData/z00430rr/Documents/GitHub/info3/cmake-build-debug/${CMAKE_INSTALL_MANIFEST}"
>>>>>>> parent of 93e58ea (ausleihen fast fertig)
=======
file(WRITE "C:/Users/Jakob/OneDrive - beuthhs/Dokumente/Beuth Hochschule/3. Semester/Informatik 3/info3/cmake-build-debug/${CMAKE_INSTALL_MANIFEST}"
>>>>>>> parent of 8bc1cc9 (Übung 5)
=======
file(WRITE "C:/UserData/z00430rr/Documents/GitHub/info3/cmake-build-debug/${CMAKE_INSTALL_MANIFEST}"
>>>>>>> parent of 93e58ea (ausleihen fast fertig)
=======
file(WRITE "C:/UserData/z00430rr/Documents/GitHub/info3/cmake-build-debug/${CMAKE_INSTALL_MANIFEST}"
>>>>>>> parent of 899812a (asd)
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
