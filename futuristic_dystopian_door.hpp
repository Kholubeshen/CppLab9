//
// Created by Kemal Holubeshen on 2018-11-30.
//

#ifndef LAB9_FUTURISTIC_DYSTOPIAN_DOOR_HPP
#define LAB9_FUTURISTIC_DYSTOPIAN_DOOR_HPP
#include "door.hpp"
#include "futuristic_dystopian_room.hpp"
#include <vector>

class futuristic_dystopian_door: public door {
public:
    futuristic_dystopian_door(){
        color = "Brass";
    }
    string get_color() override {
        return color;
    }
    ~futuristic_dystopian_door() override = default;
private:
    string color;

};


#endif //LAB9_FUTURISTIC_DYSTOPIAN_DOOR_HPP
