# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target test
test:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running tests..."
	/usr/bin/ctest --force-new-ctest-process $(ARGS)
.PHONY : test

# Special rule for the target test
test/fast: test

.PHONY : test/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/mddarr/projects/data_structures/CMakeFiles /home/mddarr/projects/data_structures/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/mddarr/projects/data_structures/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named histogram

# Build rule for target.
histogram: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 histogram
.PHONY : histogram

# fast build rule for target.
histogram/fast:
	$(MAKE) -f algorithms/CMakeFiles/histogram.dir/build.make algorithms/CMakeFiles/histogram.dir/build
.PHONY : histogram/fast

#=============================================================================
# Target rules for targets named makeChange

# Build rule for target.
makeChange: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 makeChange
.PHONY : makeChange

# fast build rule for target.
makeChange/fast:
	$(MAKE) -f algorithms/CMakeFiles/makeChange.dir/build.make algorithms/CMakeFiles/makeChange.dir/build
.PHONY : makeChange/fast

#=============================================================================
# Target rules for targets named lonely_integer

# Build rule for target.
lonely_integer: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 lonely_integer
.PHONY : lonely_integer

# fast build rule for target.
lonely_integer/fast:
	$(MAKE) -f algorithms/CMakeFiles/lonely_integer.dir/build.make algorithms/CMakeFiles/lonely_integer.dir/build
.PHONY : lonely_integer/fast

#=============================================================================
# Target rules for targets named twostackqueue

# Build rule for target.
twostackqueue: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 twostackqueue
.PHONY : twostackqueue

# fast build rule for target.
twostackqueue/fast:
	$(MAKE) -f algorithms/CMakeFiles/twostackqueue.dir/build.make algorithms/CMakeFiles/twostackqueue.dir/build
.PHONY : twostackqueue/fast

#=============================================================================
# Target rules for targets named all_subsets

# Build rule for target.
all_subsets: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 all_subsets
.PHONY : all_subsets

# fast build rule for target.
all_subsets/fast:
	$(MAKE) -f algorithms/CMakeFiles/all_subsets.dir/build.make algorithms/CMakeFiles/all_subsets.dir/build
.PHONY : all_subsets/fast

#=============================================================================
# Target rules for targets named aglorithm

# Build rule for target.
aglorithm: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 aglorithm
.PHONY : aglorithm

# fast build rule for target.
aglorithm/fast:
	$(MAKE) -f algorithms/CMakeFiles/aglorithm.dir/build.make algorithms/CMakeFiles/aglorithm.dir/build
.PHONY : aglorithm/fast

#=============================================================================
# Target rules for targets named nqueens

# Build rule for target.
nqueens: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 nqueens
.PHONY : nqueens

# fast build rule for target.
nqueens/fast:
	$(MAKE) -f algorithms/CMakeFiles/nqueens.dir/build.make algorithms/CMakeFiles/nqueens.dir/build
.PHONY : nqueens/fast

#=============================================================================
# Target rules for targets named lca

# Build rule for target.
lca: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 lca
.PHONY : lca

# fast build rule for target.
lca/fast:
	$(MAKE) -f algorithms/CMakeFiles/lca.dir/build.make algorithms/CMakeFiles/lca.dir/build
.PHONY : lca/fast

#=============================================================================
# Target rules for targets named running_median

# Build rule for target.
running_median: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 running_median
.PHONY : running_median

# fast build rule for target.
running_median/fast:
	$(MAKE) -f algorithms/CMakeFiles/running_median.dir/build.make algorithms/CMakeFiles/running_median.dir/build
.PHONY : running_median/fast

#=============================================================================
# Target rules for targets named icecream

# Build rule for target.
icecream: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 icecream
.PHONY : icecream

# fast build rule for target.
icecream/fast:
	$(MAKE) -f algorithms/CMakeFiles/icecream.dir/build.make algorithms/CMakeFiles/icecream.dir/build
.PHONY : icecream/fast

