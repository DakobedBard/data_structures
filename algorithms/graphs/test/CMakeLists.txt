

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)



set(dfs dfs.cpp)
ADD_EXECUTABLE(dfs ${dfs})
target_link_libraries(dfs graph container)


set(traversal traversal.cpp)
ADD_EXECUTABLE(traversal ${traversal})
target_link_libraries(traversal graph container)

set(shortest_path shortest_path.cpp)
ADD_EXECUTABLE(shortest_path ${shortest_path})
target_link_libraries(shortest_path graph container)
