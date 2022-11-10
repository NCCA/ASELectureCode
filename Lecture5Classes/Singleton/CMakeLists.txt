cmake_minimum_required(VERSION 3.12)

project(SingletonBuild VERSION 1.0 LANGUAGES CXX )


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

include_directories(${CMAKE_SOURCE_DIR}/include/)

add_executable(Singleton)
target_sources(Singleton PRIVATE ${CMAKE_SOURCE_DIR}/src/Test.cpp ${CMAKE_SOURCE_DIR}/src/Global.cpp ${CMAKE_SOURCE_DIR}/include/Global.h)
