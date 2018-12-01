//
// Created by Kemal Holubeshen on 2018-11-30.
//

#ifndef LAB9_DOOR_HPP
#define LAB9_DOOR_HPP
#include <string>
using namespace std;

class door {
public:
    virtual string get_color() = 0;
    virtual ~door() = default;
};


#endif //LAB9_DOOR_HPP
