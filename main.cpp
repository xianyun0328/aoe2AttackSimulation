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

using namespace std;
int main(){
    cout << "starting simulation..." << endl;
    // Pikeman *p1 = new Pikeman();
    // Pikeman *p2 = new Pikeman();
    // Camel *c1 = new Camel();
    // Camel *c2 = new Camel();
    //Knight *k1 = new Knight();
    // Knight *k2 = new Knight();
    Mamluk *m1 = new Mamluk();
    Mamluk *m2 = new Mamluk();
    AliveObserver* ob1 = new AliveObserver(m1);
    AliveObserver* ob2 = new AliveObserver(m2);
    m1->addObserver(ob1);
    m2->addObserver(ob2);
    // int leftUnit = m1->getreloadTime();
    // int rightUnit = m2->getreloadTime();
    // int time = 0;
    // while(1){
    //     time+=100;
    //     if(time % leftUnit == 0){
    //         m1->unit_attack(*m2);
    //         m2->notifyObserver();
    //     }
    //     if(time % rightUnit == 0){
    //         m2->unit_attack(*m1);
    //         m1->notifyObserver();
    //     }
    // }
    cout << "ending simulation..." << endl;
    return 0;
}