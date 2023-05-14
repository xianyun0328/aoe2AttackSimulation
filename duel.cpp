#include "duel.h"

Duel::Duel(Unit* left,Unit* right):left(left),right(right){
}
Unit* Duel::start(){
    time = new Time(left,right);
    obLeft = new AliveObserver(left);
    obRight = new AliveObserver(right);
    enum attackNum{a = 1,b,c};
    left->addObserver(obLeft);
    right->addObserver(obRight);
    while(obLeft->getAlive()&&obRight->getAlive()){
        switch(time->nextAttack()){
            case a:
                left->unit_attack(*right);
                cout<<"左边攻击右边"<<endl;
                break;
            case b:
                right->unit_attack(*left);
                cout<<"右边攻击左边"<<endl;
                break;
            case c:
                left->unit_attack(*right);
                right->unit_attack(*left);
                cout<<"互相攻击"<<endl;
                break;
        }
    }
    return obLeft->getAlive() ? left:right;
}