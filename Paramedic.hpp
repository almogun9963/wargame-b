#ifndef WARGAME_PARAMEDIC_HPP
#define WARGAME_PARAMEDIC_HPP

#include "Soldier.hpp"

class Paramedic : public Soldiers::Soldier
{
public:
    Paramedic(int num_player, int hp = 100): Soldier(num_player, hp){}
};

#endif //WARGAME_PARAMEDIC_HPP
