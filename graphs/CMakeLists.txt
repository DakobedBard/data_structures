set(libbar_SRCS
   
    	lltest.cpp
	Graph.h
	Graph.cpp
	MST.h
	AdjList.h
	Coloring.h

)

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)


# Declare the library
add_library(graph STATIC
    ${libbar_SRCS}
)

target_link_libraries(graph
    container
)

# Specify here the include directories exported
# by this library
target_include_directories(graph PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)
