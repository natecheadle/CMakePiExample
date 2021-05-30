project(TestCrossCompile)

add_executable(${PROJECT_NAME} MATH_Test.cpp)
target_link_libraries(${PROJECT_NAME} gtest gtest_main pthread)
add_test(NAME ${PROJECT_NAME}_test COMMAND ${PROJECT_NAME})
