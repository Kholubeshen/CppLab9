//
// Created by Kemal Holubeshen on 2018-11-30.
//

#ifndef LAB9_ENCHANTED_FAERIE_ROOM_HPP
#define LAB9_ENCHANTED_FAERIE_ROOM_HPP
#include "room.hpp"

class enchanted_faerie_room: public room {
public:
    enchanted_faerie_room() {
        color = "Green";
    }
    string get_color() override {
        return color;
    }
    ~enchanted_faerie_room() override = default;
private:
    string color;
};


#endif //LAB9_ENCHANTED_FAERIE_ROOM_HPP
