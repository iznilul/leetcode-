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
include CMakeFiles/offer58lp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/offer58lp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/offer58lp.dir/flags.make

CMakeFiles/offer58lp.dir/offer58l.cpp.obj: CMakeFiles/offer58lp.dir/flags.make
CMakeFiles/offer58lp.dir/offer58l.cpp.obj: ../offer58l.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\offer\leetcode\leetcode\editor\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/offer58lp.dir/offer58l.cpp.obj"
	D:\minGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\offer58lp.dir\offer58l.cpp.obj -c D:\offer\leetcode\leetcode\editor\offer58l.cpp

CMakeFiles/offer58lp.dir/offer58l.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/offer58lp.dir/offer58l.cpp.i"
	D:\minGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\offer\leetcode\leetcode\editor\offer58l.cpp > CMakeFiles\offer58lp.dir\offer58l.cpp.i

CMakeFiles/offer58lp.dir/offer58l.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/offer58lp.dir/offer58l.cpp.s"
	D:\minGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\offer\leetcode\leetcode\editor\offer58l.cpp -o CMakeFiles\offer58lp.dir\offer58l.cpp.s

# Object files for target offer58lp
offer58lp_OBJECTS = \
"CMakeFiles/offer58lp.dir/offer58l.cpp.obj"

# External object files for target offer58lp
offer58lp_EXTERNAL_OBJECTS =

offer58lp.exe: CMakeFiles/offer58lp.dir/offer58l.cpp.obj
offer58lp.exe: CMakeFiles/offer58lp.dir/build.make
offer58lp.exe: CMakeFiles/offer58lp.dir/linklibs.rsp
offer58lp.exe: CMakeFiles/offer58lp.dir/objects1.rsp
offer58lp.exe: CMakeFiles/offer58lp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\offer\leetcode\leetcode\editor\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable offer58lp.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\offer58lp.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/offer58lp.dir/build: offer58lp.exe

.PHONY : CMakeFiles/offer58lp.dir/build

CMakeFiles/offer58lp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\offer58lp.dir\cmake_clean.cmake
.PHONY : CMakeFiles/offer58lp.dir/clean

CMakeFiles/offer58lp.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\offer\leetcode\leetcode\editor D:\offer\leetcode\leetcode\editor D:\offer\leetcode\leetcode\editor\cmake-build-debug D:\offer\leetcode\leetcode\editor\cmake-build-debug D:\offer\leetcode\leetcode\editor\cmake-build-debug\CMakeFiles\offer58lp.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/offer58lp.dir/depend
