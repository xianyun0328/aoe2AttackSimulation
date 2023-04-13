#ifndef Pikeman_H
#define Pikeman_H
#include "infantry.h"
#include "unit.h"
//长戟兵
class Pikeman : public Infantry{
    public:
        Pikeman();
        void unit_attack(Unit &opponent) override;
        int unit_attackedBy(Pikeman &opponent) override;
        int unit_attackedBy(Camel &opponent) override;
        int unit_attackedBy(Knight &opponent) override;
        int unit_attackedBy(Mamluk &opponent) override;
};
#endif