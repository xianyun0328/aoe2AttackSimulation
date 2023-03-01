#ifndef Unit_H
#define Unit_H
#include <iostream>
using namespace std;
//单位类
class Unit{
        string name;//名称
        int HP_max;//血量
        int HP_cur;//当前血量
        int attack;//攻击力
        int armor;//防御力
        int reloadTime;//攻击间隔
    public:
        Unit(int HPmax,int attack,int armor,int reloadTime);
        virtual void unit_attack(Unit *a);//攻击
        virtual void unit_attackedBy(Unit *b);//被攻击
        //observer();// 观察者
        void printfUnit();
        string getname();
        int getHPmax();
        int getHPcur();
        int getattack();
        int getarmor();
        int getreloadTime();
        void setHPcur(int HPcur);
        void setName(string name);
};
#endif