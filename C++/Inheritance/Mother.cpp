//----------INHERITANCE--------------------//

#if 0
#include "Mother.h"
#include "Daughter.h"
#include <iostream>

using namespace std;
Mother::Mother()
{
}

void Mother::sayName(){
    cout << "AJajaja yaar" << endl;

}

#endif
//---------Protected Members---------//

#include "Mother.h"
#include "Daughter.h"
#include <iostream>

using namespace std;

Mother::Mother(){
    cout << "Mother constructor\n";
}

Mother::~Mother(){
    cout << "Mother deconstructor\n";
}