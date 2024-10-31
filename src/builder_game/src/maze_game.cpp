#include "maze_game.hpp"

#include <memory>

MazeGame::MazeGame()
{

}
std::unique_ptr<Maze> MazeGame::create_maze(std::unique_ptr<MazeBuilder> builder)
{
    builder->build_maze();

    builder->build_room(1);
    builder->build_room(2);

    builder->build_door(1, 2);
    return builder->get_maze();
}