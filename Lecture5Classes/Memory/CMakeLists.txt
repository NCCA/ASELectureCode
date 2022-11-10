cmake_minimum_required(VERSION 3.12)
project(MemoryBuild)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

add_executable(Memory)
include_directories(${CMAKE_SOURCE_DIR}/include)

target_sources(Memory PRIVATE ${CMAKE_SOURCE_DIR}/src/Mem.cpp 
                              ${CMAKE_SOURCE_DIR}/src/MemTest.cpp
                              ${CMAKE_SOURCE_DIR}/include/Mem.h
)
