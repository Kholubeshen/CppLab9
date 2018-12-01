//
// Created by Kemal Holubeshen on 2018-11-30.
//

#ifndef LAB9_MAZE_GAME_HPP
#define LAB9_MAZE_GAME_HPP
#include "maze_factory.hpp"

class maze_game {
public:
    maze* create_maze(maze_factory &);
};


#endif //LAB9_MAZE_GAME_HPP
