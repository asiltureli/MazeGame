#include "maze_game.hpp"

#include <memory>

#include "direction.hpp"

MazeGame::MazeGame(std::unique_ptr<MazeFactory> factory)
    : m_maze_factory{std::move(factory)} {}

std::unique_ptr<Maze> MazeGame::create_maze()
{
    auto new_maze = m_maze_factory->make_maze();

    auto r1 = m_maze_factory->make_room(1);
    auto r2 = m_maze_factory->make_room(2);
    
    auto theDoor = m_maze_factory->make_door(r1, r2);
    
    new_maze->add_room(r1);
    new_maze->add_room(r2);
    
    r1->set_side(Direction::North, m_maze_factory->make_wall());
    r1->set_side(Direction::East, theDoor);
    r1->set_side(Direction::South, m_maze_factory->make_wall());
    r1->set_side(Direction::West, m_maze_factory->make_wall());

    r2->set_side(Direction::North, m_maze_factory->make_wall());
    r2->set_side(Direction::East, m_maze_factory->make_wall());
    r2->set_side(Direction::South, m_maze_factory->make_wall());
    r2->set_side(Direction::West, theDoor);

    return new_maze;
}