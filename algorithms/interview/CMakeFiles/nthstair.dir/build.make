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
include algorithms/interview/CMakeFiles/nthstair.dir/depend.make

# Include the progress variables for this target.
include algorithms/interview/CMakeFiles/nthstair.dir/progress.make

# Include the compile flags for this target's objects.
include algorithms/interview/CMakeFiles/nthstair.dir/flags.make

algorithms/interview/CMakeFiles/nthstair.dir/nthstair.cpp.o: algorithms/interview/CMakeFiles/nthstair.dir/flags.make
algorithms/interview/CMakeFiles/nthstair.dir/nthstair.cpp.o: algorithms/interview/nthstair.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mddarr/projects/data_structures/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object algorithms/interview/CMakeFiles/nthstair.dir/nthstair.cpp.o"
	cd /home/mddarr/projects/data_structures/algorithms/interview && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/nthstair.dir/nthstair.cpp.o -c /home/mddarr/projects/data_structures/algorithms/interview/nthstair.cpp

algorithms/interview/CMakeFiles/nthstair.dir/nthstair.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/nthstair.dir/nthstair.cpp.i"
	cd /home/mddarr/projects/data_structures/algorithms/interview && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mddarr/projects/data_structures/algorithms/interview/nthstair.cpp > CMakeFiles/nthstair.dir/nthstair.cpp.i

algorithms/interview/CMakeFiles/nthstair.dir/nthstair.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/nthstair.dir/nthstair.cpp.s"
	cd /home/mddarr/projects/data_structures/algorithms/interview && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mddarr/projects/data_structures/algorithms/interview/nthstair.cpp -o CMakeFiles/nthstair.dir/nthstair.cpp.s

# Object files for target nthstair
nthstair_OBJECTS = \
"CMakeFiles/nthstair.dir/nthstair.cpp.o"

# External object files for target nthstair
nthstair_EXTERNAL_OBJECTS =

algorithms/interview/nthstair: algorithms/interview/CMakeFiles/nthstair.dir/nthstair.cpp.o
algorithms/interview/nthstair: algorithms/interview/CMakeFiles/nthstair.dir/build.make
algorithms/interview/nthstair: containers/libcontainer.a
algorithms/interview/nthstair: algorithms/interview/CMakeFiles/nthstair.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mddarr/projects/data_structures/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable nthstair"
	cd /home/mddarr/projects/data_structures/algorithms/interview && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/nthstair.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
algorithms/interview/CMakeFiles/nthstair.dir/build: algorithms/interview/nthstair

.PHONY : algorithms/interview/CMakeFiles/nthstair.dir/build

algorithms/interview/CMakeFiles/nthstair.dir/clean:
	cd /home/mddarr/projects/data_structures/algorithms/interview && $(CMAKE_COMMAND) -P CMakeFiles/nthstair.dir/cmake_clean.cmake
.PHONY : algorithms/interview/CMakeFiles/nthstair.dir/clean

algorithms/interview/CMakeFiles/nthstair.dir/depend:
	cd /home/mddarr/projects/data_structures && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mddarr/projects/data_structures /home/mddarr/projects/data_structures/algorithms/interview /home/mddarr/projects/data_structures /home/mddarr/projects/data_structures/algorithms/interview /home/mddarr/projects/data_structures/algorithms/interview/CMakeFiles/nthstair.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : algorithms/interview/CMakeFiles/nthstair.dir/depend

