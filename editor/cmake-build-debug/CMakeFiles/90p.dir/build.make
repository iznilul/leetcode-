# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Program Files\JetBrains\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\JetBrains\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\offer\leetcode\leetcode\editor

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\offer\leetcode\leetcode\editor\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/90p.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/90p.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/90p.dir/flags.make

CMakeFiles/90p.dir/90.cpp.obj: CMakeFiles/90p.dir/flags.make
CMakeFiles/90p.dir/90.cpp.obj: ../90.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\offer\leetcode\leetcode\editor\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/90p.dir/90.cpp.obj"
	D:\minGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\90p.dir\90.cpp.obj -c D:\offer\leetcode\leetcode\editor\90.cpp

CMakeFiles/90p.dir/90.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/90p.dir/90.cpp.i"
	D:\minGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\offer\leetcode\leetcode\editor\90.cpp > CMakeFiles\90p.dir\90.cpp.i

CMakeFiles/90p.dir/90.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/90p.dir/90.cpp.s"
	D:\minGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\offer\leetcode\leetcode\editor\90.cpp -o CMakeFiles\90p.dir\90.cpp.s

# Object files for target 90p
90p_OBJECTS = \
"CMakeFiles/90p.dir/90.cpp.obj"

# External object files for target 90p
90p_EXTERNAL_OBJECTS =

90p.exe: CMakeFiles/90p.dir/90.cpp.obj
90p.exe: CMakeFiles/90p.dir/build.make
90p.exe: CMakeFiles/90p.dir/linklibs.rsp
90p.exe: CMakeFiles/90p.dir/objects1.rsp
90p.exe: CMakeFiles/90p.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\offer\leetcode\leetcode\editor\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 90p.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\90p.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/90p.dir/build: 90p.exe

.PHONY : CMakeFiles/90p.dir/build

CMakeFiles/90p.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\90p.dir\cmake_clean.cmake
.PHONY : CMakeFiles/90p.dir/clean

CMakeFiles/90p.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\offer\leetcode\leetcode\editor D:\offer\leetcode\leetcode\editor D:\offer\leetcode\leetcode\editor\cmake-build-debug D:\offer\leetcode\leetcode\editor\cmake-build-debug D:\offer\leetcode\leetcode\editor\cmake-build-debug\CMakeFiles\90p.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/90p.dir/depend

