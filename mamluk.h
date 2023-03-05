#ifndef Mamluk_H
#define Mamluk_H
#include "camel.h"
#include "unit.h"
// using std::string;
//马穆鲁克类
class Mamluk : public Camel{
    public:
        Mamluk();
        void unit_attack(Unit &opponent) override;
        int unit_attackedBy(Pikeman &opponent) override;
        int unit_attackedBy(Camel &opponent) override;
        int unit_attackedBy(Knight &opponent) override;
        int unit_attackedBy(Mamluk &opponent) override;
};
#endif