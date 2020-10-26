
/*Created By: Deepak Shivani */
/*Email Id: deepak21nov@gmail.com*/


/*

This is a number analogy to a famous card trick. 
Ask the user to enter a three-digit number. Think of 
the number as ABC (where A, B, C are the three digits of the number). 
Now, find the remainders of the numbers formed by ABC, BCA, and CAB when 
divided by 11. We will call these remainders X, Y, Z. Add them up as X+Y, 
Y+Z, Z+X. If any of the sums are odd, increase or decrease it by 11 
(whichever operation results in a positive number less than 20; note if the 
sum is 9, just report this and stop the process). Finally, divide each of the 
sums in half. The resulting digits are A, B, C. Write a program that implements this algorithm.


*/

#include <iostream>
#include <cmath>

using namespace std;

int *rev = (int*)malloc(sizeof(int)*50);
//Method For Cyclic Permutations

int countDigits(int num){
    int count = 0;
    while(num){
        count++;
        num /= 10;
    }
    return count;
}

int  *GetPermutation(int num){
    int N = num;
    int i = 0;
    int n = countDigits(num);

    cout << "Number of digits: " << endl;

    while(i<n){
        rev[i] = N;
        int rem = N % 10;
        int divd = N / 10;
        N = (pow(10,n-1)) * rem + divd;

        if (N == num){
            break;
        }
        i++;
    }
    return rev;
}


int main(){

    int number;
    cout << "Enter any number: \n" << endl;
    cin >> number;

    int n = countDigits(number);

    int *arr = GetPermutation(number);
    cout << "Permutauions: " << endl;
    for(int i =0;i<n;i++){
        cout << arr[i] << endl;
    }
    int remX = arr[0] / 11;
    int remY = arr[1] / 11;
    int remZ = arr[2] / 11;

    int xy = remX + remY;
    int yz = remY + remZ;
    int xz = remX + remZ;

    if(xy%2 == 1){
        xy += 11;
        if(xy < 20){
            if(xy == 9){
                cout << "Reached NINE_9\n";
            }
        }
    }
    else if(yz%2 == 1){
        yz += 11;
        if(yz < 20){
            if(yz == 9){
                cout << "Reached NINE_9\n";
            }
        }
    }
    else if(xz%2 == 1){
         xz += 11;
         if(xz < 20){
            if(xz == 9){
                cout << "Reached NINE_9\n";
            }
        }
    }

    xy /= 2;
    yz /= 2;
    xz /= 2;

    cout << "Answer: " << xy << yz << xz << endl;

    free(rev);

}