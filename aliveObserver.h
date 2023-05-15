#ifndef aliveObserver_H
#define aliveObserver_H
#include "unit.h"
//观察者
class AliveObserver : public Observer{
    private:
        bool unit_alive;
        Unit* unit;
    public:
        AliveObserver(Unit* unit);
        void notified();
        bool getAlive();
    
        
};
#endif