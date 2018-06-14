



ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)


set(lines lines.cpp)
ADD_EXECUTABLE(lines ${lines})
target_link_libraries(lines container)



