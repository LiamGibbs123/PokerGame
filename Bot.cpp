//
// Created by liams on 22/08/2016.
//

#include "Bot.h"

Bot::Bot(){

}

int Bot::getAction() {
    int a = rand() % 100;
    if(a<75)
        a=1;
    else if(a>=75)
        a=0;
    return a;
}
