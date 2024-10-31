#pragma once

#include "mapsite.hpp"
#include "room.hpp"
#include <memory>

class Door: public Mapsite{
    public:
        Door(std::shared_ptr<Room> = nullptr, std::shared_ptr<Room> = nullptr);
        void enter() override;
        std::shared_ptr<Room> other_side_from(std::shared_ptr<Room>);
        void set_room1(std::shared_ptr<Room> r1) {m_room1 = r1;}
        void set_room2(std::shared_ptr<Room> r2) {m_room2 = r2;}
    private:
        std::shared_ptr<Room> m_room1;
        std::shared_ptr<Room> m_room2;
        bool m_is_open;
};