#include "camel.h"
// remove, added for showing polymorphsim
#include <iostream>
using std::cout;
// end of remove
Camel::Camel() : Cavalry("camel rider", 100, 6, 0, 2000){}
void Camel::unit_attack(Unit &opponent){
    Unit::unit_attack(opponent);
    opponent.unit_attackedBy(*this);
}

int Camel::unit_attackedBy(Pikeman &opponent) {
    cout << "camel attacked by pikeman!" << endl;
    Cavalry::unit_attackedBy(opponent); // pikeman to cav bonus
    return 0;
}
int Camel::unit_attackedBy(Camel &opponent) {
    cout << "camel attacked by camel!" << endl;
    return 0;
}