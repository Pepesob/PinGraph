cmake_minimum_required(VERSION 3.0.0)
project(PinGraph VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(PIN_GRAPH_SOURCE 
                        screen/Screen.cpp
                        screen/SDLScreen.cpp 
                        graph/GraphValues2D.cpp 
                        drawable/Graph2DDrawer.cpp
                        )

set(PIN_GRAPH_INCLUDE   
                        "./graph"
                        "./screen"
                        "./drawable"
                        "./"
                        )

add_library(PinGraph ${PIN_GRAPH_SOURCE})

target_include_directories(PinGraph PUBLIC ${PIN_GRAPH_INCLUDE})



find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})
target_link_libraries(PinGraph ${SDL2_LIBRARIES})

# find_package(OpenGL REQUIRED)
# include_directories(${OPENGL_INCLUDE_DIR})
# target_link_libraries(PinGraph ${OPENGL_LIBRARIES})

