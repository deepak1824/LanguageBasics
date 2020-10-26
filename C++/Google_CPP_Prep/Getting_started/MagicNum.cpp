/*Created By: Deepak Shivani */
/*Email Id: deepak21nov@gmail.com*/

/*

Here is a "magic number" problem: Ask a user to enter a three-digit number whose first digit is greater than its last. Your program will reverse the number, and subtract the reversal from the original number. Finally, reverse the resulting number, and add it to its unreversed form. Output the final result. The original number that the user enters must be of integer type (not three chars). Think about how to write a function that takes an integer as input and returns the reverse of that number. Example:
input number: 901
reverse it: 109
subtract: 901 - 109 = 792
reverse it: 297
add: 297 + 792 = 1089 


*/


#include <iostream>

using namespace std;


int ReverseNumber(int num){
    int rnum = 0,remainder;
    while(num !=0 ){
        remainder = num % 10;
        rnum = rnum*10 + remainder;
        num /= 10;
    }
    return rnum;
}

int main(){

    int number;
    cout << "Enter a number: " << endl;
    if(!(cin >> number)){
        return 0;
    }
    int rnumber = ReverseNumber(number);
    int snum = number - rnumber;
    int rsnum = ReverseNumber(snum);
    int ans = snum + rsnum;

    cout << "The Magic Number is: " << ans << endl;
}