# We will always try to use a version > 3.1 if avaliable
cmake_minimum_required(VERSION 3.2)


# name of the project It is best to use something different from the exe name
project(OverLoadNew_build)

# Here we set the C++ standard to use
set(CMAKE_CXX_STANDARD 17)
if (MSVC)
    add_compile_options(/W3 ) # /W4 is too noisy
else()
    add_compile_options(-Wall -Wextra -pedantic )#-Werror)
endif()
# add include paths
# Now we add our target executable and the file it is built from.
add_executable(OverloadNew)
target_sources(OverloadNew PRIVATE ClassNew.h CustomNew.h TerminalColours.h new.cpp)
