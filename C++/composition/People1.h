#ifndef PEOPLE1_H
#define PEOPLE1_H
#include <string>
#include "Birthday.h"

using namespace std;

class People1
{
    private:
        string name;
        Birthday DOB;
    public:
        People1(string x, Birthday bo);
        void printInfo();
};



#endif