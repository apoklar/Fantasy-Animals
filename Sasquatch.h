#pragma once

// include the proper header file
#include "FantasyPet.h"

#ifndef SASQUATCH_H
#define SASQUATCH_H

class Sasquatch : public FantasyPet{
   public:
        Sasquatch();
        void walkInForest();
        void feedFood();
        void haveRest();
        void giveTreat();
        void giveBath();
        void sasquatchLoop();
};

#endif