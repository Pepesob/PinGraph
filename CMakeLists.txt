cmake_minimum_required(VERSION 3.0.0)
project(PinGraph VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)


find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

FILE(GLOB_RECURSE MyCSources *.cpp)

# add_executable(PinGraph ${MyCSources})

add_executable(PinGraph src/main.cpp src/screen/Screen.cpp src/screen/Screen.cpp src/screen/SDLScreen.cpp)


target_link_libraries(PinGraph ${SDL2_LIBRARIES})

