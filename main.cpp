#include <iostream>
#include "Unit.h"
#include "Infantry.h"
#include "Calalry.h"
using namespace std;
int main(){
    Infantry *chacha = new Infantry();
    Calalry *jinma = new Calalry();
    bool gameOver = true;
    while(gameOver){
        chacha->attack(jinma);
        jinma->attack(chacha);
        if(chacha->HP_cur<=0){
            cout<<"chacha say GG"<<endl;
            gameOver = false;
        }
        if(jinma->HP_cur<=0){
            cout<<"jinma say GG"<<endl;
            gameOver = false;
        }
    }
    return 0;
}