#=============================================================================
# Target rules for targets named search2D

# Build rule for target.
search2D: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 search2D
.PHONY : search2D

# fast build rule for target.
search2D/fast:
	$(MAKE) -f algorithms/CMakeFiles/search2D.dir/build.make algorithms/CMakeFiles/search2D.dir/build
.PHONY : search2D/fast

#=============================================================================
# Target rules for targets named level_order_bst

# Build rule for target.
level_order_bst: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 level_order_bst
.PHONY : level_order_bst

# fast build rule for target.
level_order_bst/fast:
	$(MAKE) -f algorithms/CMakeFiles/level_order_bst.dir/build.make algorithms/CMakeFiles/level_order_bst.dir/build
.PHONY : level_order_bst/fast

#=============================================================================
# Target rules for targets named nthstair

# Build rule for target.
nthstair: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 nthstair
.PHONY : nthstair

# fast build rule for target.
nthstair/fast:
	$(MAKE) -f algorithms/interview/CMakeFiles/nthstair.dir/build.make algorithms/interview/CMakeFiles/nthstair.dir/build
.PHONY : nthstair/fast

#=============================================================================
# Target rules for targets named compress

# Build rule for target.
compress: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 compress
.PHONY : compress

# fast build rule for target.
compress/fast:
	$(MAKE) -f algorithms/interview/CMakeFiles/compress.dir/build.make algorithms/interview/CMakeFiles/compress.dir/build
.PHONY : compress/fast

#=============================================================================
# Target rules for targets named largest_square

# Build rule for target.
largest_square: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 largest_square
.PHONY : largest_square

# fast build rule for target.
largest_square/fast:
	$(MAKE) -f algorithms/dynamic/CMakeFiles/largest_square.dir/build.make algorithms/dynamic/CMakeFiles/largest_square.dir/build
.PHONY : largest_square/fast

#=============================================================================
# Target rules for targets named closest_product

# Build rule for target.
closest_product: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 closest_product
.PHONY : closest_product

# fast build rule for target.
closest_product/fast:
	$(MAKE) -f algorithms/arrays/CMakeFiles/closest_product.dir/build.make algorithms/arrays/CMakeFiles/closest_product.dir/build
.PHONY : closest_product/fast

#=============================================================================
# Target rules for targets named lcs

# Build rule for target.
lcs: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 lcs
.PHONY : lcs

# fast build rule for target.
lcs/fast:
	$(MAKE) -f algorithms/arrays/CMakeFiles/lcs.dir/build.make algorithms/arrays/CMakeFiles/lcs.dir/build
.PHONY : lcs/fast

#=============================================================================
# Target rules for targets named find_cycle_array

# Build rule for target.
find_cycle_array: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 find_cycle_array
.PHONY : find_cycle_array

# fast build rule for target.
find_cycle_array/fast:
	$(MAKE) -f algorithms/arrays/CMakeFiles/find_cycle_array.dir/build.make algorithms/arrays/CMakeFiles/find_cycle_array.dir/build
.PHONY : find_cycle_array/fast

#=============================================================================
# Target rules for targets named intersection

# Build rule for target.
intersection: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 intersection
.PHONY : intersection

# fast build rule for target.
intersection/fast:
	$(MAKE) -f algorithms/arrays/CMakeFiles/intersection.dir/build.make algorithms/arrays/CMakeFiles/intersection.dir/build
.PHONY : intersection/fast

#=============================================================================
# Target rules for targets named king_queen

# Build rule for target.
king_queen: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 king_queen
.PHONY : king_queen

# fast build rule for target.
king_queen/fast:
	$(MAKE) -f algorithms/arrays/CMakeFiles/king_queen.dir/build.make algorithms/arrays/CMakeFiles/king_queen.dir/build
.PHONY : king_queen/fast

#=============================================================================
# Target rules for targets named overlapping_rectangles

# Build rule for target.
overlapping_rectangles: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 overlapping_rectangles
.PHONY : overlapping_rectangles

