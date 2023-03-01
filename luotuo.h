#ifndef luotuo_H
#define luotuo_H
#include "cavalry.h"
#include "unit.h"
//骑兵类
class luotuo : public Cavalry{
    public:
        luotuo(int HPmax,int attack,int armor,int reloadTime):Cavalry(HPmax,attack,armor,reloadTime){
            this->setName("luotuobing");
        };
        void unit_attack(Unit *a);//攻击
        void unit_attackedBy(Unit *b);//被攻击
};
#endif