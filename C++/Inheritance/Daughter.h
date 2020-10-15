//----------INHERITANCE--------------------//

#if 0
#include "Mother.h"
#ifndef DAUGHTER_H
#define DAUGHTER_H

class Daughter: public Mother
{
public:
    Daughter();
};




#endif
#endif

//---------Protected Members---------//

#ifndef DAUGHTER_H
#define DAUGHTER_H
#include "Mother.h"

class Daughter: public Mother
{
public:
    Daughter();
    ~Daughter();
    void doSth();

};




#endif