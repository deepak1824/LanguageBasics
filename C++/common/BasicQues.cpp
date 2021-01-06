#include <iostream>
using namespace std;

// Swapping two variables
#if 0
int main(){

    int num1 = 9, num2 = 18, temp;

    cout << "Before Swap:" << "Value of num1: " << num1 << "\tValue of num2: " << num2 << endl;

    temp = num1;
    num1= num2;
    num2 = temp; 

    cout << "After Swap:" << "Value of num1: " << num1 << "\tValue of num2: " << num2 << endl;
    return 0;
}
#endif

// Get Ascii Val
#if 0
int main(){

    char c;
	cout << "Enter a character: ";
	cin >> c;
	cout << "ASCII Value of " << c << " is " << int(c) << endl;
	return 0;
}
#endif


//Convert string to upper case
#if 0
int main(){
    char str[100];
    int i = 0;
    cout << "Enter a string: " << endl;
    cin >> str;

    while(str[i] != '\0'){
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        i++;
    }
    cout << "Coverted String is: " << str << endl;
    return 0;
}
#endif

//Convert string to Lower case
#if 0
int main(){
    char str[100];
    int i = 0;
    cout << "Enter a string: " << endl;
    cin >> str;

    while(str[i] != '\0'){
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        i++;
    }
    cout << "Coverted String is: " << str << endl;
    return 0;
}
#endif


//Reverse String

#if 0
#include <string.h>
int main(){
    char str[100];
    char revstr[100];

    cout << "Enter a string: " << endl;
    cin >> str;

    int len  = strlen(str);
    int j = 0;
    for(int i=len-1;i>=0;i--){
        revstr[j] = str[i];
        j++;
    }
    revstr[j] = '\0';
    cout << revstr << endl;
    return 0;
}
#endif


//Count alphabets, digits and special chars in a string

#if 0
int main(){
    char str[100];
    int a = 0, d = 0, sp = 0;
    int i = 0;
    cout << "Enter a string: " << endl;
    cin >> str;

    while(str[i] != '\0'){
        if(str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
            a++;
        else if(str[i]>= '0' && str[i]<= '9')
            d++;
        else
            sp++;
        i++;
    }
    cout << "Total Alphabets: " << a << endl;
    cout << "Total Digits: " << d << endl;
    cout << "Total Special Characters: " << sp << endl;
    return 0;
}
#endif



//check if number is even or odd

#if 0
int main(){

    int num;

    cout << "Enter a Number" << endl;
    cin >> num;

    if(num & 1){
        cout << "Number is odd" << endl;
    }
    else{
        cout << "Number is even" << endl;
    }
    return 0;
}
#endif

//check if number have opposite signs

#if 0
#include <bitset>

int main(){

    int x = 4;
    int y = -8;

    cout << x << " in binary is " << bitset<32>(x) << endl;
    cout << y << " in binary is " << bitset<32>(y) << endl;

    if((x^y) < 0){
        cout << "Numbers have opposite signs\n";
    }
    else{
        cout << "Do not have opposite signs\n";
    }
    return 0;
}
#endif


//add 1 to a number without operator

#if 0
int main(){

    int x = 4;
    cout << x << " + " << 1 << " is " << -~x << endl;

    return 0;
}
#endif

//Swap two numbers without using any third variable

#if 0

void swap(int &x, int &y){
    if(x != y){
        x = x ^ y;
        y = x ^ y;
        x = x ^ y;
    }
}

int main(){

    int x = 3, y =4;

    cout << "Before Swap the Numbers " << x << " " << y << endl;
    swap(x,y);
    cout << "After Swap the Numbers " << x << " " << y << endl;
    return 0;
}
#endif


//Turn off/on k’th bit in a number

#if 1
#include <bitset>

int main(){

    int num1;
    int num2;
    int bit1;
    int bit2;

    cout << "Enter the First Number " << endl;
    cin >> num1;
    cout << "Enter the Second Number " << endl;
    cin >> num2;
    cout << "Enter bit 1 to be changed" << endl;
    cin >> bit1;
    cout << "Enter bit 2 to be changed" << endl;
    cin >> bit2;

    cout << "Number before changes (OFF)" << bitset<8>(num1) << endl;
    num1 = num1 & ~(1 << (bit1-1));
    cout << "Number after changes (OFF)" << bitset<8>(num1) << endl; 

    cout << "Number before changes (ON)" << bitset<8>(num2) << endl;
    num2 = num2 | (1 << (bit2-1));
    cout << "Number after changes (ON)" << bitset<8>(num2) << endl;

    return 0;
}
#endif
