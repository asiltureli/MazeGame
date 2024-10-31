#pragma once

#include <memory>

#include "maze.hpp"
#include "maze_factory.hpp"

class MazeGame {
public:
  MazeGame(std::unique_ptr<MazeFactory> factory);
  std::unique_ptr<Maze> create_maze();

private:
  std::unique_ptr<MazeFactory> m_maze_factory;
};