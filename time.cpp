#include "time.h"
Time::Time(Unit* left,Unit* right):left(left),right(right),leftTime(0),rightTime(0){

}
Unit* Time::nextAttack(){
    while (1){
        leftTime+=100;
        rightTime+=100;
        if(leftTime>= left->getreloadTime()){
            leftTime-=left->getreloadTime();
            return left;
        }
        if(rightTime>= right->getreloadTime()){
            rightTime-=right->getreloadTime();
            return right;
        }
    }
    
}