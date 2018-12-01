//
// Created by Kemal Holubeshen on 2018-11-30.
//

#ifndef LAB9_ENCHANTED_FAERIE_WALL_HPP
#define LAB9_ENCHANTED_FAERIE_WALL_HPP
#include "wall.hpp"

class enchanted_faerie_wall: public wall {
public:
    enchanted_faerie_wall() {
        color = "Dark Green";
    }
    string get_color() override {
        return color;
    }
    ~enchanted_faerie_wall() override = default;
private:
    string color;
};


#endif //LAB9_ENCHANTED_FAERIE_WALL_HPP
