#include <iostream>
#include "Sasquatch.h"

Sasquatch::Sasquatch(){
  setHungry(20);
  setSleepy(20);
  setMood(20);
  setFriendshipLevel(0);
}

void Sasquatch::walkInForest(){ //playing
  if(getFriendshipLevel() >= 0 && getFriendshipLevel() <= 19){
    cout << endl;
    cout << "You and " << getName() << " walked through the forest!" << endl;
  }
  else if(getFriendshipLevel() >= 20 && getFriendshipLevel() <= 39){
    cout << endl;
    cout << "You and " << getName() << "went swimming in a lake!" << endl;
  }
  else if(getFriendshipLevel() >= 40 && getFriendshipLevel() <= 59){
    cout << endl;
    cout << "You and " << getName() << " stole food from some nearby campers!" << endl;
  }
  else if(getFriendshipLevel() >= 60 && getFriendshipLevel() <= 79){
    cout << endl;
    cout << "You and " << getName() << " played hide and seek!" << endl;
  }
  else if(getFriendshipLevel() >= 80){
    cout << endl;
    cout << "You and " << getName() << " went skiing!" << endl;
  }

  //for hungry
  if(getHungry() == 3){
    setHungry(getHungry() - 3);
  }
  else if(getHungry() == 2){
    setHungry(getHungry() - 2);
  }
  else if(getHungry() == 1){
    setHungry(getHungry() - 1);
  }
  else if(getHungry() == 0){
    setHungry(getHungry() == 0);
  }
  else{
    setHungry(getHungry() - 4);
  }

  if(getHungry() <= 5){
    cout << getName() << " is hungry!" << endl;
    cout << endl;
  }

  //for sleepy
  if(getSleepy() == 3){
    setSleepy(getHungry() - 3);
  }
  else if(getSleepy() == 2){
    setSleepy(getSleepy() - 2);
  }
  else if(getSleepy() == 1){
    setSleepy(getSleepy() - 1);
  }
  else if(getSleepy() == 0){
    setSleepy(getSleepy() == 0);
  }
  else{
    setSleepy(getSleepy() - 4);
  }

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
  else if (getMood() == 17){
    setMood(getMood() + 3);
  }
  else{
    setMood(getMood() + 4);
  }

  //for friendship
  setFriendshipLevel(getFriendshipLevel() + 3);
}

