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
include graphs/CMakeFiles/graph.dir/depend.make

# Include the progress variables for this target.
include graphs/CMakeFiles/graph.dir/progress.make

# Include the compile flags for this target's objects.
include graphs/CMakeFiles/graph.dir/flags.make

graphs/CMakeFiles/graph.dir/lltest.cpp.o: graphs/CMakeFiles/graph.dir/flags.make
graphs/CMakeFiles/graph.dir/lltest.cpp.o: graphs/lltest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mddarr/projects/data_structures/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object graphs/CMakeFiles/graph.dir/lltest.cpp.o"
	cd /home/mddarr/projects/data_structures/graphs && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/graph.dir/lltest.cpp.o -c /home/mddarr/projects/data_structures/graphs/lltest.cpp

graphs/CMakeFiles/graph.dir/lltest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/graph.dir/lltest.cpp.i"
	cd /home/mddarr/projects/data_structures/graphs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mddarr/projects/data_structures/graphs/lltest.cpp > CMakeFiles/graph.dir/lltest.cpp.i

graphs/CMakeFiles/graph.dir/lltest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/graph.dir/lltest.cpp.s"
	cd /home/mddarr/projects/data_structures/graphs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mddarr/projects/data_structures/graphs/lltest.cpp -o CMakeFiles/graph.dir/lltest.cpp.s

# Object files for target graph
graph_OBJECTS = \
"CMakeFiles/graph.dir/lltest.cpp.o"

# External object files for target graph
graph_EXTERNAL_OBJECTS =

graphs/libgraph.a: graphs/CMakeFiles/graph.dir/lltest.cpp.o
graphs/libgraph.a: graphs/CMakeFiles/graph.dir/build.make
graphs/libgraph.a: graphs/CMakeFiles/graph.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mddarr/projects/data_structures/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libgraph.a"
	cd /home/mddarr/projects/data_structures/graphs && $(CMAKE_COMMAND) -P CMakeFiles/graph.dir/cmake_clean_target.cmake
	cd /home/mddarr/projects/data_structures/graphs && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/graph.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
graphs/CMakeFiles/graph.dir/build: graphs/libgraph.a

.PHONY : graphs/CMakeFiles/graph.dir/build

graphs/CMakeFiles/graph.dir/clean:
	cd /home/mddarr/projects/data_structures/graphs && $(CMAKE_COMMAND) -P CMakeFiles/graph.dir/cmake_clean.cmake
.PHONY : graphs/CMakeFiles/graph.dir/clean

graphs/CMakeFiles/graph.dir/depend:
	cd /home/mddarr/projects/data_structures && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mddarr/projects/data_structures /home/mddarr/projects/data_structures/graphs /home/mddarr/projects/data_structures /home/mddarr/projects/data_structures/graphs /home/mddarr/projects/data_structures/graphs/CMakeFiles/graph.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : graphs/CMakeFiles/graph.dir/depend
