

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)



set(bfs bfs.cpp)
ADD_EXECUTABLE(bfs ${bfs})
target_link_libraries(bfs graph container)

set(connected_cells connected_cells.cpp)
ADD_EXECUTABLE(connected_cells ${connected_cells})
target_link_libraries(connected_cells graph container)


#set(AdjList AdjList.cpp)
#ADD_EXECUTABLE(AdjList ${AdjList})
#target_link_libraries(AdjList graph container)

set(AdjMatrix AdjMatrix.cpp)
ADD_EXECUTABLE(AdjMatrix ${AdjMatrix})

set(Adjlisttest AdjMatrix.cpp)
ADD_EXECUTABLE(adjlist ${Adjlisttest})
target_link_libraries(adjlist graph container)

add_subdirectory(test)
