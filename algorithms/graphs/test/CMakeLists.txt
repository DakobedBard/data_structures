

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)



set(dfs dfs.cpp)
ADD_EXECUTABLE(dfs ${dfs})
target_link_libraries(dfs graph container)

