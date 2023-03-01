#include "unit.h"
#include <iostream>
using namespace std;
// //攻击
// void Unit::attack(Unit *a){
//     a->attackedBy(this);
// }
// //被攻击
// void Unit::attackedBy(Unit *b){
//     this->HP_cur -= b->Unit_attack - this->Unit_armor;
// }
Unit::Unit(int HPmax,int attack,int armor,int reloadTime) 
: HP_max(HPmax),attack(attack),armor(armor),reloadTime(reloadTime){
    this->HP_cur = HP_max;
}
void Unit::printfUnit(){
    cout<<"name:"<<this->name<<endl<<"HPmax:"<<this->HP_max<<endl<<"HPcur:"<<this->HP_cur<<endl<<"attack:"<<this->attack<<endl<<"armor:"<<this->armor<<endl<<"reloadTime:"<<this->reloadTime<<endl<<endl;
}
string Unit::getname()
{
    return name;
}
int Unit::getHPmax()
{
    return HP_max;
}
int Unit::getHPcur(){
    return HP_cur;
}
int Unit::getattack(){
    return attack;
}
int Unit::getarmor(){
    return armor;
}
int Unit::getreloadTime(){
    return reloadTime;
}
void Unit::setHPcur(int delHPnum){
    HP_cur -= delHPnum;
}
void Unit::setName(string name){
    this->name = name;
}
void Unit::unit_attack(Unit *a){
}
void Unit::unit_attackedBy(Unit *b){
}