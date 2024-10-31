#pragma once

#include "maze_game.hpp"

class Simulator{
    public:
        static void simulate_game()
        {
            auto game = MazeGame::get_instance();

            auto maze = game->create_maze();

            maze->get_room(1);
        }
};