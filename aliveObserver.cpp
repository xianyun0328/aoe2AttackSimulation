#include "aliveObserver.h"

AliveObserver::AliveObserver(Unit* unit) : unit(unit), unit_alive{true} {
}
void AliveObserver::notified(){
    unit_alive = unit->getHPcur() > 0;
}