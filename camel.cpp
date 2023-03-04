#include "camel.h"

Camel::Camel() : Cavalry("camel rider", 100, 6, 0, 2000){}

void Camel::unit_attack(Unit *opponent){
    Unit::unit_attack(opponent);
    opponent->reduceHPcur(opponent->unit_attackedBy(this));
}
int Camel::unit_attackedBy(Pikeman *opponent){
    return Cavalry::unit_attackedBy(opponent)+9;
}
int Camel::unit_attackedBy(Camel *opponent){
    return 9;
}