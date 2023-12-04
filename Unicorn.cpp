#include <iostream>
#include "Unicorn.h"

Unicorn::Unicorn(){
  setHungry(20);
  setSleepy(20);
  setMood(20);
  setFriendshipLevel(0);
}

void Unicorn::flyRainbow(){ //playing
  cout << endl;
  cout << "You and " << getName() << " flew to a rainbow!" << endl;
  cout << endl;
  //for hungry
  setHungry(getHungry() - 3);

  if(getHungry() <= 5){
    cout << getName() << " is hungry!" << endl;
    cout << endl;
  }

  //for sleepy
  setSleepy(getSleepy() - 3);

  if(getSleepy() <= 5){
    cout << getName() << " is tired!" << endl;
    cout << endl;
  }

  //for mood
  if (getMood() == 20){
    setMood(getMood());
  }
  else if (getMood() == 19){
    setMood(getMood() + 1);
  }
  else if (getMood() == 18){
    setMood(getMood() + 2);
  }
  else{
    setMood(getMood() + 3);
  }

  //for friendship
  setFriendshipLevel(getFriendshipLevel() + 3);
}

void Unicorn::feedCupcakes(){
  cout << endl;
  cout << "You fed " << getName() << " a cupcake!" << endl;
  cout << endl;
  //for hungry
  if (getHungry() == 20){
    setHungry(getHungry());
  }
  else if (getHungry() == 19){
    setHungry(getHungry() + 1);
  }
  else if (getHungry() == 18){
    setHungry(getHungry() + 2);
  }
  else{
    setHungry(getHungry() + 3);
  }

  //for sleep
  setSleepy(getSleepy() - 3);

  if(getSleepy() <= 5){
    cout << getName() << " is tired!" << endl;
    cout << endl;
  }

  //for mood
  if (getMood() == 20){
    setMood(getMood());
  }
  else if (getMood() == 19){
    setMood(getMood() + 1);
  }
  else if (getMood() == 18){
    setMood(getMood() + 2);
  }
  else{
    setMood(getMood() + 3);
  }

  //for friendship
  setFriendshipLevel(getFriendshipLevel() + 3);
}

void Unicorn::haveRest(){
  cout << endl;
  cout << getName() << " went to sleep!" << endl;
  cout << endl;

  //for hungry
  setHungry(getHungry() - 3);

  if(getHungry() <= 5){
    cout << getName() << " is hungry!" << endl;
    cout << endl;
  }

  //for sleep
  if (getSleepy() == 20){
    setSleepy(getSleepy());
  }
  else if (getSleepy() == 19){
    setSleepy(getSleepy() + 1);
  }
  else if (getSleepy() == 18){
    setSleepy(getSleepy() + 2);
  }
  else{
    setSleepy(getSleepy() + 3);
  }

  //for mood
  setMood(getMood() - 3);

  if(getMood() <= 5){
    cout << getName() << " is mad!" << endl;
    cout << endl;
  }

  //for friendship
  setFriendshipLevel(getFriendshipLevel() + 3);
}

void Unicorn::unicornLoop(){
  while(true){
    cout << getName() << " the Unicorn" << endl;
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
  
    printMenu();
  
    int unicornMenuSelection;
    cin >> unicornMenuSelection;
  
      if(unicornMenuSelection == 1){
        feedCupcakes();
      }
      else if(unicornMenuSelection == 2){
        flyRainbow();
      }
      else if(unicornMenuSelection == 3){
        haveRest();
      }
      else if(unicornMenuSelection == 4){
        printMoreOptions();
  
        int moreOptions;
        cin >> moreOptions;
  
        if (moreOptions == 1){
          printHealth();
        }
        else if(moreOptions == 2){
          printFriendship();
        }
        else if(moreOptions == 3){
          int petNum = 3;
          saveFile(getName(), petNum);
          break;
        }
        else if(moreOptions == 4){
          printQuit();
  
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