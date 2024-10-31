#include "maze_builder.hpp"

#include <memory>
#include <iostream>

#include "direction.hpp"
#include "door.hpp"
#include "wall.hpp"
#include "room.hpp"

void MazeBuilder::build_maze() {
  std::cout << "Created native maze from MazeBuilder" << std::endl;  
  m_maze = std::make_unique<Maze>();
}

void MazeBuilder::build_room(int room_no) {
  if (m_maze) {
    if (!m_maze->get_room(room_no)) {
      auto room_handle = std::make_shared<Room>(room_no);
      m_maze->add_room(room_handle);
      room_handle->set_side(Direction::East, std::make_shared<Wall>());
      room_handle->set_side(Direction::West, std::make_shared<Wall>());
      room_handle->set_side(Direction::North, std::make_shared<Wall>());
      room_handle->set_side(Direction::South, std::make_shared<Wall>());
      std::cout << "Created native room from MazeBuilder" << std::endl;
    }
  } else {
    std::cout << "maze_ptr invalid. Create a maze first" << std::endl;
  }
}

void MazeBuilder::build_door(int r1,
                            int r2) {
  if(!m_maze)
  {
    std::cout << "Invalid maze_ptr, create a maze first " << std::endl;
    return; 
  }
  auto r1_ptr = m_maze->get_room(r1); 
  auto r2_ptr = m_maze->get_room(r2);
  if(!r1_ptr || !r2_ptr)
  {
    std::cout << "Invalid room pointers" << std::endl;
    return;
  }
  
  auto door_ptr = std::make_shared<Door>(r1_ptr, r2_ptr);

  r1_ptr->set_side(common_wall(r1_ptr, r2_ptr), door_ptr);
  r2_ptr->set_side(common_wall(r2_ptr, r1_ptr), door_ptr);
}

Direction MazeBuilder::common_wall(std::shared_ptr<Room> r1, std::shared_ptr<Room> r2)
{
  if (r1 && r2) {
    int ct = 0;
    for (auto side_r1 : r1->get_sides()) {
      for (auto side_r2 : r2->get_sides()) {
        if (r1 == r2) {
          return static_cast<Direction>(ct);
        }
      }
      ct++;
    }
  }
  // Very bad solution, but this is not the focus
  return Direction::East;
}

std::unique_ptr<Maze> MazeBuilder::get_maze()
{
  return std::move(m_maze);
}