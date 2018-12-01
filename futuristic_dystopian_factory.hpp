//
// Created by Kemal Holubeshen on 2018-11-30.
//

#ifndef LAB9_FUTURISTIC_DYSTOPIAN_FACTORY_HPP
#define LAB9_FUTURISTIC_DYSTOPIAN_FACTORY_HPP

#include "maze_factory.hpp"
#include "futuristic_dystopian_room.hpp"
#include "futuristic_dystopian_door.hpp"
#include "futuristic_dystopian_wall.hpp"
#include "futuristic_dystopian_maze.hpp"

class futuristic_dystopian_factory: public maze_factory {
    maze* make_maze() override{
        return new futuristic_dystopian_maze(this);
    }
    door* make_door(room* r1, room* r2) override {
        delete(r1);
        delete(r2);
        return new futuristic_dystopian_door;

    }
    wall* make_wall() override {
        return new futuristic_dystopian_wall;
    }
    room* make_room() override {
        return new futuristic_dystopian_room;
    }

};

#endif //LAB9_FUTURISTIC_DYSTOPIAN_FACTORY_HPP
