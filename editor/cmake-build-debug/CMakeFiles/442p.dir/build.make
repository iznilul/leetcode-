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
include CMakeFiles/442p.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/442p.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/442p.dir/flags.make

CMakeFiles/442p.dir/442.cpp.obj: CMakeFiles/442p.dir/flags.make
CMakeFiles/442p.dir/442.cpp.obj: ../442.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\offer\leetcode\leetcode\editor\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/442p.dir/442.cpp.obj"
	D:\minGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\442p.dir\442.cpp.obj -c D:\offer\leetcode\leetcode\editor\442.cpp

CMakeFiles/442p.dir/442.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/442p.dir/442.cpp.i"
	D:\minGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\offer\leetcode\leetcode\editor\442.cpp > CMakeFiles\442p.dir\442.cpp.i

CMakeFiles/442p.dir/442.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/442p.dir/442.cpp.s"
	D:\minGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\offer\leetcode\leetcode\editor\442.cpp -o CMakeFiles\442p.dir\442.cpp.s

# Object files for target 442p
442p_OBJECTS = \
"CMakeFiles/442p.dir/442.cpp.obj"

# External object files for target 442p
442p_EXTERNAL_OBJECTS =

442p.exe: CMakeFiles/442p.dir/442.cpp.obj
442p.exe: CMakeFiles/442p.dir/build.make
442p.exe: CMakeFiles/442p.dir/linklibs.rsp
442p.exe: CMakeFiles/442p.dir/objects1.rsp
442p.exe: CMakeFiles/442p.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\offer\leetcode\leetcode\editor\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 442p.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\442p.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/442p.dir/build: 442p.exe

.PHONY : CMakeFiles/442p.dir/build

CMakeFiles/442p.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\442p.dir\cmake_clean.cmake
.PHONY : CMakeFiles/442p.dir/clean

CMakeFiles/442p.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\offer\leetcode\leetcode\editor D:\offer\leetcode\leetcode\editor D:\offer\leetcode\leetcode\editor\cmake-build-debug D:\offer\leetcode\leetcode\editor\cmake-build-debug D:\offer\leetcode\leetcode\editor\cmake-build-debug\CMakeFiles\442p.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/442p.dir/depend
