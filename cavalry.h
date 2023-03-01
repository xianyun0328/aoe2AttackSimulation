#ifndef Calalry_H
#define Calalry_H
#include "unit.h"
//骑兵类
class Cavalry : public Unit{
    public:
        Cavalry(int HPmax,int attack,int armor,int reloadTime):Unit(HPmax,attack,armor,reloadTime){

        };
};
#endif