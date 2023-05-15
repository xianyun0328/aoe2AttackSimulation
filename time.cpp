#include "time.h"
Time::Time(Unit* left,Unit* right):left(left),right(right){
    time = 0;
}
int Time::nextAttack(){
    bool tf = true;
    while (tf){
        time+=100;
        if(time%left->getreloadTime() == 0 && time%right->getreloadTime() == 0){
            return 3;
        }else if(time%left->getreloadTime() == 0){
            return 1;
        }else if(time%right->getreloadTime() == 0){
            return 2;
        }
    }
    return 0;
}