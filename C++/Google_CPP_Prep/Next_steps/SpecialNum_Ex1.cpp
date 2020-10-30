/*


The integer 36 has a peculiar property: it is a perfect square, and is also the sum of the 
integers from 1 through 8. The next such number is 1225 which is 352, and the sum of the 
integers from 1 through 49. Find the next number that is a perfect square and also the sum 
of a series 1...n. This next number may be greater than 32767. You may use library functions 
that you know of, (or mathematical formulas) to make your program run faster. It is also 
possible to write this program using for-loops to determine if a number is a perfect square or 
a sum of a series. (Note: depending on your machine and your program, it can take quite a while to find this number.)

*/

#include <iostream>
#include <cmath>


using namespace std;

long FindSum(long x){
    return (x*(x+1))/2;
}

bool CheckSum(long x){
    long sqr = x*x;
    for(long i = 0;i<sqr;++i){
        if(FindSum(i) == sqr){
            cout << "Unique Number =" << i;
            return true;
        }
    }
    return false;
}




int main(){

    for(int i =1;i<5000;i++){
        if (CheckSum(i)){
            cout << " which is also a perfect square." << endl;
        }
    }
}