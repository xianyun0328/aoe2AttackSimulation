#include "infantry.h"

Infantry::Infantry(string name, int HP_max, int attack, int armor, int reloadTime): 
Unit(name, HP_max, attack, armor, reloadTime) {}

int Infantry::unit_attackedBy(Pikeman &opponent){
    return 0;
}
int Infantry::unit_attackedBy(Camel &opponent){
    return 0;
}
int Infantry::unit_attackedBy(Knight &opponent){
    return 0;
}
int Infantry::unit_attackedBy(Mamluk &opponent){
    return 0;
}