# fast build rule for target.
overlapping_rectangles/fast:
	$(MAKE) -f algorithms/arrays/CMakeFiles/overlapping_rectangles.dir/build.make algorithms/arrays/CMakeFiles/overlapping_rectangles.dir/build
.PHONY : overlapping_rectangles/fast

#=============================================================================
# Target rules for targets named inplace_manipulation

# Build rule for target.
inplace_manipulation: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 inplace_manipulation
.PHONY : inplace_manipulation

# fast build rule for target.
inplace_manipulation/fast:
	$(MAKE) -f algorithms/arrays/CMakeFiles/inplace_manipulation.dir/build.make algorithms/arrays/CMakeFiles/inplace_manipulation.dir/build
.PHONY : inplace_manipulation/fast

#=============================================================================
# Target rules for targets named repeating_numbers

# Build rule for target.
repeating_numbers: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 repeating_numbers
.PHONY : repeating_numbers

# fast build rule for target.
repeating_numbers/fast:
	$(MAKE) -f algorithms/arrays/CMakeFiles/repeating_numbers.dir/build.make algorithms/arrays/CMakeFiles/repeating_numbers.dir/build
.PHONY : repeating_numbers/fast

#=============================================================================
# Target rules for targets named connected_cells

# Build rule for target.
connected_cells: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 connected_cells
.PHONY : connected_cells

# fast build rule for target.
connected_cells/fast:
	$(MAKE) -f algorithms/graphs/CMakeFiles/connected_cells.dir/build.make algorithms/graphs/CMakeFiles/connected_cells.dir/build
.PHONY : connected_cells/fast

#=============================================================================
# Target rules for targets named bfs

# Build rule for target.
bfs: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 bfs
.PHONY : bfs

# fast build rule for target.
bfs/fast:
	$(MAKE) -f algorithms/graphs/CMakeFiles/bfs.dir/build.make algorithms/graphs/CMakeFiles/bfs.dir/build
.PHONY : bfs/fast

#=============================================================================
# Target rules for targets named AdjMatrix

# Build rule for target.
AdjMatrix: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 AdjMatrix
.PHONY : AdjMatrix

# fast build rule for target.
AdjMatrix/fast:
	$(MAKE) -f algorithms/graphs/CMakeFiles/AdjMatrix.dir/build.make algorithms/graphs/CMakeFiles/AdjMatrix.dir/build
.PHONY : AdjMatrix/fast

#=============================================================================
# Target rules for targets named adjlist

# Build rule for target.
adjlist: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 adjlist
.PHONY : adjlist

# fast build rule for target.
adjlist/fast:
	$(MAKE) -f algorithms/graphs/CMakeFiles/adjlist.dir/build.make algorithms/graphs/CMakeFiles/adjlist.dir/build
.PHONY : adjlist/fast

#=============================================================================
# Target rules for targets named shortest_path

# Build rule for target.
shortest_path: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 shortest_path
.PHONY : shortest_path

# fast build rule for target.
shortest_path/fast:
	$(MAKE) -f algorithms/graphs/test/CMakeFiles/shortest_path.dir/build.make algorithms/graphs/test/CMakeFiles/shortest_path.dir/build
.PHONY : shortest_path/fast

#=============================================================================
# Target rules for targets named dfs

# Build rule for target.
dfs: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 dfs
.PHONY : dfs

# fast build rule for target.
dfs/fast:
	$(MAKE) -f algorithms/graphs/test/CMakeFiles/dfs.dir/build.make algorithms/graphs/test/CMakeFiles/dfs.dir/build
.PHONY : dfs/fast

#=============================================================================
# Target rules for targets named traversal

# Build rule for target.
traversal: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 traversal
.PHONY : traversal

# fast build rule for target.
traversal/fast:
	$(MAKE) -f algorithms/graphs/test/CMakeFiles/traversal.dir/build.make algorithms/graphs/test/CMakeFiles/traversal.dir/build
