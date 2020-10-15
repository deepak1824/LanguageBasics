//-------------OPERATOR OVERLOADING----------//

#include "Timepass.h"
#include <iostream>


using namespace std;

Timepass::Timepass(){
    
}

Timepass::Timepass(int a){
    num = a;
    
}

Timepass Timepass::operator+(Timepass to){
    Timepass tnew;
    tnew.num = num + to.num;
    return(tnew);
}
