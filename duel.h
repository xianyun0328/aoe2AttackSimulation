#ifndef Duel_H
#define Duel_H
#include <random>
#include "unit.h"
#include "time.h"
#include "aliveObserver.h"
class Duel{
    private:
        Unit* left;
        Unit* right;
        Time* time;
        AliveObserver* obLeft;
        AliveObserver* obRight;
    public:
        Duel(Unit* left,Unit* right);
        Unit* start();
};
#endif