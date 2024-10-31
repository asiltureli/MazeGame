#pragma once

#include "mapsite.hpp"

class Wall: public Mapsite{
public:
    Wall(){};

    void enter() override {};
};