#include "knight.h"
Knight::Knight() : Cavalry("Knight", 100, 10, 2, 2000){}

bool Knight::unit_attack(Unit &opponent){
    Unit::unit_attack(opponent);
    opponent.reduceHPcur(opponent.unit_attackedBy(*this));//扣除血量
    return opponent.observer(opponent);//观察状态
}
int Knight::unit_attackedBy(Pikeman &opponent){
    return 18;
}
int Knight::unit_attackedBy(Camel &opponent){
    return 5;
}
int Knight::unit_attackedBy(Knight &opponent){
    return 0;
}
int Knight::unit_attackedBy(Mamluk &opponent){
    return 9;
}