.PHONY : traversal/fast

#=============================================================================
# Target rules for targets named invert

# Build rule for target.
invert: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 invert
.PHONY : invert

# fast build rule for target.
invert/fast:
	$(MAKE) -f algorithms/trees/CMakeFiles/invert.dir/build.make algorithms/trees/CMakeFiles/invert.dir/build
.PHONY : invert/fast

#=============================================================================
# Target rules for targets named minheight

# Build rule for target.
minheight: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 minheight
.PHONY : minheight

# fast build rule for target.
minheight/fast:
	$(MAKE) -f algorithms/trees/CMakeFiles/minheight.dir/build.make algorithms/trees/CMakeFiles/minheight.dir/build
.PHONY : minheight/fast

#=============================================================================
# Target rules for targets named sumklargest

# Build rule for target.
sumklargest: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 sumklargest
.PHONY : sumklargest

# fast build rule for target.
sumklargest/fast:
	$(MAKE) -f algorithms/trees/CMakeFiles/sumklargest.dir/build.make algorithms/trees/CMakeFiles/sumklargest.dir/build
.PHONY : sumklargest/fast

#=============================================================================
# Target rules for targets named levelorder

# Build rule for target.
levelorder: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 levelorder
.PHONY : levelorder

# fast build rule for target.
levelorder/fast:
	$(MAKE) -f algorithms/trees/CMakeFiles/levelorder.dir/build.make algorithms/trees/CMakeFiles/levelorder.dir/build
.PHONY : levelorder/fast

#=============================================================================
# Target rules for targets named ksmallest

# Build rule for target.
ksmallest: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 ksmallest
.PHONY : ksmallest

# fast build rule for target.
ksmallest/fast:
	$(MAKE) -f algorithms/trees/CMakeFiles/ksmallest.dir/build.make algorithms/trees/CMakeFiles/ksmallest.dir/build
.PHONY : ksmallest/fast

#=============================================================================
# Target rules for targets named rotate_image

# Build rule for target.
rotate_image: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 rotate_image
.PHONY : rotate_image

# fast build rule for target.
rotate_image/fast:
	$(MAKE) -f algorithms/leet_code/CMakeFiles/rotate_image.dir/build.make algorithms/leet_code/CMakeFiles/rotate_image.dir/build
.PHONY : rotate_image/fast

#=============================================================================
# Target rules for targets named happy_number

# Build rule for target.
happy_number: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 happy_number
.PHONY : happy_number

# fast build rule for target.
happy_number/fast:
	$(MAKE) -f algorithms/leet_code/CMakeFiles/happy_number.dir/build.make algorithms/leet_code/CMakeFiles/happy_number.dir/build
.PHONY : happy_number/fast

#=============================================================================
# Target rules for targets named medianofarrays

# Build rule for target.
medianofarrays: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 medianofarrays
.PHONY : medianofarrays

# fast build rule for target.
medianofarrays/fast:
	$(MAKE) -f algorithms/leet_code/CMakeFiles/medianofarrays.dir/build.make algorithms/leet_code/CMakeFiles/medianofarrays.dir/build
.PHONY : medianofarrays/fast

#=============================================================================
# Target rules for targets named convexhull

# Build rule for target.
convexhull: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 convexhull
.PHONY : convexhull

# fast build rule for target.
convexhull/fast:
	$(MAKE) -f algorithms/leet_code/CMakeFiles/convexhull.dir/build.make algorithms/leet_code/CMakeFiles/convexhull.dir/build
.PHONY : convexhull/fast

#=============================================================================
# Target rules for targets named zero_out

# Build rule for target.
zero_out: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 zero_out
.PHONY : zero_out

# fast build rule for target.
zero_out/fast:
	$(MAKE) -f algorithms/leet_code/CMakeFiles/zero_out.dir/build.make algorithms/leet_code/CMakeFiles/zero_out.dir/build
.PHONY : zero_out/fast

#=============================================================================
# Target rules for targets named rotatestring

