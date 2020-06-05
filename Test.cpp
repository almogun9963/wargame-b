#include "doctest.h"
#include "DemoGame.hpp"
#include "FootCommander.hpp"
#include "FootSoldier.hpp"

using namespace WarGame;

Board board (10,10);

TEST_CASE("100 tests"){
    int i;
    int j;
    for (i=0;i<11;i++){
        for (int k = 0; k < 10; k++) {
            board[{k, k}] = new FootSoldier(k + i);
            CHECK (board[{k, k}] != nullptr);
        }
    }
}