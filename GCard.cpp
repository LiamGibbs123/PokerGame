//
// Created by liams on 05/09/2016.
//

#include "GCard.h"

const int CARD_WIDTH = 81;
const int CARD_HEIGHT = 117.4;

GCard::GCard() {
    rank = -1;
    suit = -1;
    rect.w = 0;
    rect.h = 0;
    rect.x = 0;
    rect.y = 0;
}

GCard::GCard(int r, int s) {
    rank = r;
    suit = s;
    rect.w = CARD_WIDTH;
    rect.h = CARD_HEIGHT;
    rect.x = rank*CARD_WIDTH;
    rect.y = suit*CARD_HEIGHT;
}

void GCard::render(GTexture spriteSheet, SDL_Renderer* renderer, SDL_Rect* rSpace, int angle) {
    spriteSheet.render(rSpace, &rect, renderer, angle);
}

int GCard::getRank() {
    return rank;
}

int GCard::getSuit() {
    return suit;
}

void GCard::setValues(int s, int r) {
    suit = s;
    rank = r;
    rect.w = CARD_WIDTH;
    rect.h = CARD_HEIGHT;
    rect.x = (rank-2)*CARD_WIDTH;
    rect.y = (suit-1)*CARD_HEIGHT;
}