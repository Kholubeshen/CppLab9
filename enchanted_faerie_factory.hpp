//
// Created by Kemal Holubeshen on 2018-11-30.
//

#ifndef LAB9_ENCHANTED_FAERIE_LAND_HPP
#define LAB9_ENCHANTED_FAERIE_LAND_HPP
#include "maze_factory.hpp"
#include "enchanted_faerie_door.hpp"
#include "enchanted_faerie_wall.hpp"
#include "enchanted_faerie_room.hpp"
#include "enchanted_faerie_maze.hpp"

class enchanted_faerie_factory: public maze_factory{
public:
    maze* make_maze() override {
        return new enchanted_faerie_maze(this);
    }
    door* make_door(room* r1, room* r2) override {
        delete(r1);
        delete(r2);
        return new enchanted_faerie_door();
    }
    wall* make_wall() override {
        return new enchanted_faerie_wall();
    }
    room* make_room() override {
        return new enchanted_faerie_room();
    }
};


#endif //LAB9_ENCHANTED_FAERIE_LAND_HPP
