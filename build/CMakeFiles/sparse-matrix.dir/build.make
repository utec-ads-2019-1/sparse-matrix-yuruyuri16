# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/yuri/develop/ads/sparse-matrix

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/yuri/develop/ads/sparse-matrix/build

# Include any dependencies generated for this target.
include CMakeFiles/sparse-matrix.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sparse-matrix.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sparse-matrix.dir/flags.make

CMakeFiles/sparse-matrix.dir/main.cpp.o: CMakeFiles/sparse-matrix.dir/flags.make
CMakeFiles/sparse-matrix.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yuri/develop/ads/sparse-matrix/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sparse-matrix.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sparse-matrix.dir/main.cpp.o -c /Users/yuri/develop/ads/sparse-matrix/main.cpp

CMakeFiles/sparse-matrix.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sparse-matrix.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/yuri/develop/ads/sparse-matrix/main.cpp > CMakeFiles/sparse-matrix.dir/main.cpp.i

CMakeFiles/sparse-matrix.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sparse-matrix.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/yuri/develop/ads/sparse-matrix/main.cpp -o CMakeFiles/sparse-matrix.dir/main.cpp.s

# Object files for target sparse-matrix
sparse__matrix_OBJECTS = \
"CMakeFiles/sparse-matrix.dir/main.cpp.o"

# External object files for target sparse-matrix
sparse__matrix_EXTERNAL_OBJECTS =

sparse-matrix: CMakeFiles/sparse-matrix.dir/main.cpp.o
sparse-matrix: CMakeFiles/sparse-matrix.dir/build.make
sparse-matrix: CMakeFiles/sparse-matrix.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/yuri/develop/ads/sparse-matrix/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sparse-matrix"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sparse-matrix.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sparse-matrix.dir/build: sparse-matrix

.PHONY : CMakeFiles/sparse-matrix.dir/build

CMakeFiles/sparse-matrix.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sparse-matrix.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sparse-matrix.dir/clean

CMakeFiles/sparse-matrix.dir/depend:
	cd /Users/yuri/develop/ads/sparse-matrix/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/yuri/develop/ads/sparse-matrix /Users/yuri/develop/ads/sparse-matrix /Users/yuri/develop/ads/sparse-matrix/build /Users/yuri/develop/ads/sparse-matrix/build /Users/yuri/develop/ads/sparse-matrix/build/CMakeFiles/sparse-matrix.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sparse-matrix.dir/depend
