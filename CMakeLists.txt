cmake_minimum_required(VERSION 3.23.0)
project(vscode_cmake_template)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS "-pedantic-errors -Wall -Wextra")
set(CMAKE_CXX_FLAGS_DEBUG "-g")
set(CMAKE_CXX_FLAGS_RELEASE "-O2")

include(FetchContent)
include(CTest)

add_subdirectory(src)
add_subdirectory(tests)
