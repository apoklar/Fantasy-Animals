#include "FantasyPet.h"

FantasyPet::FantasyPet(){
  hunger = 10;
  sleep = 10;
  mood = 10;
} //the standard mood level for hunger, sleep, and mood

FantasyPet::FantasyPet(int hungry, int sleepy, int moody){
  hunger = hungry;
  sleep = sleepy;
  mood = moody;
}
string FantasyPet::getName(){return fantasyName;}

void FantasyPet::setFantasyName(string name) {fantasyName = name;}

int FantasyPet::getHungry() {return hunger;}

int FantasyPet::getSleepy() {return sleep;}

int FantasyPet::getHappy() {return mood;}

void FantasyPet::setHungry(int hungry) {hunger = hungry;}

void FantasyPet::setSleepy(int sleepy) {sleep = sleepy;}

void FantasyPet::setHappy(int moody) {mood = moody;}

void FantasyPet::print() const { 
  //for hunger
  if(hunger == 10){
    cout << "Hunger: ██████████" << endl;
    cout << endl;
  }
  else if(hunger == 9){
    cout << "Hunger: █████████░" << endl;
    cout << endl;
  }
  else if(hunger == 8){
    cout << "Hunger: ████████░░" << endl;
    cout << endl;
  }
  else if(hunger == 7){
    cout << "Hunger: ███████░░░" << endl;
    cout << endl;
  }
  else if(hunger == 6){
    cout << "Hunger: ██████░░░░" << endl;
    cout << endl;
  }
  else if(hunger == 5){
    cout << "Hunger: █████░░░░░" << endl;
    cout << endl;
  }
  else if(hunger == 4){
    cout << "Hunger: ████░░░░░░" << endl;
    cout << endl;
  }
  else if(hunger == 3){
    cout << "Hunger: ███░░░░░░░" << endl;
    cout << endl;
  }
  else if(hunger == 2){
    cout << "Hunger: ██░░░░░░░░" << endl;
    cout << endl;
  }
  else if(hunger == 1){
    cout << "Hunger: █░░░░░░░░░" << endl;
    cout << endl;
  }
  
  //for sleep
  if(sleep == 10){
    cout << "Sleep:  ██████████" << endl;
    cout << endl;
  }
  else if(sleep == 9){
    cout << "Sleep:  █████████░" << endl;
    cout << endl;
  }
  else if(sleep == 8){
    cout << "Sleep:  ████████░░" << endl;
    cout << endl;
  }
  else if(sleep == 7){
    cout << "Sleep:  ███████░░░" << endl;
    cout << endl;
  }
  else if(sleep == 6){
    cout << "Sleep:  ██████░░░░" << endl;
    cout << endl;
  }
  else if(sleep == 5){
    cout << "Sleep:  █████░░░░░" << endl;
    cout << endl;
  }
  else if(sleep == 4){
    cout << "Sleep:  ████░░░░░░" << endl;
    cout << endl;
  }
  else if(sleep == 3){
    cout << "Sleep:  ███░░░░░░░" << endl;
    cout << endl;
  }
  else if(sleep == 2){
    cout << "Sleep:  ██░░░░░░░░" << endl;
    cout << endl;
  }
  else if(sleep == 1){
    cout << "Sleep:  █░░░░░░░░░" << endl;
    cout << endl;
  }
  
  //for mood
  if(mood == 10){
    cout << "Mood:   ██████████" << endl;
  }
  else if(mood == 9){
    cout << "Mood:   █████████░" << endl;
  }
  else if(mood == 8){
    cout << "Mood:   ████████░░" << endl;
  }
  else if(mood == 7){
    cout << "Mood:   ███████░░░" << endl;
  }
  else if(mood == 6){
    cout << "Mood:   ██████░░░░" << endl;
  }
  else if(mood == 5){
    cout << "Mood:   █████░░░░░" << endl;
  }
  else if(mood == 4){
    cout << "Mood:   ████░░░░░░" << endl;
  }
  else if(mood == 3){
    cout << "Mood:   ███░░░░░░░" << endl;
  }
  else if(mood == 2){
    cout << "Mood:   ██░░░░░░░░" << endl;
  }
  else if(mood == 1){
    cout << "Mood:   █░░░░░░░░░" << endl;
  }
}

void FantasyPet::printMenu() const{
  cout << "What would you like to do?" << endl;
  cout << "1: Feed" << endl;
  cout << "2: Play" << endl;
  cout << "3: Rest" << endl;
  cout << "4: More options" << endl;
}

void FantasyPet::printMoreOptions() const{
  cout << "1: Check health" << endl;
  cout << "2: Check friendship level" << endl;
  cout << "3: Save game" << endl;
  cout << "4: Quit without saving" << endl;
}