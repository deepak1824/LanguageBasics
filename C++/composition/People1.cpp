#include "People1.h"
#include <iostream>
#include "Birthday.h"

using namespace std;


People1::People1(string x, Birthday bo)
:name(x),DOB(bo)
{
}

void People1::printInfo(){
    cout << name << " was born on ";
    DOB.printDate();
}

