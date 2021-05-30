set(CMAKE_MINIMUM_REQUIRED_VERSION 3.20)
set (CMAKE_CXX_STANDARD 17)

project(hello)

add_executable(hello main.cpp)

add_subdirectory("test")

set(INSTALL_DIR ${CMAKE_SOURCE_DIR}/install)

install(TARGETS hello DESTINATION ${INSTALL_DIR})
INSTALL(FILES ${CMAKE_CURRENT_BINARY_DIR}/test/TestCrossCompile DESTINATION ${INSTALL_DIR})