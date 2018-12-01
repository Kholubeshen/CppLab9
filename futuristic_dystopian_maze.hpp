//
// Created by Kemal Holubeshen on 2018-11-30.

#ifndef LAB9_FUTURISTIC_DYSTOPIAN_MAZE_HPP
#define LAB9_FUTURISTIC_DYSTOPIAN_MAZE_HPP

#include <iostream>
#include "maze.hpp"
#include <string>
#include "room.hpp"
#include "wall.hpp"
#include "door.hpp"
#include <vector>

class futuristic_dystopian_maze: public maze{
public:
    explicit futuristic_dystopian_maze(maze_factory* mf):mf(mf){
        desc = "I am high tech! Beep boop!";
        add_room(mf);
        add_wall(mf);
        add_door(mf);
    };
    void add_room(maze_factory* mf) override {
        rooms.emplace_back(mf->make_room());
    };
    void add_wall(maze_factory* mf) override {
        walls.emplace_back(mf->make_wall());
    };
    void add_door(maze_factory* mf) override {
        doors.emplace_back(mf->make_door(mf->make_room(),mf->make_room()));
    };
    void get_desc() override {
        cout << desc << endl;
        cout << "Door Color:" << doors[0]->get_color() << endl;
        cout << "Room Color:" << rooms[0]->get_color() << endl;
        cout << "Wall Color:" << walls[0]->get_color() << endl;
    };
    ~futuristic_dystopian_maze() override {
        delete(rooms[0]);
        delete(walls[0]);
        delete(doors[0]);

    }
private:
    maze_factory *mf;
    string desc;
    vector<room*> rooms;
    vector<wall*> walls;
    vector<door*> doors;
};

#endif