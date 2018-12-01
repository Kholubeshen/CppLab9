//
// Created by Kemal Holubeshen on 2018-11-30.
//

#ifndef LAB9_ROOM_HPP
#define LAB9_ROOM_HPP
#include <string>
using namespace std;

class room {
private:
    string color;
public:
    virtual string get_color() = 0;
    virtual ~room() = default;
};


#endif //LAB9_ROOM_HPP
