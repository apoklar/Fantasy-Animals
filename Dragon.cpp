#include <iostream>
#include "Dragon.h"

Dragon::Dragon(){
  setHungry(20);
  setSleepy(20);
  setMood(20);
  setFriendshipLevel(0);
}

void Dragon::playFetch(){
  if(getFriendshipLevel() >= 0 && getFriendshipLevel() <= 19){
    cout << endl;
    cout << "You played fetch with " << getName() << "!" << endl;
  }
  else if(getFriendshipLevel() >= 20 && getFriendshipLevel() <= 39){
    cout << endl;
    cout << "You and " << getName() << " protected a castle!" << endl;
  }
  else if(getFriendshipLevel() >= 40 && getFriendshipLevel() <= 59){
    cout << endl;
    cout << "You and " << getName() << " played Dungeons and Dragons!" << endl;
  }
  else if(getFriendshipLevel() >= 60 && getFriendshipLevel() <= 79){
    cout << endl;
    cout << "You played tug-of-war with " << getName() << "! (You lost)" << endl;
  }
  else if(getFriendshipLevel() >= 80){
    cout << endl;
    cout << "You and " << getName() << " went flying through the mountains!" << endl;
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
  
  if (getHungry() <= 5){
    cout << endl;
    cout << getName() << " is hungry!" << endl;
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

  if (getSleepy() <= 5){
    cout << endl;
    cout << getName() << " is tired!" << endl;
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

void Dragon::feedMeat(){
  if(getFriendshipLevel() >= 0 && getFriendshipLevel() <= 19){
    cout << endl;
    cout << "You fed " << getName() << " some meat!" << endl;
  }
  else if(getFriendshipLevel() >= 20 && getFriendshipLevel() <= 39){
    cout << endl;
    cout << "You fed " << getName() << " some vegetables!" << endl;
  }
  else if(getFriendshipLevel() >= 40 && getFriendshipLevel() <= 59){
    cout << endl;
    cout << "You fed " << getName() << " salmon!" << endl;
  }
  else if(getFriendshipLevel() >= 60 && getFriendshipLevel() <= 79){
    cout << endl;
    cout << "You fed " << getName() << " a goblin!" << endl;
  }
  else if(getFriendshipLevel() >= 80){
    cout << endl;
    cout << "You fed " << getName() << " chicken nuggets!" << endl;
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

  if (getSleepy() <= 5){
    cout << endl;
    cout << getName() << " is tired!" << endl;
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

void Dragon::haveRest(){
  cout << endl;
  cout << getName() << " went to sleep!" << endl;
  //for hungry
  setHungry(getHungry() - 3);
  
  if (getHungry() <= 5){
    cout << endl;
    cout << getName() << " is hungry!" << endl;
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

  if (getMood() <= 5){
    cout << endl;
    cout << getName() << " is mad!" << endl;
  }

  //for friendship
  setFriendshipLevel(getFriendshipLevel() + 3);
}

void Dragon::giveTreat(){
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

void Dragon::giveBath(){
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

void Dragon::dragonLoop(){
  while(true){
    cout << endl;
    cout << getName() << " the Dragon" << endl; 
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
    printMenu();
  
    int dragonMenuSelection;
    cin >> dragonMenuSelection;
  
      if(dragonMenuSelection == 1){
        feedMeat();
      }
      else if(dragonMenuSelection == 2){
        playFetch();
      }
      else if(dragonMenuSelection == 3){
        haveRest();
      }
      else if(dragonMenuSelection == 4){
        giveBath();
      }
      else if(dragonMenuSelection == 5){
        giveTreat();
      }
      else if(dragonMenuSelection == 6){
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
          int petNum = 1;
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
