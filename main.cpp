#include <iostream>
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
    Knight *k1 = new Knight();
    // Knight *k2 = new Knight();
    Mamluk *m1 = new Mamluk();
    Mamluk *m2 = new Mamluk();
    cout << *m1 << endl;
    m2->unit_attack(*m1);//m2攻击m1
    cout<<*m1<<endl;
    cout << "ending simulation..." << endl;
    return 0;
}