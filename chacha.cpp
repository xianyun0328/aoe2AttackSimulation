#include "chacha.h"
void chacha::unit_attack(Unit *a){
    a->unit_attackedBy(this);
}
void chacha::unit_attackedBy(Unit *b){
    int delHPnum = b->getattack() - this->getarmor();
    this->setHPcur(delHPnum);   
}