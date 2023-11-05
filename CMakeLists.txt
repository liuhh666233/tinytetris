cmake_minimum_required(VERSION 3.17)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(TinyTetris VERSION 1.0)

find_package(Curses  REQUIRED)
find_package(SFML COMPONENTS graphics window system audio REQUIRED) # Look for SFML

# Use the project root to find includes
include_directories(${PROJECT_SOURCE_DIR})

add_executable(TinyTetris main.cpp)

add_library(TetrisLib tetris.cpp tetris.hpp)

target_include_directories(TetrisLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(TinyTetris PRIVATE ${CURSES_LIBRARIES})

target_link_libraries(TinyTetris PRIVATE sfml-graphics sfml-window sfml-system sfml-audio)

target_link_libraries(TinyTetris PRIVATE TetrisLib)

