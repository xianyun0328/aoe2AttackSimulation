#ifndef aliveObserver_H
#define aliveObserver_H
#include "unit.h"

//观察者
class AliveObserver : public Observer{
    public:
        AliveObserver(Unit* unit);
        void notified();
    private:
        Unit* unit;
        bool unit_alive;
};

#endif