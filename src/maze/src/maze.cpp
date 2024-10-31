#include "maze.hpp"

#include <iostream>

Maze::Maze()
{

}

void Maze::add_room(std::shared_ptr<Room> new_room)
{
    std::cout << "Adding room in Maze::add_room" << std::endl;
    if(new_room != nullptr)
    {
        m_room_map[new_room->get_room_num()] = new_room;
        return;
    }
    std::cout << "Room not found" << std::endl;
}


std::shared_ptr<Room> Maze::get_room(int room_num) const
{
    if(m_room_map.find(room_num) == m_room_map.end())
    {
        return nullptr;
    }
    return m_room_map.at(room_num);
}
