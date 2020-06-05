#ifndef WARGAME_SOLDIER_HPP
#define WARGAME_SOLDIER_HPP

#pragma once
#include <vector>
#include <utility>
#include <limits>
#include <iostream>
#include <cmath>


namespace Soldiers
{
    class Soldier{
        int num_player;
        int hp;
        const int maxHp;
    public:
        Soldier(int num_player, int hp): hp(hp), maxHp(hp), num_player(num_player){}
        virtual void move(int)=0;
        virtual ~Soldier(){}
    };
}

#endif //WARGAME_SOLDIER_HPP
