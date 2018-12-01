//
// Created by Kemal Holubeshen on 2018-11-30.
//

#include "maze_game.hpp"


maze* maze_game::create_maze(maze_factory &m){
    return m.make_maze();

}