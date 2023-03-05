#ifndef Camel_H
#define Camel_H
#include "cavalry.h"
#include "unit.h"
// using std::string;
//骆驼类
class Camel : public Cavalry{
    public:
        Camel();
        Camel(string name, int HP_max, int attack, int armor, int reloadTime);
        void unit_attack(Unit &opponent) override;
        int unit_attackedBy(Pikeman &opponent) override;
        int unit_attackedBy(Camel &opponent) override;
        int unit_attackedBy(Knight &opponent) override;
        int unit_attackedBy(Mamluk &opponent) override;
};
#endif