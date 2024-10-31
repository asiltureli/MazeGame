#include "maze_factory.hpp"

#include <memory>
#include <iostream>

#include "door.hpp"
#include "room.hpp"

std::unique_ptr<Maze> MazeFactory::make_maze() {
  std::cout << "Created native maze from MazeFactory" << std::endl;  
  return std::make_unique<Maze>();
}
std::shared_ptr<Wall> MazeFactory::make_wall() {
  std::cout << "Created native wall from MazeFactory" << std::endl;  
  return std::make_shared<Wall>();
}
std::shared_ptr<Room> MazeFactory::make_room(int room_no) {
  std::cout << "Created native room from MazeFactory" << std::endl;  
  return std::make_shared<Room>(room_no);
}
std::shared_ptr<Door> MazeFactory::make_door(std::shared_ptr<Room> r1,
                                             std::shared_ptr<Room> r2) {
  std::cout << "Created native door from MazeFactory" << std::endl;  
  return std::make_shared<Door>(r1, r2);
}
