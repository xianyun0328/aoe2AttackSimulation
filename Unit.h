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
        Unit();
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
        void setName(string name);
        void setHPmax(int HPmax);
        void DelHPcur(int delHPcur);
        void setHPcur(int HPcur);
        void setattack(int attack);
        void setarmor(int armor);
        void setreloadTime(int reloadTime);
};
#endif