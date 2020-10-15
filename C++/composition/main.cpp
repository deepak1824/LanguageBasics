#include <iostream>
#include "People1.h"
#include "Birthday.h"

using namespace std;

int main(){
    Birthday birthobj(10,18,1994);
    People1 dee("Deepak Shivani", birthobj);
    dee.printInfo();



}