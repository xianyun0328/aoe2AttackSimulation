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
Unit::Unit() {
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
void Unit::DelHPcur(int delHPnum){
    HP_cur -= delHPnum;
}
void Unit::setHPcur(int HPcur){
    this->HP_cur = HPcur;
}
void Unit::setName(string name){
    this->name = name;
}
void Unit::setHPmax(int HPmax){
    this->HP_max = HPmax;
}
void Unit::setattack(int attack){
    this->attack = attack;
}
void Unit::setarmor(int arrmor){
    this->armor = arrmor;
}
void Unit::setreloadTime(int reloadTime){
    this->reloadTime = reloadTime;
}
void Unit::unit_attack(Unit *a){
}
void Unit::unit_attackedBy(Unit *b){
}