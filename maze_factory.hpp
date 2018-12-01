//
// Created by Kemal Holubeshen on 2018-11-30.
//



#ifndef LAB9_MAZE_FACTORY_HPP
#define LAB9_MAZE_FACTORY_HPP

#include "wall.hpp"
#include "door.hpp"
#include "room.hpp"

class maze;

class maze_factory {
public:
    virtual maze*         make_maze() = 0;
    virtual wall*         make_wall() = 0;
    virtual room*         make_room() = 0;
    virtual door*         make_door(room*, room*) = 0;
};

#endif //LAB9_MAZE_FACTORY_HPP
