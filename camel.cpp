#include "camel.h"

// remove, added for showing polymorphsim
#include <iostream>
using std::cout;
Camel::Camel() : Cavalry("camel rider", 100, 6, 0, 2000){}
void Camel::unit_attack(Unit &opponent){
    cout << "camel attacking:" << endl;
    cout << opponent <<  endl;
}

// void Camel::unit_attackedBy(Unit *b){
//     int delHPnum = b->getattack() - this->getarmor();
//     if(b->getname() == "Pikeman"){
//          delHPnum += 20;
//          cout<<"changjibing+20 sum del:"<<delHPnum<<endl;
//     }
//     this->DelHPcur(delHPnum);
// }
