set(Container_SRCS
    LinkedList.h
	lltest.cpp
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
