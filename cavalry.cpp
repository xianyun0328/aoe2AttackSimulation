#include "cavalry.h"

using std::string;

Cavalry::Cavalry(string name, int HP_max, int attack, int armor, int reloadTime): 
Unit(name, HP_max, attack, armor, reloadTime) {}