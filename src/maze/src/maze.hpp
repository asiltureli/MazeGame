#pragma once

#include <map>
#include <memory>

#include "room.hpp"

class Maze{
public:
    Maze();

    void add_room(std::shared_ptr<Room>);
    std::shared_ptr<Room> get_room(int) const;
private:

    std::map<int, std::shared_ptr<Room>> m_room_map;
};