//
// Created by Kemal Holubeshen on 2018-11-30.
//

#ifndef LAB9_ENCHANTED_FAERIE_DOOR_HPP
#define LAB9_ENCHANTED_FAERIE_DOOR_HPP
#include "door.hpp"
#include <vector>
#include "enchanted_faerie_room.hpp"

class enchanted_faerie_door: public door {
public:
    enchanted_faerie_door(){
        color = "Brown";
    };
    string get_color() override {
        return color;
    }
    ~enchanted_faerie_door() override = default;
private:
    string color;
};


#endif //LAB9_ENCHANTED_FAERIE_DOOR_HPP
