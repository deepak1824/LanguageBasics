#if 0
#include <iostream>
#include <string>
#include "Timepass.h"

using namespace std;

int main(){
    Timepass t;
    return 0;
}

#endif

#if 0
#include <iostream>

using namespace std;

int main(){
    int age;
    int ageTotal = 0;
    int n = 0;

    cout << "Enter first person age or -1 to quit\n";
    cin>> age;
    while(age != -1){
        ageTotal = ageTotal + age;
        n++;
        
        cout << "Enter Next person's age or -1 to quit \n";
        cin >> age;
    }
    cout << "Number of people Entered\n" << n << endl;
    cout << "Average age " << ageTotal/n << endl;

    return 0;

}

#endif

#if 0
#include <iostream>
#include <cmath>
using namespace std;

int main(){

    float a;
    float p = 10000;
    float r = .03;

    for(int day = 1; day<=30; day++){
        a = p * pow(1+r,day);
        cout << day << "-------" << a << endl; 
    }
}
#endif

#if 0
#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int x = 99;
    do{
        cout << x << endl;
        x++;
    }
    while(x<10);
}
#endif


#if 0
#include <iostream>

using namespace std;

int main(){

    int a = 24;

    switch (a)
    {
    case (16):
        cout << "not 16\n";
        break;
    case (24):
        cout << "not 24\n";
        break;
    default:
        cout << "between 16 and 14\n";
        //break;
    }
}

#endif

#if 0
#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    srand(52);

    for(int x = 0; x<25;x++) {
        cout << (rand()%6)+1 << endl;
    }
}
#endif



//------------FUNCTION OVERLOADING------------//

#if 0
#include <iostream>

using namespace std;

void printNum(int x){
    cout << "this is integer " << x << endl;
}

void printNum(float x){
    cout << "this is float " << x << endl;
}

int main(){
    int a = 54;
    float b = 32.4896;

    printNum(a);
    printNum(b);
}
#endif


//-----------------RECURSION-----------------//

#if 0
#include <iostream>

using namespace std;

int fact(int x){
    if(x==1){
        return 1;
    }
    else{
        return x*fact(x-1);
    }
}

int main(){
    cout << fact(5) << endl;

}
#endif


//------------------ARRAYs-------------//

#if 0
#include <iostream>

using namespace std;

void printArray(int a[], int s);

int main(){
    int dee[5] = {34,2,5,8,3};
    int nai[4] = {87,65,656,35};

    printArray(dee,5);
    printArray(nai,4);
    

}

void printArray(int a[], int s){
    for(int i =0; i<s;i++){
        cout << a[i] << endl; 
    }
}


#endif


//------------------MULTIDIMENSIONAL ARRAYs-------------//

#if 0
#include <iostream>

using namespace std;


int main(){

    int dee[2][3] = {{2,3,4},{4,5,6}};
    
    //2,3,4
    //4,5,6

    for(int i = 0;i<2;i++){
        for(int j=0;j<3;j++){
            cout << dee[i][j] << " ";
        }
        cout << endl;
    }

    
    }

#endif

//------------------POINTERS-------------//

#if 0
#include <iostream>

using namespace std;



int main(){
    int a = 5;
    int *p = &a;

    cout << p << endl;
    cout << *p << endl;
    cout << a << endl;
    cout << &a << endl;
}

#endif



#if 0
#include <iostream>

using namespace std;

void passbyvalue(int x);
void passbyref(int *x);

int main(){
    int a = 13;
    int b = 13;

    passbyvalue(a);
    passbyref(&b);

    cout << "Value of a now " << a << endl;
    cout << "Value of b now " << b << endl;
}

void passbyvalue(int x){
    x = 99;
}

void passbyref(int *x){
    *x = 23;
}


#endif


#if 0
#include <iostream>

using namespace std;



int main(){
    int dee[5];
    int *dp0 = &dee[0];
    int *dp1 = &dee[1];
    int *dp2 = &dee[2];

    cout << "*dp0 is at " << dp0 << endl;
    cout << "*dp1 is at " << dp1 << endl;
    cout << "*dp2 is at " << dp2 << endl;

    dp0 += 2;
    cout << "dp0 is at now " << dp0 << endl;
    
}

#endif






#if 0
#include <iostream>
#include "Timepass.h"

using namespace std;


int main(){
    const Timepass tp;

    // cout << " shut the fck up\n";

    // Timepass *tpoint = &tp;

    // tp.printShit();
    // tpoint->printShit();

    tp.printShit2();
    
}

#endif

//------------OPERATOR OVERLOADING----------------//
#if 1
#include <iostream>
#include "Timepass.h"

using namespace std;


int main(){
    Timepass a(32);

    Timepass b(45);

    Timepass c;

    c = a+b;
    cout << c.num << endl;
    
    
}

#endif
