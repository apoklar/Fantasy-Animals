#pragma once

// include the proper header file
#include "FantasyPet.h"

#ifndef DUCK_H
#define DUCK_H

class Duck : public FantasyPet{
   public:
        Duck();
        void goSwimming();
        void feedBread();
        void haveRest();
        void duckLoop();
};

#endif