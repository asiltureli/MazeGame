#include "room.hpp"
#include "direction.hpp"
#include "mapsite.hpp"

Room::Room(int room_num): m_room_number(room_num)
{   
}

void Room::set_side(Direction dir, std::shared_ptr<Mapsite> site)
{
    m_sides[static_cast<int>(dir)] = site;
}

std::shared_ptr<Mapsite> Room::get_side(Direction dir)
{
    return m_sides[static_cast<int>(dir)];
}
const std::array<std::shared_ptr<Mapsite>, 4>& Room::get_sides()
{
    return m_sides;
}

const int Room::get_room_num() const
{
    return m_room_number;
}

void Room::enter()
{

}