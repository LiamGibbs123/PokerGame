//
// Created by liams on 21/09/2016.
//

#include "SidePot.h"

SidePot::SidePot() {
    pot = 0;
}

void SidePot::fillPot(int amount) {
    pot += amount;
}

void SidePot::addPlayer(int id) {
    playerID.push_back(id);
}