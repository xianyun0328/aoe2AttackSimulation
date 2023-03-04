#include "camel.h"

// remove, added for showing polymorphsim
#include <iostream>
using std::cout;
// end of remove

Camel::Camel() : Cavalry("camel rider", 100, 6, 0, 2000){}
void Camel::unit_attack(Unit &opponent){
    cout << *this << endl;
    opponent.unit_attackedBy(*this);
}

void Camel::unit_attackedBy(Pikeman &opponent) {
    cout << "camel attacked by pikeman!" << endl;
    cout << *this << endl;
}
void Camel::unit_attackedBy(Camel &opponent) {
    cout << "camel attacked by camel!" << endl;
    cout << *this << endl;
}