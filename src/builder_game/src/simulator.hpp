#pragma once

#include <memory>
#include <iostream>

#include "maze_builder.hpp"
#include "maze_game.hpp"

class Simulator{
    public:
        static void simulate_game()
        {
            std::unique_ptr<MazeBuilder> maze_builder = std::make_unique<MazeBuilder>();
            auto maze_game = std::make_unique<MazeGame>();
            maze_game->create_maze(std::move(maze_builder));

            std::cout << "Completed simulation" << std::endl;
        }
};