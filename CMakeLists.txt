cmake_minimum_required(VERSION 3.23)
project(maze_project)

set(CMAKE_CXX_STANDARD 14)

add_executable(maze_project main.cpp maze.h FileInput.cpp output.cpp solve.cpp)
