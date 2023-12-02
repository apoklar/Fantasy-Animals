#include <iostream>
#include <iomanip>
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
        
        //Dragon pet
        while (petNum == 1){
          
          cout << endl;
          cout << dragon.getName() << " the Dragon" << endl; //will add to .h file bc of duck/phoenix changing
          //add ascii dragon
          dragon.printMenu();
          
          int dragonMenuSelection;
          cin >> dragonMenuSelection;

            if(dragonMenuSelection == 1){
              dragon.feedMeat();
            }
            else if(dragonMenuSelection == 2){
              dragon.playFetch();
            }
            else if(dragonMenuSelection == 3){
              dragon.haveRest();
            }
            else if(dragonMenuSelection == 4){
              dragon.printMoreOptions();
              
              int moreOptions;
              cin >> moreOptions;
              
              if (moreOptions == 1){
                dragon.printHealth();
              }
              else if(moreOptions == 4){
                dragon.printQuit();
                
                int quitGame;
                cin >> quitGame;
                if(quitGame == 1){
                  break;
                }
                else if(quitGame == 2){
                  continue;
                }
              }
            }
        }

        //Sasquatch Pet
        /*while (petNum == 2){
          cout << myPet.getName() << " the Sasquatch" << endl;
          //add ascii sasquatch
          myPet.printMenu();
          break;
        }

        //Unicorn Pet
        while (petNum == 3){
          cout << myPet.getName() << " the Unicorn" << endl;
          //add ascii unicorn
          myPet.printMenu();
          break;
        }

        //Duck pet
        while (petNum == 4){
          cout << myPet.getName() << " the Duck" << endl;
          //add ascii duck
          myPet.printMenu();
          break;
        }*/
      }
      else if (petNum == 5){
        //will restart to main menu
        break; //break just for now until figure out what to put
      }
    }
    else if (menuSelection == 2){
      // will cout load menu eventually idk
    }
    break;
  }
//FantasyPet myPet; // will be put in while loop once figured out in derived classes
  //myPet.print();

return 0;
}