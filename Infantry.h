#ifndef Infantry_H
#define Infantry_H
#include "unit.h"
//步兵类
class Infantry : public Unit{
    public:
        Infantry(int HPmax,int attack,int armor,int reloadTime):Unit(HPmax,attack,armor,reloadTime){

        };
};
#endif