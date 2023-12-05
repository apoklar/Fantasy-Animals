#pragma once

// include the proper header file
#include "FantasyPet.h"

#ifndef DRAGON_H
#define DRAGON_H

class Dragon : public FantasyPet{
   public:
        Dragon();
        void playFetch();
        void feedMeat();
        void haveRest();
        void giveTreat();
        void giveBath();
        void dragonLoop();
};

#endif