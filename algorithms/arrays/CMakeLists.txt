



ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)


set(find_cycle_array find_cycle_array.cpp)
ADD_EXECUTABLE(find_cycle_array ${find_cycle_array})

set(intersection intersection.cpp)
ADD_EXECUTABLE(intersection ${intersection})

set(overlapping_rectangles overlapping_rectangles.cpp)
ADD_EXECUTABLE(overlapping_rectangles ${overlapping_rectangles})


set(king_queen king_queen.cpp)
ADD_EXECUTABLE(king_queen ${king_queen})


set(repeating_numbers repeating_numbers.cpp)
ADD_EXECUTABLE(repeating_numbers ${repeating_numbers})


set(inplace_manipulation inplace_manipulation.cpp)
ADD_EXECUTABLE(inplace_manipulation ${inplace_manipulation})

set(lcs lcs.cpp)
ADD_EXECUTABLE(lcs ${lcs})

set(closest_product closest_product.cpp)
ADD_EXECUTABLE(closest_product ${closest_product})
