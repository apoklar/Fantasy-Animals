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

          cout << endl;
          cout << dragon.getName() << " the Dragon" << endl; 
          cout << " <>=======() " << endl;
          cout << "(/\\___   /|\\\\          ()==========<>_" << endl;
          cout << "      \\_/ | \\\\        //|\\   ______/ \\)" << endl;
          cout << "        \\_|  \\\\      // | \\_/" << endl;
          cout << "          \\|\\/|\\_   //  /\\/" << endl;
          cout << "           (oo)\\ \\_//  /" << endl;
          cout << "          //_/\\_\\/ /  |" << endl;
          cout << "         @@/  |=\\  \\  |" << endl;
          cout << "              \\_=\\_ \\ |" << endl;
          cout << "                \\==\\ \\|\\_" << endl;
          cout << "             __(\\===\\(  )\\" << endl;
          cout << "            (((~) __(_/   |" << endl;
          cout << "                 (((~) \\  /" << endl;
          cout << "                 ______/ /" << endl;
          cout << "                 '------'" << endl;
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
              else if(moreOptions == 2){
                dragon.printFriendship();
              }
              else if(moreOptions == 3){
                dragon.saveFile(dragon.getName());
                break;
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
        while (petNum == 2){
          cout << bigfoot.getName() << " the Sasquatch" << endl;
          //add ascii sasquatch
          bigfoot.printMenu();

          int sasquatchMenuSelection;
          cin >> sasquatchMenuSelection;

            if(sasquatchMenuSelection == 1){
              bigfoot.feedFood();
            }
            else if(sasquatchMenuSelection == 2){
              bigfoot.walkInForest();
            }
            else if(sasquatchMenuSelection == 3){
              bigfoot.haveRest();
            }
            else if(sasquatchMenuSelection == 4){
              bigfoot.printMoreOptions();

              int moreOptions;
              cin >> moreOptions;

              if (moreOptions == 1){
                bigfoot.printHealth();
              }
              else if(moreOptions == 2){
                bigfoot.printFriendship();
              }
              else if(moreOptions == 3){
                bigfoot.saveFile(bigfoot.getName());
                break;
              }
              else if(moreOptions == 4){
                bigfoot.printQuit();

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

        //Unicorn Pet
        while (petNum == 3){
          cout << unicorn.getName() << " the Unicorn" << endl;
          cout << "               |))    |))" << endl;
          cout << " .             |  )) /   ))" << endl;
          cout << " \\\\   ^ ^      |    /      ))" << endl;
          cout << "  \\\\(((  )))   |   /        ))" << endl;
          cout << "   / G    )))  |  /        ))" << endl;
          cout << "  |o  _)   ))) | /       )))" << endl;
          cout << "   --' |     ))`/      )))" << endl;
          cout << "    ___|              )))" << endl;
          cout << "   / __\\             ))))`()))" << endl;
          cout << "  /\\@   /             `(())))" << endl;
          cout << "  \\/   /  /`_______/\\   \\  ))))" << endl;
          cout << "       | |          \\ \\  |  )))" << endl;
          cout << "       | |           | | |   )))" << endl;
          cout << "       |_@           |_|_@    ))" << endl;
          cout << "      /_/           /_/_/" << endl;

          unicorn.printMenu();

          int unicornMenuSelection;
          cin >> unicornMenuSelection;

            if(unicornMenuSelection == 1){
              unicorn.feedCupcakes();
            }
            else if(unicornMenuSelection == 2){
              unicorn.flyRainbow();
            }
            else if(unicornMenuSelection == 3){
              unicorn.haveRest();
            }
            else if(unicornMenuSelection == 4){
              unicorn.printMoreOptions();

              int moreOptions;
              cin >> moreOptions;

              if (moreOptions == 1){
                unicorn.printHealth();
              }
              else if(moreOptions == 2){
                unicorn.printFriendship();
              }
              else if(moreOptions == 3){
                unicorn.saveFile(unicorn.getName());
                break;
              }
              else if(moreOptions == 4){
                unicorn.printQuit();

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

        //Duck pet
        while (petNum == 4){
          if(duck.getFriendshipLevel() >= 0 && duck.getFriendshipLevel() <= 39){
            cout << duck.getName() << " the Duck" << endl;
            cout << "  __" << endl;
            cout << "<(o )___" << endl;
            cout << " ( ._> /" << endl;
            cout << "  `---' " << endl;
          }
          else if(duck.getFriendshipLevel() >= 40){
            cout << duck.getName() << " the Phoenix" << endl;
            cout << "      __             __" << endl;
            cout << "   .-'.'     .-.     '.'-." << endl;
            cout << " .'.((      ( ^ `>     )).'." << endl;
            cout << "/`'- \\'._____\\ (_____.'/ -'`\\" << endl;
            cout << "|-''`.'------' '------'.`''-|" << endl;
            cout << "|.-'`.'.'.`/ | | \\`.'.'.`'-.|" << endl;
            cout << " \\ .' . /  | | | |  \\ . '. /" << endl;
            cout << "  '._. :  _|_| |_|_  : ._.'" << endl;
            cout << "     ````` /T\"Y\"T\\ `````" << endl;
            cout << "          / | | | \\" << endl;
            cout << "         `'`'`'`'`'`" << endl; 
          }

          duck.printMenu();

          int duckMenuSelection;
          cin >> duckMenuSelection;

            if(duckMenuSelection == 1){
              duck.feedBread();
            }
            else if(duckMenuSelection == 2){
              duck.goSwimming();
            }
            else if(duckMenuSelection == 3){
              duck.haveRest();
            }
            else if(duckMenuSelection == 4){
              duck.printMoreOptions();

              int moreOptions;
              cin >> moreOptions;

              if (moreOptions == 1){
                duck.printHealth();
              }
              else if(moreOptions == 2){
                duck.printFriendship();
              }
              else if(moreOptions == 3){
                duck.saveFile(duck.getName());
                break;
              }
              else if(moreOptions == 4){
                duck.printQuit();

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
      }
      else if (petNum == 5){
        break; 
      }
    }
    else if (menuSelection == 2){
      cout << "What is the name of your pet?" << endl;
      string nameOfPet;
      cin >> nameOfPet;
      
      Dragon dragon;
      dragon.loadFile(nameOfPet);
    }
    break;
  }
return 0;
}