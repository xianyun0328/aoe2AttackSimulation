#include "Unit.h"
//攻击
void Unit::attack(Unit *a){
    a->attackedBy(this);
}
//被攻击
void Unit::attackedBy(Unit *b){
    this->HP_cur -= b->Unit_attack - this->Unit_armor;
}