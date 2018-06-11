file(GLOB SRCS *.cpp)

ADD_EXECUTABLE(testgraphs ${SRCS})

TARGET_LINK_LIBRARIES(testgraphs
    container
	graph
    libgtest
    libgmock
)

add_test(NAME testgraphs
         COMMAND testgraphs)