# Build rule for target.
rotatestring: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 rotatestring
.PHONY : rotatestring

# fast build rule for target.
rotatestring/fast:
	$(MAKE) -f algorithms/leet_code/CMakeFiles/rotatestring.dir/build.make algorithms/leet_code/CMakeFiles/rotatestring.dir/build
.PHONY : rotatestring/fast

#=============================================================================
# Target rules for targets named lines

# Build rule for target.
lines: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 lines
.PHONY : lines

# fast build rule for target.
lines/fast:
	$(MAKE) -f algorithms/geometry/CMakeFiles/lines.dir/build.make algorithms/geometry/CMakeFiles/lines.dir/build
.PHONY : lines/fast

#=============================================================================
# Target rules for targets named graph

# Build rule for target.
graph: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 graph
.PHONY : graph

# fast build rule for target.
graph/fast:
	$(MAKE) -f graphs/CMakeFiles/graph.dir/build.make graphs/CMakeFiles/graph.dir/build
.PHONY : graph/fast

#=============================================================================
# Target rules for targets named container

# Build rule for target.
container: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 container
.PHONY : container

# fast build rule for target.
container/fast:
	$(MAKE) -f containers/CMakeFiles/container.dir/build.make containers/CMakeFiles/container.dir/build
.PHONY : container/fast

#=============================================================================
# Target rules for targets named gtest

# Build rule for target.
gtest: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 gtest
.PHONY : gtest

# fast build rule for target.
gtest/fast:
	$(MAKE) -f test/CMakeFiles/gtest.dir/build.make test/CMakeFiles/gtest.dir/build
.PHONY : gtest/fast

#=============================================================================
# Target rules for targets named testcontainers

# Build rule for target.
testcontainers: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 testcontainers
.PHONY : testcontainers

# fast build rule for target.
testcontainers/fast:
	$(MAKE) -f test/testcontainers/CMakeFiles/testcontainers.dir/build.make test/testcontainers/CMakeFiles/testcontainers.dir/build
.PHONY : testcontainers/fast

#=============================================================================
# Target rules for targets named testgraphs

# Build rule for target.
testgraphs: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 testgraphs
.PHONY : testgraphs

# fast build rule for target.
testgraphs/fast:
	$(MAKE) -f test/testgraphs/CMakeFiles/testgraphs.dir/build.make test/testgraphs/CMakeFiles/testgraphs.dir/build
.PHONY : testgraphs/fast

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... test"
	@echo "... edit_cache"
	@echo "... histogram"
	@echo "... makeChange"
	@echo "... lonely_integer"
	@echo "... twostackqueue"
	@echo "... all_subsets"
	@echo "... aglorithm"
	@echo "... nqueens"
	@echo "... lca"
	@echo "... running_median"
	@echo "... icecream"
	@echo "... search2D"
	@echo "... level_order_bst"
	@echo "... nthstair"
	@echo "... compress"
	@echo "... largest_square"
	@echo "... closest_product"
	@echo "... lcs"
	@echo "... find_cycle_array"
	@echo "... intersection"
	@echo "... king_queen"
	@echo "... overlapping_rectangles"
	@echo "... inplace_manipulation"
	@echo "... repeating_numbers"
	@echo "... connected_cells"
	@echo "... bfs"
	@echo "... AdjMatrix"
	@echo "... adjlist"
	@echo "... shortest_path"
	@echo "... dfs"
	@echo "... traversal"
	@echo "... invert"
	@echo "... minheight"
	@echo "... sumklargest"
	@echo "... levelorder"
	@echo "... ksmallest"
	@echo "... rotate_image"
	@echo "... happy_number"
	@echo "... medianofarrays"
	@echo "... convexhull"
	@echo "... zero_out"
	@echo "... rotatestring"
	@echo "... lines"
	@echo "... graph"
	@echo "... container"
	@echo "... gtest"
	@echo "... testcontainers"
	@echo "... testgraphs"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

