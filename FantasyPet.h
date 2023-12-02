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
        int getMood();
        void setHungry(int hunger);
        void setSleepy(int sleep);
        void setMood(int mood);
        void printHealth() const;
        void printMenu() const;
        void printMoreOptions() const;
        void printQuit() const;
        
    private:
        string fantasyName; //also file name
        int hunger;
        int sleep;
        int mood;
};

#endif