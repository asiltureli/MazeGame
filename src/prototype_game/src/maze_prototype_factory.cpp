#include "maze_prototype_factory.hpp"

MazePrototypeFactory::MazePrototypeFactory(std::unique_ptr<Maze> m, std::unique_ptr<Wall> w, std::unique_ptr<Room> r, std::unique_ptr<Door> d)
: m_maze{std::move(m)}
, m_wall {std::move(w)}
, m_room {std::move(r)}
, m_door {std::move(d)}
{
}

std::unique_ptr<Maze> MazePrototypeFactory::make_maze() {
    return std::make_unique<Maze>(*m_maze);
}
std::shared_ptr<Wall> MazePrototypeFactory::make_wall() {
    return std::make_shared<Wall>(*m_wall);
}
std::shared_ptr<Room> MazePrototypeFactory::make_room(int room_no) {
    return std::make_shared<Room>(*m_room);
}
std::shared_ptr<Door> MazePrototypeFactory::make_door(std::shared_ptr<Room> r1,
                                                      std::shared_ptr<Room> r2) {
    auto new_door = std::make_shared<Door>(*m_door);
    new_door->set_room1(r1);
    new_door->set_room2(r2);
    return new_door;
}