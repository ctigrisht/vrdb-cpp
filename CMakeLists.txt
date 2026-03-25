cmake_minimum_required(VERSION 3.22.1)
project(vrdb)

set(CMAKE_CXX_STANDARD 20)

include_directories(${CMAKE_BINARY_DIR}/lib/imports)
# set(CMAKE_LIBRARY_PATH ${CMAKE_BINARY_DIR}/lib/imports)


set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build/bin)

file(GLOB_RECURSE ENDF6_SRC_NESTED
        ${PROJECT_SOURCE_DIR}/lib/vrdb/File/*.cpp)

add_executable(${PROJECT_NAME} main.cpp
        lib/vrdb/storage_engine/tds_streamer/tds_value_type.hpp
        lib/vrdb/core/table_schema.hpp
        lib/vrdb/storage_engine/tds_streamer/tds_string.cpp
        lib/vrdb/storage_engine/tds_streamer/tds_string.hpp
        lib/vrdb/storage_engine/async_io/async_fs.cpp
        lib/vrdb/storage_engine/async_io/async_fs.hpp)
#add_executable(${PROJECT_NAME}-tests ${CMAKE_BINARY_DIR}/tests/tests.cpp)
# set(CMAKE_BINARY_DIR build)

