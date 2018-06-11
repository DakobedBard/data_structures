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

# Utility rule file for gtest.

# Include the progress variables for this target.
include test/CMakeFiles/gtest.dir/progress.make

test/CMakeFiles/gtest: test/CMakeFiles/gtest-complete


test/CMakeFiles/gtest-complete: test/gtest/src/gtest-stamp/gtest-install
test/CMakeFiles/gtest-complete: test/gtest/src/gtest-stamp/gtest-mkdir
test/CMakeFiles/gtest-complete: test/gtest/src/gtest-stamp/gtest-download
test/CMakeFiles/gtest-complete: test/gtest/src/gtest-stamp/gtest-update
test/CMakeFiles/gtest-complete: test/gtest/src/gtest-stamp/gtest-patch
test/CMakeFiles/gtest-complete: test/gtest/src/gtest-stamp/gtest-configure
test/CMakeFiles/gtest-complete: test/gtest/src/gtest-stamp/gtest-build
test/CMakeFiles/gtest-complete: test/gtest/src/gtest-stamp/gtest-install
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/mddarr/projects/data_structures/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Completed 'gtest'"
	cd /home/mddarr/projects/data_structures/test && /usr/bin/cmake -E make_directory /home/mddarr/projects/data_structures/test/CMakeFiles
	cd /home/mddarr/projects/data_structures/test && /usr/bin/cmake -E touch /home/mddarr/projects/data_structures/test/CMakeFiles/gtest-complete
	cd /home/mddarr/projects/data_structures/test && /usr/bin/cmake -E touch /home/mddarr/projects/data_structures/test/gtest/src/gtest-stamp/gtest-done

test/gtest/src/gtest-stamp/gtest-install: test/gtest/src/gtest-stamp/gtest-build
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/mddarr/projects/data_structures/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "No install step for 'gtest'"
	cd /home/mddarr/projects/data_structures/test/gtest/src/gtest-build && /usr/bin/cmake -E echo_append
	cd /home/mddarr/projects/data_structures/test/gtest/src/gtest-build && /usr/bin/cmake -E touch /home/mddarr/projects/data_structures/test/gtest/src/gtest-stamp/gtest-install

test/gtest/src/gtest-stamp/gtest-mkdir:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/mddarr/projects/data_structures/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Creating directories for 'gtest'"
	cd /home/mddarr/projects/data_structures/test && /usr/bin/cmake -E make_directory /home/mddarr/projects/data_structures/test/gtest/src/gtest
	cd /home/mddarr/projects/data_structures/test && /usr/bin/cmake -E make_directory /home/mddarr/projects/data_structures/test/gtest/src/gtest-build
	cd /home/mddarr/projects/data_structures/test && /usr/bin/cmake -E make_directory /home/mddarr/projects/data_structures/test/gtest
	cd /home/mddarr/projects/data_structures/test && /usr/bin/cmake -E make_directory /home/mddarr/projects/data_structures/test/gtest/tmp
	cd /home/mddarr/projects/data_structures/test && /usr/bin/cmake -E make_directory /home/mddarr/projects/data_structures/test/gtest/src/gtest-stamp
	cd /home/mddarr/projects/data_structures/test && /usr/bin/cmake -E make_directory /home/mddarr/projects/data_structures/test/gtest/src
	cd /home/mddarr/projects/data_structures/test && /usr/bin/cmake -E touch /home/mddarr/projects/data_structures/test/gtest/src/gtest-stamp/gtest-mkdir

test/gtest/src/gtest-stamp/gtest-download: test/gtest/src/gtest-stamp/gtest-urlinfo.txt
test/gtest/src/gtest-stamp/gtest-download: test/gtest/src/gtest-stamp/gtest-mkdir
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/mddarr/projects/data_structures/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Performing download step (download, verify and extract) for 'gtest'"
	cd /home/mddarr/projects/data_structures/test/gtest/src && /usr/bin/cmake -P /home/mddarr/projects/data_structures/test/gtest/src/gtest-stamp/download-gtest.cmake
	cd /home/mddarr/projects/data_structures/test/gtest/src && /usr/bin/cmake -P /home/mddarr/projects/data_structures/test/gtest/src/gtest-stamp/verify-gtest.cmake
	cd /home/mddarr/projects/data_structures/test/gtest/src && /usr/bin/cmake -P /home/mddarr/projects/data_structures/test/gtest/src/gtest-stamp/extract-gtest.cmake
	cd /home/mddarr/projects/data_structures/test/gtest/src && /usr/bin/cmake -E touch /home/mddarr/projects/data_structures/test/gtest/src/gtest-stamp/gtest-download

