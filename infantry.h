#ifndef Infantry_H
#define Infantry_H
#include "unit.h"
//步兵类
class Infantry : public Unit{
    public:
        Infantry(string name, int HP_max, int attack, int armor, int reloadTime);
        int unit_attackedBy(Pikeman *opponent) override;
        int unit_attackedBy(Camel *opponent) override;
};
#endif