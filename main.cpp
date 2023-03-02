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
    Pikeman *s = new Pikeman(10,10,10,10);
    Camel *lt = new Camel(200,5,5,10);
    s->unit_attack(lt);
    lt->printfUnit();
    return 0;
}