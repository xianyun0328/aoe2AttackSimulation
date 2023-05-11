#include "camel.h"
Camel::Camel() : Cavalry("camel rider", 100, 6, 0, 2000){}
Camel::Camel(string name, int HP_max, int attack, int armor, int reloadTime): 
Cavalry(name, HP_max, attack, armor, reloadTime) {}
void Camel::unit_attack(Unit &opponent){
    opponent.reduceHPcur(opponent.unit_attackedBy(*this));//扣除血量
    Unit::unit_attack(opponent);
}
int Camel::unit_attackedBy(Pikeman &opponent){
    return 18;
}
int Camel::unit_attackedBy(Camel &opponent){
    return 5;
}
int Camel::unit_attackedBy(Knight &opponent){
    return 0;
}
int Camel::unit_attackedBy(Mamluk &opponent){
    return 0;
}