#include "unit.h"
#include <iostream>
using std::string;
using std::ostream;

Unit::Unit(string name, int HP_max, int attack, int armor, int reloadTime) : 
name(name), HP_max(HP_max), HP_cur(HP_max), attack(attack), armor(armor), reloadTime(reloadTime){}

ostream & operator << (ostream &out, const Unit &u){
    out<<"name: "<<u.name;
    if(u.debug_tag != "") {
        out << " " << u.debug_tag;
    } 
    out << endl;
    out <<"HP: "<<u.HP_cur<<"/"<<u.HP_cur<<endl;
    out <<"attack: "<<u.attack<<endl;
    out <<"armor: "<<u.armor<<endl;
    out <<"reloadTime: "<<u.reloadTime<<endl;
    return out;

}
string Unit::getname(){
    return name;
}
int Unit::getHPmax(){
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
void Unit::reduceHPcur(int reduce_by) {
    HP_cur -= reduce_by;
}

void Unit::setDebugTag(string tag) {
    debug_tag = tag;
}


 void Unit::unit_attack(Unit &opponent) {
   cout << *this << endl;
   cout << "attacking" << endl;
   cout << opponent << endl;
   int base_damage =  max(this->getattack() - opponent.getarmor(), 1); // at least 1 hit point
   cout << "deducting base damage: "<< opponent.getattack() << "-" << this->getarmor() << "=" << base_damage << endl;
 }
 