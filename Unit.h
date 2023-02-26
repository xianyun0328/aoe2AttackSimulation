#ifndef Unit_H
#define Unit_H
//单位类
class Unit{
        int HP_max;//血量
        int HP_cur;//当前血量
        int attack;//攻击力
        int armor;//防御力
        int reloadTime;//攻击间隔
    public:
        //virtual void attack(Unit *a);//攻击
        //void attackedBy(Unit *b);//攻击
        //observer();// 观察者
};
#endif