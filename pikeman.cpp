#include "pikeman.h"

Pikeman::Pikeman() : Infantry("pikeman", 55, 4, 0, 3000){}

void Pikeman::unit_attack(Unit &opponent){
    cout << "pikeman attacking:" << endl;
    cout << opponent <<  endl;
}
// void Pikeman::unit_attackedBy(Unit *b){
//     int delHPnum = b->getattack() - this->getarmor();
//     this->DelHPcur(delHPnum);   
// }