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
        int reloadTime;//攻击间隔 (in ms)
    public:
        Unit(string name, int HP_max, int attack, int armor, int reloadTime);
        virtual void unit_attack(Unit &opponent) = 0;//攻击
        // virtual void unit_attackedBy(Unit &b);//被攻击
        //observer();// 观察者

        // getters
        string getname();
        int getHPmax();
        int getHPcur();
        int getattack();
        int getarmor();
        int getreloadTime();
        
        void reduceHPcur(int reduceBy);
        // void setName(string name);
        // void setHPmax(int HPmax);
        // void setHPcur(int HPcur);
        // void setattack(int attack);
        // void setarmor(int armor);
        // void setreloadTime(int reloadTime);
    
    friend ostream & operator << (ostream &out, const Unit &u);

};
#endif