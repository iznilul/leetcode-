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
include CMakeFiles/offer68lp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/offer68lp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/offer68lp.dir/flags.make

CMakeFiles/offer68lp.dir/offer68l.cpp.obj: CMakeFiles/offer68lp.dir/flags.make
CMakeFiles/offer68lp.dir/offer68l.cpp.obj: ../offer68l.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\offer\leetcode\leetcode\editor\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/offer68lp.dir/offer68l.cpp.obj"
	D:\minGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\offer68lp.dir\offer68l.cpp.obj -c D:\offer\leetcode\leetcode\editor\offer68l.cpp

CMakeFiles/offer68lp.dir/offer68l.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/offer68lp.dir/offer68l.cpp.i"
	D:\minGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\offer\leetcode\leetcode\editor\offer68l.cpp > CMakeFiles\offer68lp.dir\offer68l.cpp.i

CMakeFiles/offer68lp.dir/offer68l.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/offer68lp.dir/offer68l.cpp.s"
	D:\minGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\offer\leetcode\leetcode\editor\offer68l.cpp -o CMakeFiles\offer68lp.dir\offer68l.cpp.s

# Object files for target offer68lp
offer68lp_OBJECTS = \
"CMakeFiles/offer68lp.dir/offer68l.cpp.obj"

# External object files for target offer68lp
offer68lp_EXTERNAL_OBJECTS =

offer68lp.exe: CMakeFiles/offer68lp.dir/offer68l.cpp.obj
offer68lp.exe: CMakeFiles/offer68lp.dir/build.make
offer68lp.exe: CMakeFiles/offer68lp.dir/linklibs.rsp
offer68lp.exe: CMakeFiles/offer68lp.dir/objects1.rsp
offer68lp.exe: CMakeFiles/offer68lp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\offer\leetcode\leetcode\editor\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable offer68lp.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\offer68lp.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/offer68lp.dir/build: offer68lp.exe

.PHONY : CMakeFiles/offer68lp.dir/build

CMakeFiles/offer68lp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\offer68lp.dir\cmake_clean.cmake
.PHONY : CMakeFiles/offer68lp.dir/clean

CMakeFiles/offer68lp.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\offer\leetcode\leetcode\editor D:\offer\leetcode\leetcode\editor D:\offer\leetcode\leetcode\editor\cmake-build-debug D:\offer\leetcode\leetcode\editor\cmake-build-debug D:\offer\leetcode\leetcode\editor\cmake-build-debug\CMakeFiles\offer68lp.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/offer68lp.dir/depend

