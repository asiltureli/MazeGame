#pragma once

#include <memory>
#include <iostream>

#include "bombed_maze.hpp"
#include "door.hpp"
#include "maze_factory.hpp"

class BombedMazeFactory: public MazeFactory{
public:
    std::unique_ptr<Maze> make_maze() override{
        std::cout << "Created maze from bombed maze factory" << std::endl;
        return std::make_unique<BombedMaze>();
    }

    std::shared_ptr<Door> make_door(std::shared_ptr<Room> r1, std::shared_ptr<Room> r2) override{
        std::cout << "Created door from bombed maze factory" << std::endl;
        return std::make_shared<Door>(r1,r2);
    }

    std::shared_ptr<Wall> make_wall() override{
        std::cout << "Created wall from bombed maze factory" << std::endl;
        return std::make_shared<Wall>();
    }
};