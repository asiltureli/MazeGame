#pragma once

#include <iostream>

#include "maze.hpp"

class EnchancedMaze: public Maze{
    public:
        EnchancedMaze():Maze{}{std::cout << "Created EnhanbcedMaze" << std::endl;};
};