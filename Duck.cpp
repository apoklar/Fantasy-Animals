#include <iostream>
#include "Duck.h"

Duck::Duck(){
  setHungry(20);
  setSleepy(20);
  setMood(20);
  setFriendshipLevel(0);
}

void Duck::goSwimming(){ //playing
  if(getFriendshipLevel() >= 0 && getFriendshipLevel() <= 19){
    cout << endl;
    cout << getName() << " went swimming!" << endl;
    cout << endl;
  }
  else if(getFriendshipLevel() >= 20 && getFriendshipLevel() <= 39){
    cout << endl;
    cout << "You gave " << getName() << " a chew toy!" << endl;
    cout << endl;
  }
  else if(getFriendshipLevel() >= 40 && getFriendshipLevel() <= 59){
    cout << endl;
    cout << getName() << " shot fireballs at targets!" << endl;
    cout << endl;
  }
  else if(getFriendshipLevel() >= 60 && getFriendshipLevel() <= 79){
    cout << endl;
    cout << "You played tug-of-war with " << getName() << "! (You lost)" << endl;
    cout << endl;
  }
  else if(getFriendshipLevel() >= 80){
    cout << endl;
    cout << "You and " << getName() << " went flying through the sky!" << endl;
    cout << endl;
  }
  
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
  if(getFriendshipLevel() >= 40 && getFriendshipLevel() <= 42){
    cout << getName() << " evolved into a Phoenix!" << endl;
    cout << endl;
  }
}

void Duck::feedBread(){
  if(getFriendshipLevel() >= 0 && getFriendshipLevel() <= 19){
    cout << endl;
    cout << "You fed " << getName() << " bread!" << endl;
    cout << endl;
  }
  else if(getFriendshipLevel() >= 20 && getFriendshipLevel() <= 39){
    cout << endl;
    cout << "You fed " << getName() << " some watermelon!" << endl;
    cout << endl;
  }
  else if(getFriendshipLevel() >= 40 && getFriendshipLevel() <= 59){
    cout << endl;
    cout << "You fed " << getName() << " rare spices!" << endl;
    cout << endl;
  }
  else if(getFriendshipLevel() >= 60 && getFriendshipLevel() <= 79){
    cout << endl;
    cout << "You fed " << getName() << " fruit extracts!" << endl;
    cout << endl;
  }
  else if(getFriendshipLevel() >= 80){
    cout << endl;
    cout << "You fed " << getName() << " rare spices!" << endl;
    cout << endl;
  }

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
  if(getFriendshipLevel() >= 40 && getFriendshipLevel() <= 42){
    cout << getName() << " evolved into a Phoenix!" << endl;
    cout << endl;
  }
}

void Duck::haveRest(){
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
  if(getFriendshipLevel() >= 40 && getFriendshipLevel() <= 42){
    cout << getName() << " evolved into a Phoenix!" << endl;
    cout << endl;
  }
}

void Duck::duckLoop(){
  while(true){
    if(getFriendshipLevel() >= 0 && getFriendshipLevel() <= 39){
      cout << getName() << " the Duck" << endl;
      cout << "  __" << endl;
      cout << "<(o )___" << endl;
      cout << " ( ._> /" << endl;
      cout << "  `---' " << endl;
    }
    else if(getFriendshipLevel() >= 40){
      cout << getName() << " the Phoenix" << endl;
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

    printMenu();

    int duckMenuSelection;
    cin >> duckMenuSelection;

      if(duckMenuSelection == 1){
        feedBread();
      }
      else if(duckMenuSelection == 2){
        goSwimming();
      }
      else if(duckMenuSelection == 3){
        haveRest();
      }
      else if(duckMenuSelection == 4){
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
          int petNum = 4;
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