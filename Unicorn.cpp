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