//
// Created by Kemal Holubeshen on 2018-11-30.
//

#include "maze_game.hpp"
#include "enchanted_faerie_factory.hpp"
#include "futuristic_dystopian_factory.hpp"

int main(){
    maze_game mg;

    enchanted_faerie_factory eff;
    maze *em = mg.create_maze(eff);
    em->get_desc();

    cout << endl;
    delete(em);

    futuristic_dystopian_factory fdf;
    maze *fd = mg.create_maze((fdf));
    fd->get_desc();

    delete(fd);

}