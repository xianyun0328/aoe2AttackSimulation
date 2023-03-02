#ifndef Pikeman_H
#define Pikeman_H
#include "infantry.h"
#include "unit.h"
//叉叉
class Pikeman : public Infantry{
    public:
        Pikeman(int HPmax,int attack,int armor,int reloadTime):Infantry(HPmax,attack,armor,reloadTime){
            this->setName("Pikeman");
        };
        void unit_attack(Unit *a);//攻击
        void unit_attackedBy(Unit *b);//被攻击
};
#endif