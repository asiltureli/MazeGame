#pragma once

#include <memory>

#include "maze.hpp"

class MazeBuilder{
    public:
        virtual void build_maze();
        virtual void build_room(int room_no);
        virtual void build_door(int r1, int r2);
        std::unique_ptr<Maze> get_maze();
    protected:
        std::unique_ptr<Maze> m_maze = nullptr;
        Direction common_wall(std::shared_ptr<Room> r1, std::shared_ptr<Room> r2);
};