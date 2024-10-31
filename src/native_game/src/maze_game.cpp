#include "maze_game.hpp"

#include "direction.hpp"
#include "door.hpp"
#include "wall.hpp"
#include <memory>

MazeGame *MazeGame::get_instance() {
  static MazeGame *instance;
  if (instance == nullptr) {
    instance = new MazeGame();
  }
  return instance;
}

std::unique_ptr<Maze> MazeGame::create_maze()
{
    auto new_maze = std::make_unique<Maze>();

    std::shared_ptr<Room> r1 = std::make_shared<Room>(1);
    std::shared_ptr<Room> r2 = std::make_shared<Room>(2);
    
    std::shared_ptr<Door> theDoor = std::make_shared<Door>(r1, r2);

    new_maze->add_room(r1);
    new_maze->add_room(r2);

    r1->set_side(Direction::North, std::make_shared<Wall>());
    r1->set_side(Direction::East, theDoor);
    r1->set_side(Direction::South, std::make_shared<Wall>());
    r1->set_side(Direction::West, std::make_shared<Wall>());

    r2->set_side(Direction::North, std::make_shared<Wall>());
    r2->set_side(Direction::East, std::make_shared<Wall>());
    r2->set_side(Direction::South, std::make_shared<Wall>());
    r2->set_side(Direction::West, theDoor);

    return new_maze;
}