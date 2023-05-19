#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include "CharacterSelect.h"
using namespace std;
enum Choices {NEW = 1, QUIT};

void characterSelection();
int mainMenu();

int main() {
  // Variable Setup
  int input;

  // Struct Setup
    struct characterStats{
      string name;
      string country;
      string division;
      int age;
      int strength;
      int health;
    };

  // Character Selection
  do {
    input = mainMenu();
    switch(input) {
      case NEW: 
        system("clear");
        characterSelection();
      default:
        system("clear");
        break;
    }
  } while(input != QUIT);
  
}

// Main Menu
int mainMenu(){
  
}
