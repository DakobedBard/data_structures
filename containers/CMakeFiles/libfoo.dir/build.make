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
include graphs/CMakeFiles/libfoo.dir/depend.make

# Include the progress variables for this target.
include graphs/CMakeFiles/libfoo.dir/progress.make

# Include the compile flags for this target's objects.
include graphs/CMakeFiles/libfoo.dir/flags.make

graphs/CMakeFiles/libfoo.dir/foo.cpp.o: graphs/CMakeFiles/libfoo.dir/flags.make
graphs/CMakeFiles/libfoo.dir/foo.cpp.o: graphs/foo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mddarr/projects/data_structures/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object graphs/CMakeFiles/libfoo.dir/foo.cpp.o"
	cd /home/mddarr/projects/data_structures/graphs && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/libfoo.dir/foo.cpp.o -c /home/mddarr/projects/data_structures/graphs/foo.cpp

graphs/CMakeFiles/libfoo.dir/foo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libfoo.dir/foo.cpp.i"
	cd /home/mddarr/projects/data_structures/graphs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mddarr/projects/data_structures/graphs/foo.cpp > CMakeFiles/libfoo.dir/foo.cpp.i

graphs/CMakeFiles/libfoo.dir/foo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libfoo.dir/foo.cpp.s"
	cd /home/mddarr/projects/data_structures/graphs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mddarr/projects/data_structures/graphs/foo.cpp -o CMakeFiles/libfoo.dir/foo.cpp.s

# Object files for target libfoo
libfoo_OBJECTS = \
"CMakeFiles/libfoo.dir/foo.cpp.o"

# External object files for target libfoo
libfoo_EXTERNAL_OBJECTS =

graphs/liblibfoo.a: graphs/CMakeFiles/libfoo.dir/foo.cpp.o
graphs/liblibfoo.a: graphs/CMakeFiles/libfoo.dir/build.make
graphs/liblibfoo.a: graphs/CMakeFiles/libfoo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mddarr/projects/data_structures/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library liblibfoo.a"
	cd /home/mddarr/projects/data_structures/graphs && $(CMAKE_COMMAND) -P CMakeFiles/libfoo.dir/cmake_clean_target.cmake
	cd /home/mddarr/projects/data_structures/graphs && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/libfoo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
graphs/CMakeFiles/libfoo.dir/build: graphs/liblibfoo.a

.PHONY : graphs/CMakeFiles/libfoo.dir/build

graphs/CMakeFiles/libfoo.dir/clean:
	cd /home/mddarr/projects/data_structures/graphs && $(CMAKE_COMMAND) -P CMakeFiles/libfoo.dir/cmake_clean.cmake
.PHONY : graphs/CMakeFiles/libfoo.dir/clean

graphs/CMakeFiles/libfoo.dir/depend:
	cd /home/mddarr/projects/data_structures && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mddarr/projects/data_structures /home/mddarr/projects/data_structures/graphs /home/mddarr/projects/data_structures /home/mddarr/projects/data_structures/graphs /home/mddarr/projects/data_structures/graphs/CMakeFiles/libfoo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : graphs/CMakeFiles/libfoo.dir/depend

