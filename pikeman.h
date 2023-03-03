#ifndef Pikeman_H
#define Pikeman_H
#include "infantry.h"
#include "unit.h"
//叉叉
class Pikeman : public Infantry{
    public:
        Pikeman():Infantry(){
            this->setName("Pikeman");
            this->setHPmax(50);
            this->setHPcur(50);
            this->setattack(3);
            this->setarmor(0);
            this->setreloadTime(1000);
        };
        void unit_attack(Unit *a);//攻击
        void unit_attackedBy(Unit *b);//被攻击
};
#endif