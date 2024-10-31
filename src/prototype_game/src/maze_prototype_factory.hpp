#pragma once

#include "maze_factory.hpp"
#include <memory>

class MazePrototypeFactory : public MazeFactory{
public:
    MazePrototypeFactory(std::unique_ptr<Maze>, std::unique_ptr<Wall>, std::unique_ptr<Room>, std::unique_ptr<Door>);

    std::unique_ptr<Maze> make_maze() override;
    std::shared_ptr<Wall> make_wall() override;
    std::shared_ptr<Room> make_room(int) override;
    std::shared_ptr<Door> make_door(std::shared_ptr<Room>, std::shared_ptr<Room>) override;
private:
    std::unique_ptr<Maze> m_maze;
    std::unique_ptr<Wall> m_wall;
    std::unique_ptr<Room> m_room;
    std::unique_ptr<Door> m_door;
};
