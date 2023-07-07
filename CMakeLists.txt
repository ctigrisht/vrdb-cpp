cmake_minimum_required(VERSION 3.22.1)
project(vrdb)

set(CMAKE_CXX_STANDARD 20)

include_directories(${CMAKE_BINARY_DIR}/lib/imports)
# set(CMAKE_LIBRARY_PATH ${CMAKE_BINARY_DIR}/lib/imports)


set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build/bin)

add_executable(${PROJECT_NAME} main.cpp)
add_executable(${PROJECT_NAME}-tests ${CMAKE_BINARY_DIR}/tests/tests.cpp)
# set(CMAKE_BINARY_DIR build)