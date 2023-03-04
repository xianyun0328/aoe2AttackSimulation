#ifndef Pikeman_H
#define Pikeman_H
#include "infantry.h"
#include "unit.h"
//叉叉
class Pikeman : public Infantry{
    public:
    Pikeman();
    void unit_attack(Unit &opponent) override;
    int unit_attackedBy(Pikeman &opponent) override;
    int unit_attackedBy(Camel &opponent) override;
};
#endif