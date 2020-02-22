cmake_minimum_required(VERSION 3.5)

project(laser-cutting LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(laser-cutting src/main.cpp src/svg.cpp src/image.cpp src/shape.cpp)
