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
include algorithms/arrays/CMakeFiles/inplace_manipulation.dir/depend.make

# Include the progress variables for this target.
include algorithms/arrays/CMakeFiles/inplace_manipulation.dir/progress.make

# Include the compile flags for this target's objects.
include algorithms/arrays/CMakeFiles/inplace_manipulation.dir/flags.make

algorithms/arrays/CMakeFiles/inplace_manipulation.dir/inplace_manipulation.cpp.o: algorithms/arrays/CMakeFiles/inplace_manipulation.dir/flags.make
algorithms/arrays/CMakeFiles/inplace_manipulation.dir/inplace_manipulation.cpp.o: algorithms/arrays/inplace_manipulation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mddarr/projects/data_structures/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object algorithms/arrays/CMakeFiles/inplace_manipulation.dir/inplace_manipulation.cpp.o"
	cd /home/mddarr/projects/data_structures/algorithms/arrays && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/inplace_manipulation.dir/inplace_manipulation.cpp.o -c /home/mddarr/projects/data_structures/algorithms/arrays/inplace_manipulation.cpp

algorithms/arrays/CMakeFiles/inplace_manipulation.dir/inplace_manipulation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/inplace_manipulation.dir/inplace_manipulation.cpp.i"
	cd /home/mddarr/projects/data_structures/algorithms/arrays && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mddarr/projects/data_structures/algorithms/arrays/inplace_manipulation.cpp > CMakeFiles/inplace_manipulation.dir/inplace_manipulation.cpp.i

algorithms/arrays/CMakeFiles/inplace_manipulation.dir/inplace_manipulation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/inplace_manipulation.dir/inplace_manipulation.cpp.s"
	cd /home/mddarr/projects/data_structures/algorithms/arrays && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mddarr/projects/data_structures/algorithms/arrays/inplace_manipulation.cpp -o CMakeFiles/inplace_manipulation.dir/inplace_manipulation.cpp.s

# Object files for target inplace_manipulation
inplace_manipulation_OBJECTS = \
"CMakeFiles/inplace_manipulation.dir/inplace_manipulation.cpp.o"

# External object files for target inplace_manipulation
inplace_manipulation_EXTERNAL_OBJECTS =

algorithms/arrays/inplace_manipulation: algorithms/arrays/CMakeFiles/inplace_manipulation.dir/inplace_manipulation.cpp.o
algorithms/arrays/inplace_manipulation: algorithms/arrays/CMakeFiles/inplace_manipulation.dir/build.make
algorithms/arrays/inplace_manipulation: algorithms/arrays/CMakeFiles/inplace_manipulation.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mddarr/projects/data_structures/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable inplace_manipulation"
	cd /home/mddarr/projects/data_structures/algorithms/arrays && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/inplace_manipulation.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
algorithms/arrays/CMakeFiles/inplace_manipulation.dir/build: algorithms/arrays/inplace_manipulation

.PHONY : algorithms/arrays/CMakeFiles/inplace_manipulation.dir/build

algorithms/arrays/CMakeFiles/inplace_manipulation.dir/clean:
	cd /home/mddarr/projects/data_structures/algorithms/arrays && $(CMAKE_COMMAND) -P CMakeFiles/inplace_manipulation.dir/cmake_clean.cmake
.PHONY : algorithms/arrays/CMakeFiles/inplace_manipulation.dir/clean

algorithms/arrays/CMakeFiles/inplace_manipulation.dir/depend:
	cd /home/mddarr/projects/data_structures && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mddarr/projects/data_structures /home/mddarr/projects/data_structures/algorithms/arrays /home/mddarr/projects/data_structures /home/mddarr/projects/data_structures/algorithms/arrays /home/mddarr/projects/data_structures/algorithms/arrays/CMakeFiles/inplace_manipulation.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : algorithms/arrays/CMakeFiles/inplace_manipulation.dir/depend
