#ifndef chacha_H
#define chacha_H
#include "infantry.h"
#include "unit.h"
//叉叉
class chacha : public Infantry{
    public:
        chacha(int HPmax,int attack,int armor,int reloadTime):Infantry(HPmax,attack,armor,reloadTime){
            this->setName("changjibing");
        };
        void unit_attack(Unit *a);//攻击
        void unit_attackedBy(Unit *b);//被攻击
};
#endif