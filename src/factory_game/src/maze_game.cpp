#include "maze_game.hpp"

#include <memory>
#include <iostream>

#include "direction.hpp"
#include "door.hpp"
#include "wall.hpp"

MazeGame::MazeGame() {
}

std::unique_ptr<Maze> MazeGame::create_maze()
{
    auto new_maze = make_maze();

    auto r1 = make_room(1);
    auto r2 = make_room(2);
    
    auto theDoor = make_door(r1, r2);

    new_maze->add_room(r1);
    new_maze->add_room(r2);

    r1->set_side(Direction::North, make_wall());
    r1->set_side(Direction::East, theDoor);
    r1->set_side(Direction::South, make_wall());
    r1->set_side(Direction::West, make_wall());

    r2->set_side(Direction::North, make_wall());
    r2->set_side(Direction::East, make_wall());
    r2->set_side(Direction::South, make_wall());
    r2->set_side(Direction::West, theDoor);

    return new_maze;
}

std::unique_ptr<Maze> MazeGame::make_maze()
{
  return std::make_unique<Maze>();
}
std::shared_ptr<Room> MazeGame::make_room(int number) 
{
  std::cout << "Creating a native room" << std::endl;
  return std::make_shared<Room>(number);
}
std::shared_ptr<Wall> MazeGame::make_wall()
{
  return std::make_shared<Wall>();
}
std::shared_ptr<Door> MazeGame::make_door(std::shared_ptr<Room> r1, std::shared_ptr<Room> r2)
{
  std::cout << "Creating a native door" << std::endl;
  return std::make_shared<Door>(r1, r2);
}