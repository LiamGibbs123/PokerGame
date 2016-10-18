//
// Created by liams on 20/09/2016.
//

#include "Pot.h"

Pot::Pot() {
    mainPot = 0;
    playerAllIn = false;
}

void Pot::fillPot(std::vector< std::vector<int> > contribution) {
    int smallestBet = contribution[0][1];
    for (int i = 0; i < contribution.size(); i++) {
        if (contribution[i][1] < smallestBet)
            smallestBet = contribution[i][1];
    }
    for (int i = 0; i < contribution.size(); i++)
        mainPot += smallestBet;


    for (int i = 0; i < contribution.size(); i++) {
        contribution[i][1] -= smallestBet;
        if (contribution[i][1] == 0) {
            contribution.erase(contribution.begin() + i);
            i--;
        }
    }
    int counter = 0;
    while (contribution.size() != 0) {
        sidePots.push_back(SidePot());
        //repeat same as start of function but for side pots
        smallestBet = contribution[0][1];
        for (int i = 0; i < contribution.size(); i++) {
            if (contribution[i][1] < smallestBet)
                smallestBet = contribution[i][1];
        }
        for (int i = 0; i < contribution.size(); i++) {
            sidePots[counter].fillPot(smallestBet);
            sidePots[counter].addPlayer(contribution[i][0]);
        }

        for (int i = 0; i < contribution.size(); i++) {
            contribution[i][1] -= smallestBet;
            if (contribution[i][1] == 0) {
                contribution.erase(contribution.begin() + i);
                i--;
            }
        }
        counter++;
    }

    /*std::cout << " MAIN POT:  " << mainPot << std::endl;
    for(int i=0;i<sidePots.size();i++) {
        std::cout << "SIDE POT " << i + 1 << ":  " << sidePots[i].pot;
        for(int j=0;j<sidePots[i].playerID.size();j++){
            std::cout<<"  " << sidePots[i].playerID[j];
        }
        std::cout << "\n";
    }*/
}