#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

#include "Dragon.h"
#include "Duck.h"
#include "Sasquatch.h"
#include "Unicorn.h"

int main(){
  cout << "============================================================" << endl;
  cout << "  _____           _                    ____      _       _ " << endl;      
  cout << " |  ___|_ _ _ __ | |_ __ _ ___ _   _  |  _ \\ ___| |_ ___| |" << endl;     
  cout << " | |_ / _` | '_ \\| __/ _` / __| | | | | |_) / _ \\ __/ __| |" << endl;
  cout << " |  _| (_| | | | | || (_| \\__ \\ |_| | |  __/  __/ |_\\__ \\_|" << endl;
  cout << " |_|  \\__,_|_| |_|\\__\\__,_|___/\\__, | |_|   \\___|\\__|___(_)" << endl;
  cout << "                               |___/                       " << endl;
  cout << "============================================================" << endl;
  cout << "1: Start new game" << endl;
  cout << "2: Load saved game" << endl;

  int menuSelection;
  cin >> menuSelection;

  while (menuSelection == 1 || menuSelection == 2){
    if (menuSelection == 1){
      cout << "Select a pet" << endl;
      cout << "1: Dragon" << endl;
      cout << "2: Sasquatch" << endl;
      cout << "3: Unicorn" << endl;
      cout << "4: Duck" << endl;
      cout << "5: Quit" << endl;

      int petNum;
      cin >> petNum;
      if (petNum == 1 || petNum == 2 || petNum == 3 || petNum == 4){
        cout << "What would you like to name your pet?" << endl;
        string petName;
        cin >> petName;

        Dragon dragon;
        dragon.setFantasyName(petName);

        Sasquatch bigfoot;
        bigfoot.setFantasyName(petName);

        Unicorn unicorn;
        unicorn.setFantasyName(petName);

        Duck duck;
        duck.setFantasyName(petName);

        //Dragon pet
        while (petNum == 1){
          dragon.dragonLoop();
          break;
        }

        //Sasquatch Pet
        while (petNum == 2){
          bigfoot.sasquatchLoop();
          break;
        }

        //Unicorn Pet
        while (petNum == 3){
          unicorn.unicornLoop();
          break;
        }

        //Duck pet
        while (petNum == 4){
          duck.duckLoop();
          break;
        }
      }
      else if (petNum == 5){
        break; 
      }
    }
    else if (menuSelection == 2){
      cout << endl;
      cout << "What is the name of your pet?" << endl;
      string nameOfPet;
      cin >> nameOfPet;
      
      int petNum;
      ifstream loadFile(nameOfPet);

      if(loadFile.is_open()){
        loadFile >> petNum; // read the saved petNum
        loadFile.close();
        cout << nameOfPet << " loaded successfully!" << endl;
        cout << endl;
      }
      else {
        cout << "Pet not found!" << endl;
        break;
      }

      //dragon saved game
      while (petNum == 1){
        Dragon dragon;
        dragon.loadFile(nameOfPet);

        dragon.dragonLoop();
        break;
      }
      
      //sasquatch saved game
      while (petNum == 2){
        Sasquatch bigfoot;
        bigfoot.loadFile(nameOfPet);

        bigfoot.sasquatchLoop();
        break;
      }
      
      //unicorn saved game
      while (petNum == 3){
        Unicorn unicorn;
        unicorn.loadFile(nameOfPet);

        unicorn.unicornLoop();
        break;
      }
      
      //duck saved game
      while (petNum == 4){
        Duck duck;
        duck.loadFile(nameOfPet);

        duck.duckLoop();
        break;
      }
    }
    break;
  }
return 0;
}