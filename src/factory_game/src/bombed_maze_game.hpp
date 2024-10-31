#pragma once

#include <iostream>
#include <memory>

#include "maze_game.hpp"

class BombedMazeGame : public MazeGame{
    public:
        BombedMazeGame(){};

        std::unique_ptr<Maze> create_maze() override {return MazeGame::create_maze();};
    private:
        std::shared_ptr<Door> make_door(std::shared_ptr<Room> r1, std::shared_ptr<Room> r2) override
        {
            std::cout << "Creating a bombed door" << std::endl;
            return std::make_shared<Door>(r1, r2);
        }
        
        std::shared_ptr<Room> make_room(int num) override
        {
            std::cout << "Creating a bombed room" << std::endl;
            return std::make_shared<Room>(num);
        }
};