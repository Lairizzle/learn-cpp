cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_COMPILE_WARNING_AS_ERROR ON)

project(a VERSION 1.0)
file(GLOB_RECURSE SRC_FILES src/*.cpp)
add_executable(a ${SRC_FILES})
target_include_directories(a PUBLIC ~/cppincludes/plog-master/include/)

