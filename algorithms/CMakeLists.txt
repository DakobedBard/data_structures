set(SRCS stack_test.cpp)




ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)

set(SRCS stack_test.cpp)
ADD_EXECUTABLE(aglorithm ${SRCS})

target_link_libraries(aglorithm graph container)


set(all_subsets_SRC all_subsets.cpp)
ADD_EXECUTABLE(all_subsets ${all_subsets_SRC})
target_link_libraries(all_subsets graph container)


set(lca lca.cpp)
ADD_EXECUTABLE(lca ${lca})
target_link_libraries(lca  container)


set(nqueens nqueens.cpp)
ADD_EXECUTABLE(nqueens ${nqueens})
target_link_libraries(nqueens  container)


set(search2D search2D.cpp)
ADD_EXECUTABLE(search2D ${search2D})
target_link_libraries(search2D  container)

set(level_order_bst level_order_bst.cpp)
ADD_EXECUTABLE(level_order_bst ${level_order_bst})
target_link_libraries(level_order_bst  container)


add_subdirectory(interview)
add_subdirectory(dynamic)
add_subdirectory(arrays)
