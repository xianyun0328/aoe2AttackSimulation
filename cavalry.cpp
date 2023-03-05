#include "cavalry.h"

using std::string;

Cavalry::Cavalry(string name, int HP_max, int attack, int armor, int reloadTime): 
Unit(name, HP_max, attack, armor, reloadTime) {}

int Cavalry::unit_attackedBy(Pikeman &opponent)
{
    return 22;
}
int Cavalry::unit_attackedBy(Camel &opponent)
{
    return 18;
}
int Cavalry::unit_attackedBy(Knight &opponent)
{
    return 0;
}
int Cavalry::unit_attackedBy(Mamluk &opponent)
{
    return 0;
}
