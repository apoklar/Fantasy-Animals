#ifndef FANTASY_H
#define FANTASY_H

#include <iostream>
#include <string>

using namespace std;

class FantasyPet {
    public:
        FantasyPet();
        FantasyPet(int, int, int); //the standard mood level for hunger, sleep, and mood
        string getName();
        void setFantasyName(string name);

        int getHungry();
        int getSleepy();
        int getHappy();
        void setHungry(int hunger);
        void setSleepy(int sleep);
        void setHappy(int mood);
        void print() const;
        void printMenu() const;
        void printMoreOptions() const;
        
    private:
        string fantasyName; //also file name
        int hunger;
        int sleep;
        int mood;
};

#endif