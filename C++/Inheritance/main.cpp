//----------INHERITANCE--------------------//
#if 0
#include "Mother.h"
#include "Daughter.h"
#include <iostream>


using namespace std;

int main(){
    Mother m;
    m.sayName();
    Daughter d;
    d.sayName();
}

#endif

//---------Protected Members & Derived class constructors Deconstructors---------//

#include "Mother.h"
#include "Daughter.h"
#include <iostream>


using namespace std;

int main(){

    Daughter tina;
    Mother ma;
    tina.doSth();
    
}