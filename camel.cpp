#include "camel.h"

void Camel::unit_attack(Unit *a){

}

void Camel::unit_attackedBy(Unit *b){
    int delHPnum = b->getattack() - this->getarmor();
    if(b->getname() == "Pikeman"){
         delHPnum += 20;
         cout<<"changjibing+20 sum del:"<<delHPnum<<endl;
    }
    this->DelHPcur(delHPnum);
}
