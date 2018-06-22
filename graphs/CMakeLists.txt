set(libgraph_SRCS
   
    	lltest.cpp
	Graph.h
	Graph.cpp
	
	AdjList.h
	AdjMatrix.h
	MST.h
	
	Coloring.h
	

)

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)


# Declare the library
add_library(graph STATIC
    ${libgraph_SRCS}
)

target_link_libraries(graph
    container
)

# Specify here the include directories exported
# by this library
target_include_directories(graph PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)
