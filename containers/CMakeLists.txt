set(Container_SRCS
    	LinkedList.h
#	LinkedList.cpp
	Stack.h
	Queue.h
	Heap.h
	Matrix.h
	Vector.h
	Vector.cpp
	BinaryTree.h
	gay.h
)


ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)



# Declare the library
add_library(container STATIC
    ${Container_SRCS}
)

# Specify here the include directories exported
# by this library
target_include_directories(container PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)
