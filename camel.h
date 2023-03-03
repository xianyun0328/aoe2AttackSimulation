#ifndef Camel_H
#define Camel_H
#include "cavalry.h"
#include "unit.h"
// using std::string;
//骑兵类
class Camel : public Cavalry{
    public:
        Camel();
        void unit_attack(Unit &opponent) override;
        // void unit_attack(Unit *a);//攻击
        // void unit_attackedBy(Unit *b);//被攻击
};
#endif