cmake_minimum_required(VERSION 3.10)
project(EventManager)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(EventManager main.cpp EventManager.cpp)

enable_testing()
add_subdirectory(tests)
