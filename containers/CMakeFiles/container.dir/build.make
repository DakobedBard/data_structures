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
include containers/CMakeFiles/container.dir/depend.make

# Include the progress variables for this target.
include containers/CMakeFiles/container.dir/progress.make

# Include the compile flags for this target's objects.
include containers/CMakeFiles/container.dir/flags.make

containers/CMakeFiles/container.dir/Vector.cpp.o: containers/CMakeFiles/container.dir/flags.make
containers/CMakeFiles/container.dir/Vector.cpp.o: containers/Vector.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mddarr/projects/data_structures/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object containers/CMakeFiles/container.dir/Vector.cpp.o"
	cd /home/mddarr/projects/data_structures/containers && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/container.dir/Vector.cpp.o -c /home/mddarr/projects/data_structures/containers/Vector.cpp

containers/CMakeFiles/container.dir/Vector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/container.dir/Vector.cpp.i"
	cd /home/mddarr/projects/data_structures/containers && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mddarr/projects/data_structures/containers/Vector.cpp > CMakeFiles/container.dir/Vector.cpp.i

containers/CMakeFiles/container.dir/Vector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/container.dir/Vector.cpp.s"
	cd /home/mddarr/projects/data_structures/containers && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mddarr/projects/data_structures/containers/Vector.cpp -o CMakeFiles/container.dir/Vector.cpp.s

# Object files for target container
container_OBJECTS = \
"CMakeFiles/container.dir/Vector.cpp.o"

# External object files for target container
container_EXTERNAL_OBJECTS =

containers/libcontainer.a: containers/CMakeFiles/container.dir/Vector.cpp.o
containers/libcontainer.a: containers/CMakeFiles/container.dir/build.make
containers/libcontainer.a: containers/CMakeFiles/container.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mddarr/projects/data_structures/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libcontainer.a"
	cd /home/mddarr/projects/data_structures/containers && $(CMAKE_COMMAND) -P CMakeFiles/container.dir/cmake_clean_target.cmake
	cd /home/mddarr/projects/data_structures/containers && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/container.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
containers/CMakeFiles/container.dir/build: containers/libcontainer.a

.PHONY : containers/CMakeFiles/container.dir/build

containers/CMakeFiles/container.dir/clean:
	cd /home/mddarr/projects/data_structures/containers && $(CMAKE_COMMAND) -P CMakeFiles/container.dir/cmake_clean.cmake
.PHONY : containers/CMakeFiles/container.dir/clean

containers/CMakeFiles/container.dir/depend:
	cd /home/mddarr/projects/data_structures && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mddarr/projects/data_structures /home/mddarr/projects/data_structures/containers /home/mddarr/projects/data_structures /home/mddarr/projects/data_structures/containers /home/mddarr/projects/data_structures/containers/CMakeFiles/container.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : containers/CMakeFiles/container.dir/depend

