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

#if 1
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
