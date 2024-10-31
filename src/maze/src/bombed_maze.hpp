#pragma once

#include <iostream>

#include "maze.hpp"

class BombedMaze: public Maze{
    public:
        BombedMaze():Maze{}{std::cout << "Created BombedMaze" << std::endl;};
};