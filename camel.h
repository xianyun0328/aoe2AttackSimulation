#ifndef Camel_H
#define Camel_H
#include "cavalry.h"
#include "unit.h"
//骑兵类
class Camel : public Cavalry{
    public:
        Camel(int HPmax,int attack,int armor,int reloadTime):Cavalry(HPmax,attack,armor,reloadTime){
            this->setName("Camel");
        };
        void unit_attack(Unit *a);//攻击
        void unit_attackedBy(Unit *b);//被攻击
};
#endif