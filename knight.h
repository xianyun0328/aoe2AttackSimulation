#ifndef Knight_H
#define Knight_H
#include "unit.h"
#include "cavalry.h"
//using std::string;
//骑士类
class Knight : public Cavalry{
    public:
        Knight();
        void unit_attack(Unit &opponent) override;
        int unit_attackedBy(Pikeman &opponent) override;
        int unit_attackedBy(Camel &opponent) override;
        int unit_attackedBy(Knight &opponent) override;
        int unit_attackedBy(Mamluk &opponent) override;
};

#endif