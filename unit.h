#ifndef Unit_H
#define Unit_H
#include <iostream>
using namespace std;
class Pikeman;
class Camel;
class Knight;
class Mamluk;
class AliveObserver;
//单位类
class Unit{
        string name;//名称
        int HP_max;//血量
        int HP_cur;//当前血量
        int attack;//攻击力
        int armor;//防御力
        int reloadTime;//攻击间隔 (in ms)
        AliveObserver* ob;//观察者
    public:
        Unit(string name, int HP_max, int attack, int armor, int reloadTime);
        virtual void unit_attack(Unit &opponent);//攻击
        virtual int unit_attackedBy(Pikeman &opponent) = 0;//被长戟兵攻击
        virtual int unit_attackedBy(Camel &opponent) = 0;//被骆驼攻击
        virtual int unit_attackedBy(Knight &opponent) = 0;//被骑士攻击
        virtual int unit_attackedBy(Mamluk &opponent) = 0;//被马穆鲁克攻击
        void addAliveObserver(AliveObserver* ob);
        void notifyAliveObserver(); //观察者
        string getname();
        int getHPmax();
        int getHPcur();
        int getattack();
        int getarmor();
        int getreloadTime();
        void reduceHPcur(int reduceBy);
    friend ostream & operator << (ostream &out, const Unit &u);

};
#endif