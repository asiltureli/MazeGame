#pragma once

#include <memory>

#include "maze.hpp"
#include "wall.hpp"
#include "door.hpp"
#include "maze_factory.hpp"

class MazeGame{
public:
    MazeGame();
    std::unique_ptr<Maze> create_maze(std::unique_ptr<MazeFactory> factory); 
private:

    virtual std::unique_ptr<Maze> make_maze();
    virtual std::shared_ptr<Room> make_room(int number);
    virtual std::shared_ptr<Wall> make_wall();
    virtual std::shared_ptr<Door> make_door(std::shared_ptr<Room> r1, std::shared_ptr<Room> r2);
};