#include "unit.h"
#include "aliveObserver.h"
#include <iostream>
using std::string;
using std::ostream;

Unit::Unit(string name, int HP_max, int attack, int armor, int reloadTime) : 
name(name), HP_max(HP_max), HP_cur(HP_max), attack(attack), armor(armor), reloadTime(reloadTime){}

ostream & operator << (ostream &out, const Unit &u){
    out<<"name: "<<u.name<<endl;
    out <<"HP: "<<u.HP_cur<<"/"<<u.HP_max<<endl;
    out <<"attack: "<<u.attack<<endl;
    out <<"armor: "<<u.armor<<endl;
    out <<"reloadTime: "<<u.reloadTime<<endl;
    return out;

}
void Unit::addObserver(Observer* ob) {
    this->obs.push_back(ob);
}
void Unit::notifyObservers() {
    for(auto i : obs){
        i->notified();
    }
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
void Unit::unit_attack(Unit &opponent){
    int delNum = max(this->getattack() - opponent.getarmor(),1);//计算基础伤害,最低1点
    opponent.reduceHPcur(delNum);
    opponent.notifyObservers();
}