#pragma once

// include the proper header file
#include "FantasyPet.h"

#ifndef DRAGON_H
#define DRAGON_H

class Dragon : public FantasyPet{
   public:
        Dragon();
        Dragon(int, int, int); //possibily will show the status of four moods
        void getHealth();
        void playFetch();
        void feedMeat();
        void haveRest();
};

#endif