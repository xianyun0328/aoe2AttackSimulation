#include "mamluk.h"

Mamluk::Mamluk() : Camel("Mamluk", 60, 8, 0, 2000){}

void Mamluk::unit_attack(Unit &opponent){
    opponent.reduceHPcur(opponent.unit_attackedBy(*this));//扣除血量
    Unit::unit_attack(opponent);
}

int Mamluk::unit_attackedBy(Pikeman &opponent){
    return Camel::unit_attackedBy(opponent)+11;
}

int Mamluk::unit_attackedBy(Camel &opponent){
    return 5;
}

int Mamluk::unit_attackedBy(Knight &opponent){
    return 0;
}

int Mamluk::unit_attackedBy(Mamluk &opponent){
    return 0;
}