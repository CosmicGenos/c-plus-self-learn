cmake_minimum_required(VERSION 4.2)
project(c_plus_self_learn)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(c-plus-self-learn)

add_executable(c_plus_self_learn
        c-plus-self-learn/c-plus-self-learn/src/main.cpp
        c-plus-self-learn/cpp-oop/src/main.cpp
        c-plus-self-learn/cpp-oop-1/src/main.cpp
        c-plus-self-learn/GeoMath/src/main.cpp)
