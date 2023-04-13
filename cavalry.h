#ifndef Calalry_H
#define Calalry_H
#include "unit.h"
// using std::string;
//骑兵类
class Cavalry : public Unit{
    public:
        Cavalry(string name, int HP_max, int attack, int armor, int reloadTime);
        int unit_attackedBy(Pikeman &opponent) override;
        int unit_attackedBy(Camel &opponent) override;
        int unit_attackedBy(Knight &opponent) override;
        int unit_attackedBy(Mamluk &opponent) override;
};
#endif