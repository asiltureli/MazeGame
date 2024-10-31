#pragma once

#include <memory>

#include "maze_factory.hpp"
#include "maze_game.hpp"
#include "bombed_maze_factory.hpp"

class Simulator{
    public:
        static void simulate_game()
        {
            std::unique_ptr<MazeFactory> maze_factory = std::make_unique<MazeFactory>();            
            auto maze_game = std::make_unique<MazeGame>(std::move(maze_factory));
            maze_game->create_maze();

            std::unique_ptr<MazeFactory> bombed_maze_factory = std::make_unique<BombedMazeFactory>();
            auto bombed_maze_game = std::make_unique<MazeGame>(std::move(bombed_maze_factory)); 
            bombed_maze_game->create_maze();

            std::cout << "Completed simulation" << std::endl;
        }
};