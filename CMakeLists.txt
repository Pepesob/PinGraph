cmake_minimum_required(VERSION 3.0.0)
project(Main VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(${PROJECT_NAME} main.cpp)


add_subdirectory(src)
target_link_libraries(${PROJECT_NAME} PinGraph)


