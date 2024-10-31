#include "door.hpp"
#include "room.hpp"


Door::Door(std::shared_ptr<Room> room1, std::shared_ptr<Room> room2):
m_room1{room1},
m_room2{room2}
{
    m_is_open = false;
}

std::shared_ptr<Room> Door::other_side_from(std::shared_ptr<Room> given_room)
{
    if(given_room == m_room1)
    {
        return m_room2;
    }
    else if (given_room == m_room2)
    {
        return m_room1;
    }
    else 
    {
        return nullptr;
    }
}

void Door::enter()
{

}