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
include CMakeFiles/offer31p.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/offer31p.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/offer31p.dir/flags.make

CMakeFiles/offer31p.dir/offer31.cpp.obj: CMakeFiles/offer31p.dir/flags.make
CMakeFiles/offer31p.dir/offer31.cpp.obj: ../offer31.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\offer\leetcode\leetcode\editor\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/offer31p.dir/offer31.cpp.obj"
	D:\minGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\offer31p.dir\offer31.cpp.obj -c D:\offer\leetcode\leetcode\editor\offer31.cpp

CMakeFiles/offer31p.dir/offer31.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/offer31p.dir/offer31.cpp.i"
	D:\minGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\offer\leetcode\leetcode\editor\offer31.cpp > CMakeFiles\offer31p.dir\offer31.cpp.i

CMakeFiles/offer31p.dir/offer31.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/offer31p.dir/offer31.cpp.s"
	D:\minGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\offer\leetcode\leetcode\editor\offer31.cpp -o CMakeFiles\offer31p.dir\offer31.cpp.s

# Object files for target offer31p
offer31p_OBJECTS = \
"CMakeFiles/offer31p.dir/offer31.cpp.obj"

# External object files for target offer31p
offer31p_EXTERNAL_OBJECTS =

offer31p.exe: CMakeFiles/offer31p.dir/offer31.cpp.obj
offer31p.exe: CMakeFiles/offer31p.dir/build.make
offer31p.exe: CMakeFiles/offer31p.dir/linklibs.rsp
offer31p.exe: CMakeFiles/offer31p.dir/objects1.rsp
offer31p.exe: CMakeFiles/offer31p.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\offer\leetcode\leetcode\editor\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable offer31p.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\offer31p.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/offer31p.dir/build: offer31p.exe

.PHONY : CMakeFiles/offer31p.dir/build

CMakeFiles/offer31p.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\offer31p.dir\cmake_clean.cmake
.PHONY : CMakeFiles/offer31p.dir/clean

CMakeFiles/offer31p.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\offer\leetcode\leetcode\editor D:\offer\leetcode\leetcode\editor D:\offer\leetcode\leetcode\editor\cmake-build-debug D:\offer\leetcode\leetcode\editor\cmake-build-debug D:\offer\leetcode\leetcode\editor\cmake-build-debug\CMakeFiles\offer31p.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/offer31p.dir/depend
