set(CMAKE_MINIMUM_REQUIRED_VERSION 3.20)
set (CMAKE_CXX_STANDARD 17)

project(hello)

add_executable(hello main.cpp)

add_subdirectory("test")