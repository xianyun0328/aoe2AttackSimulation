#ifndef Observer_H
#define Observer_H
#include "unit.h"
//观察者
class AliveObserver{
    public:
        AliveObserver(Unit* unit);
        void notified();
    private:
        Unit* unit;
        bool unit_alive;
};

#endif