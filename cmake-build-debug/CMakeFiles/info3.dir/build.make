# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion 2021.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2021.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Uni\3.Semester\inf3Github\info3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Uni\3.Semester\inf3Github\info3\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/info3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/info3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/info3.dir/flags.make

CMakeFiles/info3.dir/main.cpp.obj: CMakeFiles/info3.dir/flags.make
CMakeFiles/info3.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Uni\3.Semester\inf3Github\info3\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/info3.dir/main.cpp.obj"
	C:\mingw\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\info3.dir\main.cpp.obj -c D:\Uni\3.Semester\inf3Github\info3\main.cpp

CMakeFiles/info3.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/info3.dir/main.cpp.i"
	C:\mingw\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Uni\3.Semester\inf3Github\info3\main.cpp > CMakeFiles\info3.dir\main.cpp.i

CMakeFiles/info3.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/info3.dir/main.cpp.s"
	C:\mingw\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Uni\3.Semester\inf3Github\info3\main.cpp -o CMakeFiles\info3.dir\main.cpp.s

CMakeFiles/info3.dir/cdate.cpp.obj: CMakeFiles/info3.dir/flags.make
CMakeFiles/info3.dir/cdate.cpp.obj: ../cdate.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Uni\3.Semester\inf3Github\info3\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/info3.dir/cdate.cpp.obj"
	C:\mingw\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\info3.dir\cdate.cpp.obj -c D:\Uni\3.Semester\inf3Github\info3\cdate.cpp

CMakeFiles/info3.dir/cdate.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/info3.dir/cdate.cpp.i"
	C:\mingw\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Uni\3.Semester\inf3Github\info3\cdate.cpp > CMakeFiles\info3.dir\cdate.cpp.i

CMakeFiles/info3.dir/cdate.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/info3.dir/cdate.cpp.s"
	C:\mingw\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Uni\3.Semester\inf3Github\info3\cdate.cpp -o CMakeFiles\info3.dir\cdate.cpp.s

# Object files for target info3
info3_OBJECTS = \
"CMakeFiles/info3.dir/main.cpp.obj" \
"CMakeFiles/info3.dir/cdate.cpp.obj"

# External object files for target info3
info3_EXTERNAL_OBJECTS =

info3.exe: CMakeFiles/info3.dir/main.cpp.obj
info3.exe: CMakeFiles/info3.dir/cdate.cpp.obj
info3.exe: CMakeFiles/info3.dir/build.make
info3.exe: CMakeFiles/info3.dir/linklibs.rsp
info3.exe: CMakeFiles/info3.dir/objects1.rsp
info3.exe: CMakeFiles/info3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Uni\3.Semester\inf3Github\info3\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable info3.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\info3.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/info3.dir/build: info3.exe

.PHONY : CMakeFiles/info3.dir/build

CMakeFiles/info3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\info3.dir\cmake_clean.cmake
.PHONY : CMakeFiles/info3.dir/clean

CMakeFiles/info3.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Uni\3.Semester\inf3Github\info3 D:\Uni\3.Semester\inf3Github\info3 D:\Uni\3.Semester\inf3Github\info3\cmake-build-debug D:\Uni\3.Semester\inf3Github\info3\cmake-build-debug D:\Uni\3.Semester\inf3Github\info3\cmake-build-debug\CMakeFiles\info3.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/info3.dir/depend

