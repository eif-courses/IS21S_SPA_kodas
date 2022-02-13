cmake_minimum_required(VERSION 3.21)
project(IS21S_SPA_kodas)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory("${PROJECT_SOURCE_DIR}/introduction" "${PROJECT_SOURCE_DIR}/introduction/output")

add_executable(IS21S_SPA_kodas main.cpp)
