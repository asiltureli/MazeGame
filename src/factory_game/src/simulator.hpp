#pragma once

#include "bombed_maze_game.hpp"
#include "enhanced_maze_game.hpp"
#include "maze_game.hpp"

class Simulator{
    public:
      static void simulate_game() {
        auto maze_game = std::make_unique<MazeGame>();

        auto maze = maze_game->create_maze();
        
        auto bombed_maze_game = std::make_unique<BombedMazeGame>();

        auto bombed_maze = bombed_maze_game->create_maze();

        auto enhanced_maze_game = std::make_unique<EnhancedMazeGame>();

        auto enhanced_maze = enhanced_maze_game->create_maze();
      }
};