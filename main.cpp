#include <iostream>
#include "observer.h"
#include "aliveObserver.h"
#include "unit.h"
#include "infantry.h"
#include "cavalry.h"
#include "pikeman.h"
#include "camel.h"
#include "knight.h"
#include "mamluk.h"
#include "time.h"
using namespace std;
int main(){
    cout << "starting simulation..." << endl;
    // Pikeman *p1 = new Pikeman();
    // Pikeman *p2 = new Pikeman();
    // Camel *c1 = new Camel();
    // Camel *c2 = new Camel();
    //Knight *k1 = new Knight();
    // Knight *k2 = new Knight();
    Unit *m1 = new Mamluk();
    Unit *m2 = new Knight();
    AliveObserver* ob1 = new AliveObserver(m1);
    AliveObserver* ob2 = new AliveObserver(m2);
    m1->addObserver(ob1);
    m2->addObserver(ob2);
    //Time* t = new Time(m1,m2);
    // while(1){
    //     if(t->nextAttack() == m1){
    //         m1->unit_attack(*m2);
    //         cout<<"m1 attack m2"<<endl;
    //         if(ob2->unit_alive == 0){
    //             break;
    //         }
    //     }else{
    //         m2->unit_attack(*m1);
    //         cout<<"m2 attack m1"<<endl;
    //         if(ob1->unit_alive == 0){
    //             break;
    //         }
    //     }
    // }
    cout<<*m1<<endl;
    cout<<*m2<<endl;
    cout << "ending simulation..." << endl;
    return 0;
}