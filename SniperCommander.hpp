#ifndef WARGAME_SNIPERCOMMANDER_HPP
#define WARGAME_SNIPERCOMMANDER_HPP

#pragma once
#include "Sniper.hpp"

class SniperCommander : public Sniper
{
public:
    SniperCommander(int num_player): Sniper(num_player,120,100){}
};

#endif //WARGAME_SNIPERCOMMANDER_HPP
