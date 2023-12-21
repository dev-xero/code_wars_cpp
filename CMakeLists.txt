cmake_minimum_required(VERSION 3.5)

project(CPP_CODEWARS)

add_executable(zero_fuel 20.12.23/zero_fuel.cpp)
add_executable(string_to_number 20.12.23/string_to_number.cpp)
add_executable(rock_paper_scissors 20.12.23/rock_paper_scissors.cpp)
add_executable(grass_hopper_summation 20.12.23/grass_hopper_summation.cpp)

add_executable(clock 21.12.23/clock.cpp)
add_executable(quarter_of 21.12.23/quarter_of.cpp)
add_executable(sum_positives 21.12.23/sum_positives.cpp)
add_executable(how_good_are_you_really 21.12.23/how_good_are_you_really.cpp)

set(CMAKE_CXX_STANDARD 11)
set(EXECUTABLE_OUTPUT_PATH "${PROJECT_SOURCE_DIR}/bin")