#pragma once

#include <memory>

#include "maze.hpp"
#include "maze_builder.hpp"

class MazeGame {
public:
  MazeGame();
  std::unique_ptr<Maze> create_maze(std::unique_ptr<MazeBuilder> builder);
};