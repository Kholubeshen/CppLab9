cmake_minimum_required(VERSION 3.12)
project(Lab9)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lab9 maze_factory.hpp wall.hpp door.hpp room.hpp enchanted_faerie_factory.hpp futuristic_dystopian_factory.hpp enchanted_faerie_door.hpp enchanted_faerie_room.hpp enchanted_faerie_wall.hpp futuristic_dystopian_door.hpp futuristic_dystopian_wall.hpp futuristic_dystopian_room.hpp maze_game.cpp maze_game.hpp maze.hpp driver.cpp futuristic_dystopian_maze.hpp enchanted_faerie_maze.hpp)
set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic")