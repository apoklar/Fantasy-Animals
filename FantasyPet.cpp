#include "FantasyPet.h"

FantasyPet::FantasyPet(){
  hunger = 20;
  sleep = 20;
  mood = 20;
  friendshipLevel = 0;
} //the standard mood level for hunger, sleep, and mood

FantasyPet::FantasyPet(int hungry, int sleepy, int moody){
  hunger = hungry;
  sleep = sleepy;
  mood = moody;
}

string FantasyPet::getName() {return fantasyName;}

void FantasyPet::setFantasyName(string name) {fantasyName = name;}

int FantasyPet::getHungry() { return hunger; }

int FantasyPet::getSleepy() { return sleep; }

int FantasyPet::getMood() { return mood; }

void FantasyPet::setHungry(int hungry) {hunger = hungry;}

void FantasyPet::setSleepy(int sleepy) {sleep = sleepy;}

void FantasyPet::setMood(int moody) {mood = moody;}

int FantasyPet::getFriendshipLevel() { return friendshipLevel; }

void FantasyPet::setFriendshipLevel(int friends) {
  friendshipLevel = friends;
}

//save and load game
void FantasyPet::saveFile(string name, int petNum){
  fantasyName = name;

  ofstream file(fantasyName);

  if (file.is_open()) {
      file << petNum << endl;
      file << hunger << endl;
      file << sleep << endl;
      file << mood << endl;
      file << friendshipLevel << endl;
      file.close();
    
      cout << endl;
      cout << name << " successfully saved!";
  }
}

void FantasyPet::loadFile(string name){
  fantasyName = name;

  ifstream file(fantasyName);

  if(file.is_open()){
    int petNum;
    file >> petNum;
    file >> hunger;
    file >> sleep;
    file >> mood;
    file >> friendshipLevel;
    file.close();

    setHungry(hunger);
    setSleepy(sleep);
    setMood(mood);
    setFriendshipLevel(friendshipLevel);
  }
  else{
    cout << endl;
    cout << "Pet not found!" << endl;
  }
}

//all things printed in game
void FantasyPet::printHealth() const { 
  //for hunger
  if(hunger == 20 || hunger == 19){
    cout << endl;
    cout << "Hunger: ██████████" << endl;
    cout << endl;
  }
  else if(hunger == 18 || hunger == 17){
    cout << endl;
    cout << "Hunger: █████████░" << endl;
    cout << endl;
  }
  else if(hunger == 16 || hunger == 15){
    cout << endl;
    cout << "Hunger: ████████░░" << endl;
    cout << endl;
  }
  else if(hunger == 14 || hunger == 13){
    cout << endl;
    cout << "Hunger: ███████░░░" << endl;
    cout << endl;
  }
  else if(hunger == 12 || hunger == 11){
    cout << endl;
    cout << "Hunger: ██████░░░░" << endl;
    cout << endl;
  }
  else if(hunger == 10 || hunger == 9){
    cout << endl;
    cout << "Hunger: █████░░░░░" << endl;
    cout << endl;
  }
  else if(hunger == 8 || hunger == 7){
    cout << endl;
    cout << "Hunger: ████░░░░░░" << endl;
    cout << endl;
  }
  else if(hunger == 6 || hunger == 5){
    cout << "Hunger: ███░░░░░░░" << endl;
    cout << endl;
  }
  else if(hunger == 4 || hunger == 3){
    cout << endl;
    cout << "Hunger: ██░░░░░░░░" << endl;
    cout << endl;
  }
  else if(hunger ==  2 || hunger == 1){
    cout << endl;
    cout << "Hunger: █░░░░░░░░░" << endl;
    cout << endl;
  }
  else if(hunger == 0){
    cout << "Hunger: ░░░░░░░░░░" << endl;
    cout << endl;
  }
  
  //for sleep
  if(sleep == 20 || sleep == 19){
    cout << "Sleep:  ██████████" << endl;
    cout << endl;
  }
  else if(sleep == 18 || sleep == 17){
    cout << "Sleep:  █████████░" << endl;
    cout << endl;
  }
  else if(sleep == 16 || sleep == 15){
    cout << "Sleep:  ████████░░" << endl;
    cout << endl;
  }
  else if(sleep == 14 || sleep == 13){
    cout << "Sleep:  ███████░░░" << endl;
    cout << endl;
  }
  else if(sleep == 12 || sleep == 11){
    cout << "Sleep:  ██████░░░░" << endl;
    cout << endl;
  }
  else if(sleep == 10 || sleep == 9){
    cout << "Sleep:  █████░░░░░" << endl;
    cout << endl;
  }
  else if(sleep == 8 || sleep == 7){
    cout << "Sleep:  ████░░░░░░" << endl;
    cout << endl;
  }
  else if(sleep == 6 || sleep == 5){
    cout << "Sleep:  ███░░░░░░░" << endl;
    cout << endl;
  }
  else if(sleep == 4 || sleep == 3){
    cout << "Sleep:  ██░░░░░░░░" << endl;
    cout << endl;
  }
  else if(sleep == 2 || sleep == 1){
    cout << "Sleep:  █░░░░░░░░░" << endl;
    cout << endl;
  }
  else if(sleep == 0){
    cout << "Sleep:  ░░░░░░░░░░" << endl;
    cout << endl;
  }
  
  //for mood
  if(mood == 20 || mood == 19){
    cout << "Mood:   ██████████" << endl;
    cout << endl;
  }
  else if(mood == 18 || mood == 17){
    cout << "Mood:   █████████░" << endl;
    cout << endl;
  }
  else if(mood == 16  || mood == 15){
    cout << "Mood:   ████████░░" << endl;
    cout << endl;
  }
  else if(mood == 14 || mood == 13){
    cout << "Mood:   ███████░░░" << endl;
    cout << endl;
  }
  else if(mood == 12 || mood == 11){
    cout << "Mood:   ██████░░░░" << endl;
    cout << endl;
  }
  else if(mood == 10 || mood == 9){
    cout << "Mood:   █████░░░░░" << endl;
    cout << endl;
  }
  else if(mood == 8 || mood == 7){
    cout << "Mood:   ████░░░░░░" << endl;
    cout << endl;
  }
  else if(mood == 6 || mood == 5){
    cout << "Mood:   ███░░░░░░░" << endl;
    cout << endl;
  }
  else if(mood == 4 || mood == 3){
    cout << "Mood:   ██░░░░░░░░" << endl;
    cout << endl;
  }
  else if(mood == 2 || mood == 1){
    cout << "Mood:   █░░░░░░░░░" << endl;
    cout << endl;
  }
  else if(mood == 0){
    cout << "Mood:   ░░░░░░░░░░" << endl;
    cout << endl;
  }
}

void FantasyPet::printMenu(){
  if(friendshipLevel >= 20 && friendshipLevel <= 21){
    cout << endl;
    cout << FantasyPet::getName() << "'s friendship level increased to Level 2! There are new options for playing and feeding." << endl;
    setHungry(20);
    setMood(20);
    setSleepy(20);
  }
    
  else if(friendshipLevel >= 40 && friendshipLevel <= 42){
    cout << endl;
    cout << FantasyPet::getName() << "'s friendship level increased to Level 3! There are new options for playing and feeding." << endl;
    setHungry(20);
    setMood(20);
    setSleepy(20);
  }
    
  else if(friendshipLevel == 60){
    cout << endl;
    cout << FantasyPet::getName() << "'s friendship level increased to Level 4! There are new options for playing and feeding." << endl;
    setHungry(20);
    setMood(20);
    setSleepy(20);
  }
    
  else if(friendshipLevel >= 80 && friendshipLevel <= 82){
    cout << endl;
    cout << FantasyPet::getName() << "'s friendship level increased to the max level!" << endl;
    setHungry(20);
    setMood(20);
    setSleepy(20);
  }
  
  cout << endl;
  cout << "What would you like to do?" << endl;
  cout << "1: Feed" << endl;
  cout << "2: Play" << endl;
  cout << "3: Rest" << endl;
  cout << "4. Give Bath" << endl;
  cout << "5: Give Treat" << endl;
  cout << "6: More options" << endl;
}

void FantasyPet::printMoreOptions() const{
  cout << endl;
  cout << "1: Check health" << endl;
  cout << "2: Check friendship level" << endl;
  cout << "3: Save game" << endl;
  cout << "4: Quit without saving" << endl;
}

void FantasyPet::printQuit() const{
  cout << endl;
  cout << "Are you sure you want to quit?" << endl;
  cout << "1. Yes" << endl;
  cout << "2. No, go back" << endl;
}

void FantasyPet::printFriendship(){
  if (friendshipLevel >= 0 && friendshipLevel <= 19){
    cout << endl;
    cout << "=-=-=-=-=-=-=-=-=-=" << endl;
    cout << "Friendship Level: 1"  << endl;
    cout << "=-=-=-=-=-=-=-=-=-=" << endl;
  }
  else if (friendshipLevel >= 20 && friendshipLevel <= 39){
    cout << endl;
    cout << "=-=-=-=-=-=-=-=-=-=" << endl;
    cout << "Friendship Level: 2" << endl;
    cout << "=-=-=-=-=-=-=-=-=-=" << endl;
  }
  else if (friendshipLevel >= 40 && friendshipLevel <= 59){
    cout << endl;
    cout << "=-=-=-=-=-=-=-=-=-=" << endl;
    cout << "Friendship Level: 3" << endl;
    cout << "=-=-=-=-=-=-=-=-=-=" << endl;
  }
  else if (friendshipLevel >= 60 && friendshipLevel <= 79){
    cout << endl;
    cout << "=-=-=-=-=-=-=-=-=-=" << endl;
    cout << "Friendship Level: 4" << endl;
    cout << "=-=-=-=-=-=-=-=-=-=" << endl;
  }
  else if (friendshipLevel >= 80){
    cout << endl;
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-="<< endl;
    cout << "Friendship Level: 5 (MAX)" << endl;
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
  }
}
