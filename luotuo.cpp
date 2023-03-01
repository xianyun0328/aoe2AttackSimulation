#include "luotuo.h"

void luotuo::unit_attack(Unit *a){

}

void luotuo::unit_attackedBy(Unit *b){
    int delHPnum = b->getattack() - this->getarmor();
    if(b->getname() == "changjibing"){
         delHPnum += 20;
         cout<<"changjibing+20 sum del:"<<delHPnum<<endl;
    }
    this->setHPcur(delHPnum);
}
