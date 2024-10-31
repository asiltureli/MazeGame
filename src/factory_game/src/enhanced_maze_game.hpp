#pragma once

#include <iostream>

#include "maze_game.hpp"

class EnhancedMazeGame : public MazeGame{
    public:
        EnhancedMazeGame(){};

        std::unique_ptr<Maze> create_maze() override {return MazeGame::create_maze();};
    private:
        std::shared_ptr<Door> make_door(std::shared_ptr<Room> r1, std::shared_ptr<Room> r2) override
        {
            std::cout << "Creating a enhanced door" << std::endl;
            return std::make_shared<Door>(r1, r2);
        }
        
        std::shared_ptr<Room> make_room(int num) override
        {
            std::cout << "Creating a enhanced room" << std::endl;
            return std::make_shared<Room>(num);
        }
};