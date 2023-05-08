#include "observer.h"

Observer::Observer(Unit* unit) : unit(unit){
}
bool Observer::lifeState(){
    return unit->getHPcur()>0;
}