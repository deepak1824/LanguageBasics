//----------INHERITANCE--------------------//

#if 0
#include "Mother.h"
#include "Daughter.h"
#include <iostream>


using namespace std;

Daughter::Daughter()
{
}

#endif


//---------Protected Members---------//


#include "Mother.h"
#include "Daughter.h"
#include <iostream>


using namespace std;

Daughter::Daughter(){
    cout << "Daughter constructor\n";
}

Daughter::~Daughter(){
    cout << "Daughter deconstructor\n";
}


void Daughter::doSth(){
    pv = 1;
    ptv = 2;
    //prv = 3; // private variable inaccessible
}