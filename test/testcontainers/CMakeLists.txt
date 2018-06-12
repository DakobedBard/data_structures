file(GLOB SRCS *.cpp)

ADD_EXECUTABLE(testcontainers ${SRCS})

TARGET_LINK_LIBRARIES(testcontainers
    container
	graph
    libgtest
    libgmock
)

add_test(NAME testcontainers
         COMMAND testcontainers)
