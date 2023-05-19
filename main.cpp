#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include "CharacterSelect.h"
using namespace std;
enum Choices {NEW = 1, QUIT};

void characterSelection();
void characterSearch();
void characterCreate();
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
  int input; 
  cout << "Welcome To My WW1 Text Based Adventure Game!\n" << endl;
  cout << "1. New Game" << endl;
  cout << "2. Quit" << endl;
  cin >> input;
  return input;
}

void characterSelection(){
  int input; 
  cout << "What would you like to do?\n" << endl;
  cout << "1. Search for Character" << endl;
  cout << "2. Create new Character" << endl;
  cin >> input;
  do {
    switch(input) {
    case 1: 
      system("clear");
      characterSearch();
    case 2: 
      system("clear");
      characterCreate();
    default:
      system("clear");
      break;
    }
  } while (input > 2);
}

// Character Select Function
void characterSearch(){}

// Character Creation Function
void characterCreate(){}
