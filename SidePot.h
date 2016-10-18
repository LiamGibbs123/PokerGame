//
// Created by liams on 21/09/2016.
//

#ifndef SUMMER_PROJECT_POKER_SIDEPOT_H
#define SUMMER_PROJECT_POKER_SIDEPOT_H

#include <vector>

class SidePot {
private:
    int pot;
    std::vector<int> playerID; //players contesting for this pot

public:
    SidePot();
    void fillPot(int);
    void addPlayer(int);
};


#endif //SUMMER_PROJECT_POKER_SIDEPOT_H
