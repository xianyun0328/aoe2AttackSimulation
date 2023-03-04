#include "cavalry.h"

// remove
#include <iostream>
using std::cout;
using std::endl;
// end of remove

using std::string;

Cavalry::Cavalry(string name, int HP_max, int attack, int armor, int reloadTime): 
Unit(name, HP_max, attack, armor, reloadTime) {}

int Cavalry::unit_attackedBy(Pikeman &opponent) {
    cout << "pike on cav bonus" << endl;
    return 0;
}
int Cavalry::unit_attackedBy(Camel &opponent) {
    cout << "camel on cav bonus" << endl;
    return 0;
}