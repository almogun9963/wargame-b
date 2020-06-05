
#ifndef WARGAME_FOOTSOLDIER_HPP
#define WARGAME_FOOTSOLDIER_HPP

#pragma once
#include "Soldier.hpp"

class FootSoldier : public Soldiers:: Soldier
{
public:
    FootSoldier(int num_player, int hp = 100, int damage = 10): Soldier(num_player, hp){damage = damage;}
    virtual void move(int d);
    virtual void shoot();
};

#endif //WARGAME_FOOTSOLDIER_HPP
