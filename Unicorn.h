#pragma once

// include the proper header file
#include "FantasyPet.h"

#ifndef UNICORN_H
#define UNICORN_H

class Unicorn : public FantasyPet{
   public:
        Unicorn();
        void flyRainbow();
        void feedCupcakes();
        void haveRest();
        void giveTreat();
        void giveBath();
        void unicornLoop();
};

#endif