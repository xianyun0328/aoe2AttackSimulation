#include "duel.h"

Duel::Duel(Unit* left,Unit* right):left(left),right(right){
}
Unit* Duel::start(){
    int i = 0;
    time = new Time(left,right);
    obLeft = new AliveObserver(left);
    obRight = new AliveObserver(right);
    enum attackNum{a = 1,b,c};
    enum randomAttackEnum{leftAttack = 1,rightAttack};
    left->addObserver(obLeft);
    right->addObserver(obRight);
    while(obLeft->getAlive()&&obRight->getAlive()){
        i++;
        switch(time->nextAttack()){
            case a:
                cout<<endl<<"回合"<<i<<endl;
                cout<<"攻击者:"<<*left<<"被攻击者"<<*right;
                left->unit_attack(*right);
                cout<<"回合结束,被攻击者状态:"<<*right<<endl<<endl;
                break;
            case b:
                cout<<endl<<"回合"<<i<<endl;
                cout<<"攻击者:"<<*right<<"被攻击者"<<*left;
                right->unit_attack(*left);
                cout<<"回合结束,被攻击者状态:"<<*left<<endl<<endl;
                break;
            case c:
                int randomAttack = rand()%2+1;
                switch(randomAttack){
                    case leftAttack:
                        cout<<endl<<"回合"<<i<<endl;
                        cout<<"同时到达攻击时间,随机优先出手,第一轮"<<endl;
                        cout<<"攻击者:"<<*left<<"被攻击者"<<*right;
                        left->unit_attack(*right);
                        cout<<"第一轮结束,被攻击者状态:"<<*right;
                        if(!obRight->getAlive()){
                            cout<<"被攻击者在第一轮阵亡,随机回合提前结束"<<endl;
                            break;
                        };
                        cout<<"第二轮"<<endl;
                        cout<<"攻击者:"<<*right<<"被攻击者"<<*left;
                        right->unit_attack(*left);
                        cout<<"第二轮结束,被攻击者状态:"<<*left<<endl;
                        break;
                    case rightAttack:
                        cout<<endl<<"回合"<<i<<endl;
                        cout<<"同时到达攻击时间,随机优先出手,第一轮"<<endl;
                        cout<<"攻击者:"<<*right<<"被攻击者"<<*left;
                        right->unit_attack(*left);
                        cout<<"第一轮结束,被攻击者状态:"<<*left;
                        if(!obLeft->getAlive()){
                            cout<<"被攻击者在第一轮阵亡,随机回合提前结束"<<endl;
                            break;
                        };
                        cout<<"第二轮"<<endl;
                        cout<<"攻击者:"<<*left<<"被攻击者"<<*right;
                        left->unit_attack(*right);
                        cout<<"第二轮结束,被攻击者状态:"<<*right<<endl;
                        break;
                }
                break;
        }
    }
    return obLeft->getAlive() ? left:right;
}