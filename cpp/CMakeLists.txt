cmake_minimum_required(VERSION 3.26)
project(cpp)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)

add_executable(cpp
        main.cpp
        func.h
        array/search.cpp
        List/list.cpp
)
