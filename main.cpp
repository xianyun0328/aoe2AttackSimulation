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
#include "duel.h"
using namespace std;
int main(){
    system("chcp 65001");
    cout << "starting simulation..." << endl;
    // Pikeman *p1 = new Pikeman();
    // Pikeman *p2 = new Pikeman();
    // Camel *c1 = new Camel();
    // Camel *c2 = new Camel();
    //Knight *k1 = new Knight();
    // Knight *k2 = new Knight();
    Unit *m1 = new Mamluk();
    Unit *m2 = new Knight();
    Duel *duel = new Duel(m1,m2);
    cout<<"对决胜利者:"<<*duel->start();
    cout << "ending simulation..." << endl;
    return 0;
}