test/gtest/src/gtest-stamp/gtest-update: test/gtest/src/gtest-stamp/gtest-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/mddarr/projects/data_structures/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "No update step for 'gtest'"
	cd /home/mddarr/projects/data_structures/test && /usr/bin/cmake -E echo_append
	cd /home/mddarr/projects/data_structures/test && /usr/bin/cmake -E touch /home/mddarr/projects/data_structures/test/gtest/src/gtest-stamp/gtest-update

test/gtest/src/gtest-stamp/gtest-patch: test/gtest/src/gtest-stamp/gtest-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/mddarr/projects/data_structures/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "No patch step for 'gtest'"
	cd /home/mddarr/projects/data_structures/test && /usr/bin/cmake -E echo_append
	cd /home/mddarr/projects/data_structures/test && /usr/bin/cmake -E touch /home/mddarr/projects/data_structures/test/gtest/src/gtest-stamp/gtest-patch

test/gtest/src/gtest-stamp/gtest-configure: test/gtest/tmp/gtest-cfgcmd.txt
test/gtest/src/gtest-stamp/gtest-configure: test/gtest/src/gtest-stamp/gtest-update
test/gtest/src/gtest-stamp/gtest-configure: test/gtest/src/gtest-stamp/gtest-patch
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/mddarr/projects/data_structures/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Performing configure step for 'gtest'"
	cd /home/mddarr/projects/data_structures/test/gtest/src/gtest-build && /usr/bin/cmake "-GUnix Makefiles" /home/mddarr/projects/data_structures/test/gtest/src/gtest
	cd /home/mddarr/projects/data_structures/test/gtest/src/gtest-build && /usr/bin/cmake -E touch /home/mddarr/projects/data_structures/test/gtest/src/gtest-stamp/gtest-configure

test/gtest/src/gtest-stamp/gtest-build: test/gtest/src/gtest-stamp/gtest-configure
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/mddarr/projects/data_structures/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Performing build step for 'gtest'"
	cd /home/mddarr/projects/data_structures/test/gtest/src/gtest-build && $(MAKE)
	cd /home/mddarr/projects/data_structures/test/gtest/src/gtest-build && /usr/bin/cmake -E touch /home/mddarr/projects/data_structures/test/gtest/src/gtest-stamp/gtest-build

gtest: test/CMakeFiles/gtest
gtest: test/CMakeFiles/gtest-complete
gtest: test/gtest/src/gtest-stamp/gtest-install
gtest: test/gtest/src/gtest-stamp/gtest-mkdir
gtest: test/gtest/src/gtest-stamp/gtest-download
gtest: test/gtest/src/gtest-stamp/gtest-update
gtest: test/gtest/src/gtest-stamp/gtest-patch
gtest: test/gtest/src/gtest-stamp/gtest-configure
gtest: test/gtest/src/gtest-stamp/gtest-build
gtest: test/CMakeFiles/gtest.dir/build.make

.PHONY : gtest

# Rule to build all files generated by this target.
test/CMakeFiles/gtest.dir/build: gtest

.PHONY : test/CMakeFiles/gtest.dir/build

test/CMakeFiles/gtest.dir/clean:
	cd /home/mddarr/projects/data_structures/test && $(CMAKE_COMMAND) -P CMakeFiles/gtest.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/gtest.dir/clean

test/CMakeFiles/gtest.dir/depend:
	cd /home/mddarr/projects/data_structures && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mddarr/projects/data_structures /home/mddarr/projects/data_structures/test /home/mddarr/projects/data_structures /home/mddarr/projects/data_structures/test /home/mddarr/projects/data_structures/test/CMakeFiles/gtest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/gtest.dir/depend

