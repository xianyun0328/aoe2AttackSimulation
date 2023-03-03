#include "infantry.h"

// remove
#include <iostream>
using std::cout;
using std::endl;
// end of remove

Infantry::Infantry(string name, int HP_max, int attack, int armor, int reloadTime): 
Unit(name, HP_max, attack, armor, reloadTime) {}

void Infantry::unit_attack(Unit &opponent) {
    cout << "unit_attack inside infantry" << endl;
}