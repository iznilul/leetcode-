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
include CMakeFiles/sanliuling.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sanliuling.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sanliuling.dir/flags.make

CMakeFiles/sanliuling.dir/sanliuling.cpp.obj: CMakeFiles/sanliuling.dir/flags.make
CMakeFiles/sanliuling.dir/sanliuling.cpp.obj: ../sanliuling.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\offer\leetcode\leetcode\editor\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sanliuling.dir/sanliuling.cpp.obj"
	D:\minGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\sanliuling.dir\sanliuling.cpp.obj -c D:\offer\leetcode\leetcode\editor\sanliuling.cpp

CMakeFiles/sanliuling.dir/sanliuling.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sanliuling.dir/sanliuling.cpp.i"
	D:\minGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\offer\leetcode\leetcode\editor\sanliuling.cpp > CMakeFiles\sanliuling.dir\sanliuling.cpp.i

CMakeFiles/sanliuling.dir/sanliuling.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sanliuling.dir/sanliuling.cpp.s"
	D:\minGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\offer\leetcode\leetcode\editor\sanliuling.cpp -o CMakeFiles\sanliuling.dir\sanliuling.cpp.s

# Object files for target sanliuling
sanliuling_OBJECTS = \
"CMakeFiles/sanliuling.dir/sanliuling.cpp.obj"

# External object files for target sanliuling
sanliuling_EXTERNAL_OBJECTS =

sanliuling.exe: CMakeFiles/sanliuling.dir/sanliuling.cpp.obj
sanliuling.exe: CMakeFiles/sanliuling.dir/build.make
sanliuling.exe: CMakeFiles/sanliuling.dir/linklibs.rsp
sanliuling.exe: CMakeFiles/sanliuling.dir/objects1.rsp
sanliuling.exe: CMakeFiles/sanliuling.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\offer\leetcode\leetcode\editor\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sanliuling.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\sanliuling.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sanliuling.dir/build: sanliuling.exe

.PHONY : CMakeFiles/sanliuling.dir/build

CMakeFiles/sanliuling.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\sanliuling.dir\cmake_clean.cmake
.PHONY : CMakeFiles/sanliuling.dir/clean

CMakeFiles/sanliuling.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\offer\leetcode\leetcode\editor D:\offer\leetcode\leetcode\editor D:\offer\leetcode\leetcode\editor\cmake-build-debug D:\offer\leetcode\leetcode\editor\cmake-build-debug D:\offer\leetcode\leetcode\editor\cmake-build-debug\CMakeFiles\sanliuling.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sanliuling.dir/depend

