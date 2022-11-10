cmake_minimum_required(VERSION 3.12)

project(ColourClasses VERSION 1.0 LANGUAGES CXX )


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

include_directories(${CMAKE_SOURCE_DIR}/include/)

add_executable(Automatic)
target_sources(Automatic PRIVATE ${CMAKE_SOURCE_DIR}/src/Auto.cpp ${CMAKE_SOURCE_DIR}/src/Colour.cpp ${CMAKE_SOURCE_DIR}/include/Colour.h)


add_executable(Dynamic)
target_sources(Dynamic PRIVATE ${CMAKE_SOURCE_DIR}/src/Dynamic.cpp ${CMAKE_SOURCE_DIR}/src/Colour.cpp ${CMAKE_SOURCE_DIR}/include/Colour.h)

add_executable(SmartPtr)
target_sources(SmartPtr PRIVATE ${CMAKE_SOURCE_DIR}/src/Smart.cpp ${CMAKE_SOURCE_DIR}/src/Colour.cpp ${CMAKE_SOURCE_DIR}/include/Colour.h)

add_executable(Colour)
target_sources(Colour PRIVATE ${CMAKE_SOURCE_DIR}/src/main.cpp ${CMAKE_SOURCE_DIR}/src/Colour.cpp ${CMAKE_SOURCE_DIR}/include/Colour.h)
