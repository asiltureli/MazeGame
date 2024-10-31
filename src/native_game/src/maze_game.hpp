#pragma once

#include "maze.hpp"
#include <memory>

class MazeGame{
public:
    static MazeGame* get_instance();

    std::unique_ptr<Maze> create_maze(); 
private:
    MazeGame(){};
};