#ifndef Observer_H
#define Observer_H
#include "unit.h"
class Observer{
    public:
        virtual void notified() = 0;
};
#endif