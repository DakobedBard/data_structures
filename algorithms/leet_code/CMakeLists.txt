
ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)

set(happy_number happy_number.cpp)
ADD_EXECUTABLE(happy_number ${happy_number})

set(rotate_image rotate_image.cpp)
ADD_EXECUTABLE(rotate_image ${rotate_image})

set(zero_out zero_out.cpp)
ADD_EXECUTABLE(zero_out ${zero_out})

set(rotatestring rotatestring.cpp)
ADD_EXECUTABLE(rotatestring ${rotatestring})

set(medianofarrays medianofarrays.cpp)
ADD_EXECUTABLE(medianofarrays ${medianofarrays})

set(convexhull convexhull.cpp)
ADD_EXECUTABLE(convexhull ${convexhull})
