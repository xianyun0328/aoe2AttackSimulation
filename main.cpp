#include <iostream>
#include "unit.h"
#include "infantry.h"
#include "cavalry.h"
#include "chacha.h"
#include "luotuo.h"
using namespace std;
int main(){
    // cout << "starting simulation..." << endl;
    // cout << "ending simulation..." << endl;
    chacha *s = new chacha(10,10,10,10);
    luotuo *lt = new luotuo(200,5,5,10);
    s->unit_attack(lt);
    lt->printfUnit();
    return 0;
}