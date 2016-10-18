//
// Created by liams on 20/09/2016.
//

#ifndef SUMMER_PROJECT_POKER_POT_H
#define SUMMER_PROJECT_POKER_POT_H

#include <vector>
#include "SidePot.h"
#include <iostream>

class Pot {
private:
    bool playerAllIn;
    int mainPot; //constested by everyone still in game
    int currentBet;
    std::vector<SidePot> sidePots; //map->playerid,
public:
    Pot();
    void fillPot(std::vector< std::vector<int> >);
};


#endif //SUMMER_PROJECT_POKER_POT_H
