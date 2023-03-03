#ifndef Camel_H
#define Camel_H
#include "cavalry.h"
#include "unit.h"
//骑兵类
class Camel : public Cavalry{
    public:
        Camel():Cavalry(){
            this->setName("Camel");
            this->setHPmax(120);
            this->setHPcur(120);
            this->setattack(6);
            this->setarmor(0);
            this->setreloadTime(1000);
        };
        void unit_attack(Unit *a);//攻击
        void unit_attackedBy(Unit *b);//被攻击
};
#endif