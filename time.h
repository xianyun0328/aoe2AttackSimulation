#ifndef Time_H
#define Time_H
#include "unit.h"
class Time{
    private:
        Unit* left;
        Unit* right;
        int leftTime;
        int rightTime;
    public:
        Time(Unit* left,Unit* right);
        Unit* nextAttack();
};



#endif