#ifndef Calalry_H
#define Calalry_H
#include "unit.h"
using std::string;
//骑兵类
class Cavalry : public Unit{
    public:
    Cavalry(string name, int HP_max, int attack, int armor, int reloadTime);
};
#endif