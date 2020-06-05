#pragma once
#include "Paramedic.hpp"

int Paramedic::hit(std::vector<std::vector<Soldier*>> & board, int rows, int cols)
{
    find_solider_to_active_the_skill(board);
    return 0;
}

std::pair<int,int> Paramedic::get_loc()
{
    return {this->location.first, this->location.second};
}

int Paramedic::get_id()
{
    return this->player_id;
}



Soldier &Paramedic::operator=(Soldier *copy_from)
{
    Soldier* the_copy = new Paramedic(copy_from->get_id());
    the_copy->health = copy_from->health;
    Soldier & ret = *the_copy;
    return ret;
}

std::pair<int, int> Paramedic::find_solider_to_active_the_skill(std::vector<std::vector<Soldier*>> board) {

    for (int i = this->get_loc().first; i < this->get_loc().first+1; ++i)
    {
        for (int j = this->get_loc().second; j < this->get_loc().second+1; ++j)
        {

            if (board[i][j] != nullptr && i != j && board[i][j]->get_id() == player_id)
            {
                board[i][j]->return_to_max_health();
            }
        }
    }
    return {0,0};
}

void Paramedic::return_to_max_health()
{
    this->health = MAX_HEALTH;
}

