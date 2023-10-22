cmake_minimum_required(VERSION 3.17)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(TinyTetris VERSION 1.0)

find_package(Curses  REQUIRED)

# Use the project root to find includes
include_directories(${PROJECT_SOURCE_DIR})

add_executable(TinyTetris tinytetris-commented.cpp)

target_link_libraries(TinyTetris PRIVATE ${CURSES_LIBRARIES})