void Sasquatch::feedFood(){
  if(getFriendshipLevel() >= 0 && getFriendshipLevel() <= 19){
    cout << endl;
    cout << "You fed " << getName() << " a cheeseburger!" << endl;
  }
  else if(getFriendshipLevel() >= 20 && getFriendshipLevel() <= 39){
    cout << endl;
    cout << "You fed " << getName() << " pizza!" << endl;
  }
  else if(getFriendshipLevel() >= 40 && getFriendshipLevel() <= 59){
    cout << endl;
    cout << "You fed " << getName() << " a hot dog!" << endl;
  }
  else if(getFriendshipLevel() >= 60 && getFriendshipLevel() <= 79){
    cout << endl;
    cout << "You fed " << getName() << " a charcuterie board!" << endl;
  }
  else if(getFriendshipLevel() >= 80){
    cout << endl;
    cout << "You fed " << getName() << " a three course meal!" << endl;
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
  else if (getHungry() == 17){
    setHungry(getHungry() + 3);
  }
  else{
    setHungry(getHungry() + 4);
  }

  //for sleep
  if(getSleepy() == 2){
    setSleepy(getSleepy() - 2);
  }
  else if(getSleepy() == 1){
    setSleepy(getSleepy() - 1);
  }
  else if(getSleepy() == 0){
    setSleepy(getSleepy() == 0);
  }
  else{
    setSleepy(getSleepy() - 3);
  }

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
  else if (getMood() == 17){
    setMood(getMood() + 3);
  }
  else{
    setMood(getMood() + 4);
  }

  //for friendship
  setFriendshipLevel(getFriendshipLevel() + 3);
}

void Sasquatch::haveRest(){
  cout << endl;
  cout << getName() << " went to sleep!" << endl;
  
  //for hungry
  if(getHungry() == 2){
    setHungry(getHungry() - 2);
  }
  else if(getHungry() == 1){
    setHungry(getHungry() - 1);
  }
  else if(getHungry() == 0){
    setHungry(getHungry() == 0);
  }
  else{
    setHungry(getHungry() - 3);
  }

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
  else if (getSleepy() == 17){
    setSleepy(getSleepy() + 3);
  }
  else{
    setSleepy(getSleepy() + 4);
  }

  //for mood
  if(getMood() == 2){
    setMood(getMood() - 2);
  }
  else if(getMood() == 1){
    setMood(getMood() - 1);
  }
  else if(getMood() == 0){
    setMood(getMood() == 0);
  }
  else{
    setMood(getMood() - 3);
  }

  if(getMood() <= 5){
    cout << getName() << " is mad!" << endl;
    cout << endl;
  }

  //for friendship
  setFriendshipLevel(getFriendshipLevel() + 3);
}

void Sasquatch::giveTreat(){
  cout << endl;
  cout << "You gave " << getName() << " a treat!" << endl;

  //for sleep
  if (getSleepy() == 20){
    setSleepy(getSleepy());
  }
  else if (getSleepy() == 19){
    setSleepy(getSleepy() + 1);
  }
  else {
    setSleepy(getSleepy() + 2);
  }

  //for mood
  if (getMood() == 20){
    setMood(getMood());
  }
  else if (getMood() == 19){
    setMood(getMood() + 1);
  }
  else {
    setMood(getMood() + 2);
  }

  //for hungry
  if (getHungry() == 20){
    setHungry(getHungry());
  }
  else if (getHungry() == 19){
    setHungry(getHungry() + 1);
  }
  else {
    setHungry(getHungry() + 2);
  }

  //for friendship
  setFriendshipLevel(getFriendshipLevel() + 2);
}

void Sasquatch::giveBath(){
  cout << endl;
  cout << "You gave " << getName() << " a bath!" << endl;

  //for sleep
  if(getSleepy() == 1){
    setSleepy(getSleepy() - 1);
  }
  else if(getSleepy() == 0){
    setSleepy(getSleepy() == 0);
  }
  else{
    setSleepy(getSleepy() - 2);
  }

  //for mood
  if (getMood() == 20){
    setMood(getMood());
  }
  else if (getMood() == 19){
    setMood(getMood() + 1);
  }
  else {
    setMood(getMood() + 2);
  }

  //for hungry
  if(getHungry() == 1){
    setHungry(getHungry() - 1);
  }
  else if(getHungry() == 0){
    setHungry(getHungry() == 0);
  }
  else{
    setHungry(getHungry() - 2);
  }

  //for friendship
  setFriendshipLevel(getFriendshipLevel() + 1);
}

void Sasquatch::sasquatchLoop(){
  while(true){
    cout << endl;
    cout << getName() << " the Sasquatch" << endl;
    cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⣀⡀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣿⣿⡟⠻⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣤⣤⣿⣿⡿⠁⠀⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⣽⣿⣿⣿⣿⣿⣿⣿⣶⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⠀⠀⠀⠀⠀⢠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⡀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⠀⠀⠀⠀⢠⣰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣧⣀⡀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⠀⠀⠀⠀⣾⣿⣿⠟⠁⣾⣿⣿⣿⣿⣿⣿⠈⠙⠿⡿⢿⣿⣿⣷⣤⡀⠀⠀" << endl;
    cout << "⠀⠀⠠⣤⣴⣾⡿⠋⠁⠀⢸⣿⣿⣿⣿⣿⣿⣿⣄⠀⠀⠀⠀⠈⠉⠀⠈⠃⠀⠀" << endl;
    cout << "⠀   ⠈⠉⠉⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⠀⠀⠀⠀⠀⠀   ⠻⣿⣿⣿⣿⡟⢿⣿⣿⣿⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣹⣿⣿⡿⠀⠀⠙⢿⣿⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⠀⠀⠀⠀⠀⢤⣶⣾⣿⣿⣿⣿⠃⠀⠀⠀⠈⣿⣿⣟⠃⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⠀⠀⠀⠀⣰⣿⣿⠟⠉⠀⠋⠁⠀⠀⠀⠀⠀⣿⣿⡿⠃⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⠀⠀⠀⠀⠙⠛⠻⠿⣷⡆⠀⠀⠀⠀⠀⠀⢀⣿⣿⣷⣶⣶⣶⣦⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠉⠉⠉⠀⠀⠀⠀" << endl;
    printMenu();
  
    int sasquatchMenuSelection;
    cin >> sasquatchMenuSelection;
  
    if(sasquatchMenuSelection == 1){
      feedFood();
    }
    else if(sasquatchMenuSelection == 2){
      walkInForest();
    }
    else if(sasquatchMenuSelection == 3){
      haveRest();
    }
    else if(sasquatchMenuSelection == 4){
      giveBath();
    }
    else if(sasquatchMenuSelection == 5){
      giveTreat();
    }
    else if(sasquatchMenuSelection == 6){
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
        int petNum = 2;
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