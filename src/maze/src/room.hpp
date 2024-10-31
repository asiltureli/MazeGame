#pragma once

#include <array>
#include <memory>

#include "mapsite.hpp"
#include "direction.hpp"

class Room : public Mapsite{
    public:
    Room(int room_no = 0);
    std::shared_ptr<Mapsite> get_side(Direction);
    const std::array<std::shared_ptr<Mapsite>, 4>& get_sides();
    void set_side(Direction dir, std::shared_ptr<Mapsite> site);
    const int get_room_num() const;
    void enter() override;

    private:
        std::array<std::shared_ptr<Mapsite>, 4> m_sides;
        int m_room_number; 
};