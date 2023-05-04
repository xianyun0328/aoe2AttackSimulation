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
    //Knight *k1 = new Knight();
    // Knight *k2 = new Knight();
    Mamluk *m1 = new Mamluk();
    Mamluk *m2 = new Mamluk();
    int leftUnit = m1->getreloadTime();
    int rightUnit = m2->getreloadTime();
    int time = 0;
    while(1){
        time+=100;
        if(time % leftUnit == 0){
            if(m1->unit_attack(*m2) == 0){
                cout<<*m1<<endl<<*m2<<endl<<"m2 GameOver"<<endl;
                break;
            }
        }
        if(time % rightUnit == 0){
            if(m2->unit_attack(*m1) == 0){
                cout<<*m1<<endl<<*m2<<endl<<"m1 GameOver"<<endl;
                break;
            }
        }
    }
    cout << "ending simulation..." << endl;
    return 0;
}