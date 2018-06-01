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

