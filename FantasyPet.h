#ifndef FANTASY_H
#define FANTASY_H

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class FantasyPet {
    public:
        FantasyPet();
        FantasyPet(int, int, int); //the standard mood level for hunger, sleep, and mood
        string getName();
        void setFantasyName(string name);

        int getFriendshipLevel();
        int getHungry();
        int getSleepy();
        int getMood();
        void setFriendshipLevel(int friends);
        void setHungry(int hunger);
        void setSleepy(int sleep);
        void setMood(int mood);

        //for saving/loading game
        void saveFile(string name);
        void loadFile(string name);

        //options that print that all derived files use
        void printHealth() const;
        void printMenu();
        void printMoreOptions() const;
        void printQuit() const;
        void printFriendship();
        
    private:
        string fantasyName; //also file name
        int hunger;
        int sleep;
        int mood;
        int friendshipLevel;
};

#endif