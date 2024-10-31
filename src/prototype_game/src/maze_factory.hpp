#pragma once

#include <memory>

#include "maze.hpp"
#include "door.hpp"
#include "wall.hpp"
#include "room.hpp"

class MazeFactory{
    public:
        virtual std::unique_ptr<Maze> make_maze() = 0;
        virtual std::shared_ptr<Wall> make_wall() = 0;
        virtual std::shared_ptr<Room> make_room(int room_no) = 0;
        virtual std::shared_ptr<Door> make_door(std::shared_ptr<Room> r1, std::shared_ptr<Room> r2) = 0;
};