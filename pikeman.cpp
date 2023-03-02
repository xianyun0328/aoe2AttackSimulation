#include "pikeman.h"
void Pikeman::unit_attack(Unit *a){
    a->unit_attackedBy(this);
}
void Pikeman::unit_attackedBy(Unit *b){
    int delHPnum = b->getattack() - this->getarmor();
    this->setHPcur(delHPnum);   
}