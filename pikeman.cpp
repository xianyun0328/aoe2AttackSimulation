#include "pikeman.h"

// remove, added for showing polymorphsim
#include <iostream>
using std::cout;
// end of remove

Pikeman::Pikeman() : Infantry("pikeman", 55, 4, 0, 3000){}

void Pikeman::unit_attack(Unit &opponent){
    cout << *this << endl;
    opponent.unit_attackedBy(*this);
}

void Pikeman::unit_attackedBy(Pikeman &opponent) {
    cout << "pikeman attacked by pikeman!" << endl;
    cout << *this << endl;
}
void Pikeman::unit_attackedBy(Camel &opponent) {
    cout << "pikeman attacked by camel!" << endl;
    cout << *this << endl;
}