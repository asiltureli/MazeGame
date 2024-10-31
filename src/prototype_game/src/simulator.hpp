#pragma once

#include "door.hpp"
#include "maze_game.hpp"
#include "maze_prototype_factory.hpp"
#include "wall.hpp"
#include <memory>

class Simulator{
    public:
      static void simulate_game() {
        auto simple_maze_prototype = std::make_unique<MazePrototypeFactory>(std::make_unique<Maze>(), std::make_unique<Wall>(), std::make_unique<Room>(), std::make_unique<Door>());
        
        auto maze_game = std::make_unique<MazeGame>();

        auto maze = maze_game->create_maze(std::move(simple_maze_prototype));
      }
};