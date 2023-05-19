#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

class CharacterSelection {
  public: 
    void characterSearch();
    struct characterStats{
      string name;
      string country;
      string division;
      int age;
      int strength;
      int health;
    };
};
