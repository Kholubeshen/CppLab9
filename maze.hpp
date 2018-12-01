//
// Created by Kemal Holubeshen on 2018-11-30.
//


#ifndef LAB9_MAZE_HPP
#define LAB9_MAZE_HPP

#include "maze_factory.hpp"

using namespace std;

class maze {
public:
    virtual void get_desc() = 0;
    virtual ~maze() = default;
    virtual void add_room(maze_factory* mf) = 0;
    virtual void add_wall(maze_factory* mf) = 0;
    virtual void add_door(maze_factory* mf) = 0;
};

#endif //LAB9_MAZE_HPP
