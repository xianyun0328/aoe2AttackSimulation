#include <iostream>
#include "unit.h"
#include "infantry.h"
#include "cavalry.h"
#include "pikeman.h"
#include "camel.h"
using namespace std;
int main(){
    // cout << "starting simulation..." << endl;
    // cout << "ending simulation..." << endl;
    Pikeman *s = new Pikeman();
    Camel *lt = new Camel();
    s->unit_attack(lt);
    lt->printfUnit();
    return 0;
}