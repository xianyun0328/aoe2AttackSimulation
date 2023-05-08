#ifndef Observer_H
#define Observer_H
#include "unit.h"
//观察者
class Observer{
    public:
        Observer();
        Observer(Unit* unit);
        Unit* unit;
        bool lifeState();
};

#endif