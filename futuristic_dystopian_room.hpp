//
// Created by Kemal Holubeshen on 2018-11-30.
//

#ifndef LAB9_FUTURISTIC_DYSTOPIAN_ROOM_HPP
#define LAB9_FUTURISTIC_DYSTOPIAN_ROOM_HPP
#include "room.hpp"


class futuristic_dystopian_room: public room {
public:
    futuristic_dystopian_room(){
        color = "Metallic";
    }
    string get_color() override {
        return color;
    }
    ~futuristic_dystopian_room() override = default;
private:
    string color;
};


#endif //LAB9_FUTURISTIC_DYSTOPIAN_ROOM_HPP
