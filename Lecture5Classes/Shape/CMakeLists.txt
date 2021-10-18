cmake_minimum_required(VERSION 3.12)
project(ShapeBuild)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

add_executable(Shape)
include_directories(${CMAKE_SOURCE_DIR}/include)

target_sources(Shape PRIVATE ${CMAKE_SOURCE_DIR}/src/main.cpp 
                              ${CMAKE_SOURCE_DIR}/src/Shape.cpp
                              ${CMAKE_SOURCE_DIR}/include/Shape.h
)

add_executable(Rectangle)

target_sources(Rectangle PRIVATE ${CMAKE_SOURCE_DIR}/src/RectangleMain.cpp 
                              ${CMAKE_SOURCE_DIR}/src/Shape.cpp
                              ${CMAKE_SOURCE_DIR}/src/Rectangle.cpp
                              ${CMAKE_SOURCE_DIR}/include/Shape.h
                              ${CMAKE_SOURCE_DIR}/include/Rectangle.h
)
