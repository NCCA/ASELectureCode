cmake_minimum_required(VERSION 3.12)

project(MemBuild VERSION 1.0 LANGUAGES CXX )


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

include_directories(${CMAKE_SOURCE_DIR}/include/)

add_executable(Memory)
target_sources(Memory PRIVATE ${CMAKE_SOURCE_DIR}/src/Mem.cpp ${CMAKE_SOURCE_DIR}/src/MemTest.cpp ${CMAKE_SOURCE_DIR}/include/Mem.h)
