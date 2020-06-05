#ifndef WARGAME_PARAMEDICCOMMANDER_HPP
#define WARGAME_PARAMEDICCOMMANDER_HPP


#pragma once
#include "Paramedic.hpp"

class ParamedicCommander : public Paramedic {
public:
    ParamedicCommander(int num_player): Paramedic(num_player,200){}
};

#endif //WARGAME_PARAMEDICCOMMANDER_HPP
