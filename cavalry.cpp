#include "cavalry.h"

// remove
#include <iostream>
using std::cout;
using std::endl;
// end of remove

using std::string;



Cavalry::Cavalry(string name, int HP_max, int attack, int armor, int reloadTime): 
Unit(name, HP_max, attack, armor, reloadTime) {}

void Cavalry::unit_attack(Unit &opponent) {
    cout << "unit_attack inside cavalry" << endl;
}