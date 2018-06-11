# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
include algorithms/arrays/CMakeFiles/king_queen.dir/depend.make

# Include the progress variables for this target.
include algorithms/arrays/CMakeFiles/king_queen.dir/progress.make

# Include the compile flags for this target's objects.
include algorithms/arrays/CMakeFiles/king_queen.dir/flags.make

algorithms/arrays/CMakeFiles/king_queen.dir/king_queen.cpp.o: algorithms/arrays/CMakeFiles/king_queen.dir/flags.make
algorithms/arrays/CMakeFiles/king_queen.dir/king_queen.cpp.o: algorithms/arrays/king_queen.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mddarr/projects/data_structures/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object algorithms/arrays/CMakeFiles/king_queen.dir/king_queen.cpp.o"
	cd /home/mddarr/projects/data_structures/algorithms/arrays && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/king_queen.dir/king_queen.cpp.o -c /home/mddarr/projects/data_structures/algorithms/arrays/king_queen.cpp

algorithms/arrays/CMakeFiles/king_queen.dir/king_queen.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/king_queen.dir/king_queen.cpp.i"
	cd /home/mddarr/projects/data_structures/algorithms/arrays && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mddarr/projects/data_structures/algorithms/arrays/king_queen.cpp > CMakeFiles/king_queen.dir/king_queen.cpp.i

algorithms/arrays/CMakeFiles/king_queen.dir/king_queen.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/king_queen.dir/king_queen.cpp.s"
	cd /home/mddarr/projects/data_structures/algorithms/arrays && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mddarr/projects/data_structures/algorithms/arrays/king_queen.cpp -o CMakeFiles/king_queen.dir/king_queen.cpp.s

algorithms/arrays/CMakeFiles/king_queen.dir/king_queen.cpp.o.requires:

.PHONY : algorithms/arrays/CMakeFiles/king_queen.dir/king_queen.cpp.o.requires

algorithms/arrays/CMakeFiles/king_queen.dir/king_queen.cpp.o.provides: algorithms/arrays/CMakeFiles/king_queen.dir/king_queen.cpp.o.requires
	$(MAKE) -f algorithms/arrays/CMakeFiles/king_queen.dir/build.make algorithms/arrays/CMakeFiles/king_queen.dir/king_queen.cpp.o.provides.build
.PHONY : algorithms/arrays/CMakeFiles/king_queen.dir/king_queen.cpp.o.provides

algorithms/arrays/CMakeFiles/king_queen.dir/king_queen.cpp.o.provides.build: algorithms/arrays/CMakeFiles/king_queen.dir/king_queen.cpp.o


# Object files for target king_queen
king_queen_OBJECTS = \
"CMakeFiles/king_queen.dir/king_queen.cpp.o"

# External object files for target king_queen
king_queen_EXTERNAL_OBJECTS =

algorithms/arrays/king_queen: algorithms/arrays/CMakeFiles/king_queen.dir/king_queen.cpp.o
algorithms/arrays/king_queen: algorithms/arrays/CMakeFiles/king_queen.dir/build.make
algorithms/arrays/king_queen: algorithms/arrays/CMakeFiles/king_queen.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mddarr/projects/data_structures/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable king_queen"
	cd /home/mddarr/projects/data_structures/algorithms/arrays && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/king_queen.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
algorithms/arrays/CMakeFiles/king_queen.dir/build: algorithms/arrays/king_queen

.PHONY : algorithms/arrays/CMakeFiles/king_queen.dir/build

algorithms/arrays/CMakeFiles/king_queen.dir/requires: algorithms/arrays/CMakeFiles/king_queen.dir/king_queen.cpp.o.requires

.PHONY : algorithms/arrays/CMakeFiles/king_queen.dir/requires

algorithms/arrays/CMakeFiles/king_queen.dir/clean:
	cd /home/mddarr/projects/data_structures/algorithms/arrays && $(CMAKE_COMMAND) -P CMakeFiles/king_queen.dir/cmake_clean.cmake
.PHONY : algorithms/arrays/CMakeFiles/king_queen.dir/clean

algorithms/arrays/CMakeFiles/king_queen.dir/depend:
	cd /home/mddarr/projects/data_structures && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mddarr/projects/data_structures /home/mddarr/projects/data_structures/algorithms/arrays /home/mddarr/projects/data_structures /home/mddarr/projects/data_structures/algorithms/arrays /home/mddarr/projects/data_structures/algorithms/arrays/CMakeFiles/king_queen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : algorithms/arrays/CMakeFiles/king_queen.dir/depend

