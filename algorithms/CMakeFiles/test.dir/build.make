# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.11

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mddarr/projects/data_structures

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mddarr/projects/data_structures

# Include any dependencies generated for this target.
include algorithms/CMakeFiles/test.dir/depend.make

# Include the progress variables for this target.
include algorithms/CMakeFiles/test.dir/progress.make

# Include the compile flags for this target's objects.
include algorithms/CMakeFiles/test.dir/flags.make

algorithms/CMakeFiles/test.dir/lltest.cpp.o: algorithms/CMakeFiles/test.dir/flags.make
algorithms/CMakeFiles/test.dir/lltest.cpp.o: algorithms/lltest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mddarr/projects/data_structures/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object algorithms/CMakeFiles/test.dir/lltest.cpp.o"
	cd /home/mddarr/projects/data_structures/algorithms && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test.dir/lltest.cpp.o -c /home/mddarr/projects/data_structures/algorithms/lltest.cpp

algorithms/CMakeFiles/test.dir/lltest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test.dir/lltest.cpp.i"
	cd /home/mddarr/projects/data_structures/algorithms && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mddarr/projects/data_structures/algorithms/lltest.cpp > CMakeFiles/test.dir/lltest.cpp.i

algorithms/CMakeFiles/test.dir/lltest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test.dir/lltest.cpp.s"
	cd /home/mddarr/projects/data_structures/algorithms && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mddarr/projects/data_structures/algorithms/lltest.cpp -o CMakeFiles/test.dir/lltest.cpp.s

# Object files for target test
test_OBJECTS = \
"CMakeFiles/test.dir/lltest.cpp.o"

# External object files for target test
test_EXTERNAL_OBJECTS =

algorithms/test: algorithms/CMakeFiles/test.dir/lltest.cpp.o
algorithms/test: algorithms/CMakeFiles/test.dir/build.make
algorithms/test: graphs/libgraph.a
algorithms/test: containers/libcontainer.a
algorithms/test: algorithms/CMakeFiles/test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mddarr/projects/data_structures/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test"
	cd /home/mddarr/projects/data_structures/algorithms && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
algorithms/CMakeFiles/test.dir/build: algorithms/test

.PHONY : algorithms/CMakeFiles/test.dir/build

algorithms/CMakeFiles/test.dir/clean:
	cd /home/mddarr/projects/data_structures/algorithms && $(CMAKE_COMMAND) -P CMakeFiles/test.dir/cmake_clean.cmake
.PHONY : algorithms/CMakeFiles/test.dir/clean

algorithms/CMakeFiles/test.dir/depend:
	cd /home/mddarr/projects/data_structures && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mddarr/projects/data_structures /home/mddarr/projects/data_structures/algorithms /home/mddarr/projects/data_structures /home/mddarr/projects/data_structures/algorithms /home/mddarr/projects/data_structures/algorithms/CMakeFiles/test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : algorithms/CMakeFiles/test.dir/depend
