cmake_minimum_required(VERSION 3.5)

project(CPP_CODEWARS)
add_executable(zero_fuel zero_fuel.cpp)
add_executable(string_to_number string_to_number.cpp)
add_executable(rock_paper_scissors rock_paper_scissors.cpp)
add_executable(how_good_are_you_really how_good_are_you_really.cpp)
add_executable(grass_hopper_summation grass_hopper_summation.cpp)

set(CMAKE_CXX_STANDARD 11)
set(EXECUTABLE_OUTPUT_PATH "${PROJECT_SOURCE_DIR}/bin")