#ifndef WARGAME_SNIPER_HPP
#define WARGAME_SNIPER_HPP

#pragma once

#include "Soldier.hpp"

class Sniper : public Soldiers:: Soldier {
public:
    Sniper(int num_player, int hp = 100, int damage = 50): Soldier(num_player, hp){damage = 50;}
};

#endif //WARGAME_SNIPER_HPP
