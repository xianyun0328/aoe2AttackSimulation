#ifndef Time_H
#define Time_H
#include "unit.h"
class Time{
    private:
        int time;
        Unit* left;
        Unit* right;
    public:
        Time(Unit* left,Unit* right);
        int nextAttack();
};



#endif