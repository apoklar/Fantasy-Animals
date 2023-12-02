#include <iostream>
#include "Dragon.h"

Dragon::Dragon(){
  setHungry(20);
  setSleepy(20);
  setMood(20);
}

void Dragon::playFetch(){
  cout << "You played fetch with " << getName() << "!" << endl;
  //for hungry
  setHungry(getHungry() - 4);
  
  //for sleepy
  setSleepy(getSleepy() - 4);

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
}

void Dragon::feedMeat(){
  cout << "You fed " << getName() << " some meat!" << endl;
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
  setSleepy(getSleepy() - 3);

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
}

void Dragon::haveRest(){
  cout << getName() << " went to sleep!" << endl;
  //for hungry
  setHungry(getHungry() - 3);

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
  setMood(getMood() - 3);
}
