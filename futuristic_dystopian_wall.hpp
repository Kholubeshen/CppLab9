//
// Created by Kemal Holubeshen on 2018-11-30.
//

#ifndef LAB9_FUTURISTIC_DYSTOPIAN_WALL_HPP
#define LAB9_FUTURISTIC_DYSTOPIAN_WALL_HPP
#include "wall.hpp"

class futuristic_dystopian_wall: public wall {
public:
    futuristic_dystopian_wall(){
        color = "Gray";
    }
    string get_color() override {
        return color;
    }
    ~futuristic_dystopian_wall() override = default;
private:
    string color;
};


#endif //LAB9_FUTURISTIC_DYSTOPIAN_WALL_HPP
