
ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)



set(levelorder levelorder.cpp)
ADD_EXECUTABLE(levelorder ${levelorder})



set(invert invert_binary_tree.cpp)
ADD_EXECUTABLE(invert ${invert})

set(minheight minheight.cpp)
ADD_EXECUTABLE(minheight ${minheight})
target_link_libraries(minheight container)

set(sumklargest sumklargest.cpp)
ADD_EXECUTABLE(sumklargest ${sumklargest})
target_link_libraries(sumklargest container)

set(ksmallest ksmallest.cpp)
ADD_EXECUTABLE(ksmallest ${ksmallest})
target_link_libraries(ksmallest container)
