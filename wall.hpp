//
// Created by Kemal Holubeshen on 2018-11-30.
//

#ifndef LAB9_WALL_HPP
#define LAB9_WALL_HPP
#include <string>

using namespace std;

class wall {
private:
    string color;
public:
    virtual string get_color() = 0;
    virtual ~wall() = default;
};

#endif //LAB9_WALL_HPP
