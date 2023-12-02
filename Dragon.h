#pragma once

#include "FantasyPet.h"
#include <iostream>
#include <string>

#ifndef DRAGON_H
#define DRAGON_H

class Dragon : public FantasyPet{
   public:
        Dragon();
        Dragon(int, int, int); //possibily will show the status of four moods
        //void getHealth();
        void playFetch();
        void feedMeat();
        void haveRest();
        //void print();
};

#endif