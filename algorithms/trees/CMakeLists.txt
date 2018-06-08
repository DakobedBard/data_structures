
ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)



set(levelorder levelorder.cpp)
ADD_EXECUTABLE(levelorder ${levelorder})



set(invert invert_binary_tree.cpp)
ADD_EXECUTABLE(invert ${invert})


