cmake_minimum_required(VERSION 3.22.1)
project(vrdb)

set(CMAKE_CXX_STANDARD 20)

include_directories(${CMAKE_BINARY_DIR}/lib/imports)
include_directories(${PROJECT_SOURCE_DIR}/lib/imports/tdx-lib/lib/imports)
# set(CMAKE_LIBRARY_PATH ${CMAKE_BINARY_DIR}/lib/imports)

#file(GLOB_RECURSE TDXLIB /lib/imports/tdx-lib/*.cpp)
file(GLOB_RECURSE INTERNAL ${CMAKE_BINARY_DIR}/lib/internal/*.cpp)
file(GLOB_RECURSE MODELS ${CMAKE_BINARY_DIR}/models/*.cpp)

### tdx-lib link
file(GLOB_RECURSE TDX_MODELS ${CMAKE_BINARY_DIR}/lib/imports/tdx-lib/models/*.cpp )
file(GLOB_RECURSE TDX_LIB ${CMAKE_BINARY_DIR}/lib/imports/tdx-lib/lib/internal/*.cpp )

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build/bin)

add_executable(
        ${PROJECT_NAME}
        main.cpp
        ${TDXLIB} ${INTERNAL} ${TDX_MODELS} ${TDX_LIB})
add_executable(
        ${PROJECT_NAME}-tests
        ${CMAKE_BINARY_DIR}/tests/tests.cpp
        ${TDXLIB} ${INTERNAL} ${TDX_MODELS} ${TDX_LIB})
# set(CMAKE_BINARY_DIR build)

