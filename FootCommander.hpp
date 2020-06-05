#ifndef WARGAME_FOOTCOMMANDER_HPP
#define WARGAME_FOOTCOMMANDER_HPP

#pragma once
#include "FootSoldier.hpp"

class FootCommander : public FootSoldier {
public:
    FootCommander(int num_player): FootSoldier (num_player,150,20){}
    virtual void move(int d);
    void shoot();
};


#endif //WARGAME_FOOTCOMMANDER_HPP
