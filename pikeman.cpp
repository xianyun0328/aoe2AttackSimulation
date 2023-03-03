#include "pikeman.h"

Pikeman::Pikeman() : Infantry("pikeman", 55, 4, 0, 3000){}

// void Pikeman::unit_attack(Unit *a){
//     a->unit_attackedBy(this);
// }
// void Pikeman::unit_attackedBy(Unit *b){
//     int delHPnum = b->getattack() - this->getarmor();
//     this->DelHPcur(delHPnum);   
// }