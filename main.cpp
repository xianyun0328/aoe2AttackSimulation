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
    p1->setDebugTag("A");
    Pikeman *p2 = new Pikeman();
    p2->setDebugTag("B");
    Camel *c1 = new Camel();
    c1->setDebugTag("C");
    Camel *c2 = new Camel();
    c2->setDebugTag("D");
    // p1->unit_attack(*p2); // pike attacks pike
    p1->unit_attack(*c1); // pike attacks camel
    // c1->unit_attack(*c2); // camel attacks camel
    // c1->unit_attack(*p1); // camel attacks pike

    cout << "ending simulation..." << endl;
    return 0;
}