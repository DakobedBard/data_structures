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

set(icecream icecream.cpp)
ADD_EXECUTABLE(icecream ${icecream})
target_link_libraries(icecream  container)

set(twostackqueue twostack_queue.cpp)
ADD_EXECUTABLE(twostackqueue ${twostackqueue})
target_link_libraries(twostackqueue  container)

set(running_median running_median.cpp)
ADD_EXECUTABLE(running_median ${running_median})
target_link_libraries(running_median  container)

set(lonely_integer lonely_integer.cpp)
ADD_EXECUTABLE(lonely_integer ${lonely_integer})

set(makeChange makeChange.cpp)
ADD_EXECUTABLE(makeChange ${makeChange})

set(histogram histogram.cpp)
ADD_EXECUTABLE(histogram ${histogram})

add_subdirectory(interview)
add_subdirectory(dynamic)
add_subdirectory(arrays)
add_subdirectory(graphs)
add_subdirectory(trees)
add_subdirectory(leet_code)
