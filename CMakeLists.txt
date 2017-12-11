cmake_minimum_required(VERSION 3.4)
set(CMAKE_CXX_STANDARD 11)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(vector_tests vector_tests.cpp vector3d.cpp)

target_link_libraries(vector_tests ${GTEST_LIBRARIES} pthread)
