#include "pikeman.h"

Pikeman::Pikeman() : Infantry("pikeman", 55, 4, 0, 3000){}

void Pikeman::unit_attack(Unit &opponent){
    opponent.reduceHPcur(opponent.unit_attackedBy(*this));//扣除血量
    Unit::unit_attack(opponent);
}

int Pikeman::unit_attackedBy(Pikeman &opponent){
    return 0;
}

int Pikeman::unit_attackedBy(Camel &opponent){
    return 0;
}

int Pikeman::unit_attackedBy(Knight &opponent){
    return 0;
}

int Pikeman::unit_attackedBy(Mamluk &opponent){
    return 0;
}