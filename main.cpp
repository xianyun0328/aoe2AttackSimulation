#include <iostream>
#include "unit.h"
#include "infantry.h"
#include "cavalry.h"
#include "pikeman.h"
#include "camel.h"
using namespace std;
int main(){
    cout << "starting simulation..." << endl;
    Pikeman *p1 = new Pikeman();
    Camel *c1 = new Camel();
    cout << *c1 << endl;
    cout << *p1 << endl;
    // s->unit_attack(lt);
    // lt->printUnit();
    cout << "ending simulation..." << endl;
    return 0;
}