/*Created By: Deepak Shivani */
/*Email Id: deepak21nov@gmail.com*/


/*


The law requires that food product manufacturers place expiration dates on their products, but there is a loophole in the law: it does not require the expiration date to be in any particular form. So, it can be written in Swahili and still be legal.
Ralph Nader's third cousin, Nadine is a self-appointed Food Quality Spy. She has learned that many food product manufacturers have started encoding the product expiration dates to keep customers from knowing how old the stuff is.

But the encoding does allow grocers to figure out the expiration dates if for some reason, they want to.

One popular encoding method:

encode the months from Jan to Dec as 'A' through 'L'
encode each digit of the date as 'Q' through 'Z'
encode the year as 'A' through 'Z' meaning 1 through 26 which is then added to 1995.
Nadine found a particularly questionable loaf of bread with this date: ARZM. Write a program to determine the date.

*/


#include <iostream>
#include <string>

using namespace std;


void GetMonth(char c){
    switch (c)
    {
    case 'A':
        cout << "Jan/";  
        break;
    
    case 'B':
        cout << "Feb/";  
        break;
    
    case 'C':
        cout << "Mar/";  
        break;

    case 'D':
        cout << "Apr/";  
        break;

    case 'E':
        cout << "May/";  
        break;

    case 'F':
        cout << "Jun/";  
        break;

    case 'G':
        cout << "Jul/";  
        break;

    case 'H':
        cout << "Aug/";  
        break;

    case 'I':
        cout << "Sep/";  
        break;

    case 'J':
        cout << "Oct/";  
        break;

    case 'K':
        cout << "Nov/";  
        break;

    case 'L':
        cout << "Dec/";  
        break;

    default:
        break;
    }
}

void GetDay(string str){
    for(int i =0;i<str.size();++i){
        switch (str[i])
        {
        case 'Q':
            cout << "0";
            break;
        
        case 'R':
            cout << "1";
            break;
        
        case 'S':
            cout << "2";
            break;

        case 'T':
            cout << "3";
            break;

        case 'U':
            cout << "4";
            break;

        case 'V':
            cout << "5";
            break;

        case 'W':
            cout << "6";
            break;

        case 'X':
            cout << "7";
            break;

        case 'Y':
            cout << "8";
            break;

        case 'Z':
            cout << "9";
            break;
        
        default:
            break;
        }
    }
    cout << "/";
}

void GetYear(char c){
    switch (c)
    {
    case 'a': case 'A':
            cout << "1995" << endl;
            break;

        case 'b': case 'B':
            cout << "1996" << endl;
            break;

        case 'c': case 'C':
            cout << "1997" << endl;
            break;

        case 'd': case 'D':
            cout << "1998" << endl;
            break;

        case 'e': case 'E':
            cout << "1999" << endl;
            break;
        
        case 'f': case 'F':
            cout << "2000" << endl;
            break;

        case 'g': case 'G':
            cout << "2001" << endl;
            break;

        case 'h': case 'H':
            cout << "2002" << endl;
            break;

        case 'i': case 'I':
            cout << "2003" << endl;
            break;

        case 'j': case 'J':
            cout << "2004" << endl;
            break;

        case 'k': case 'K':
            cout << "2005" << endl;
            break;

        case 'l': case 'L':
            cout << "2006" << endl;
            break;

        case 'm': case 'M':
            cout << "2007" << endl;
            break;

        case 'n': case 'N':
            cout << "2007" << endl;
            break;
        
        case 'o': case 'O':
            cout << "2008" << endl;
            break;

        case 'p': case 'P':
            cout << "2009" << endl;
            break;

        case 'q': case 'Q':
            cout << "2010" << endl;
            break;

        case 'r': case 'R':
            cout << "2011" << endl;
            break;

        case 's': case 'S':
            cout << "2012" << endl;
            break;

        case 't': case 'T':
            cout << "2013" << endl;
            break;

        case 'u': case 'U':
            cout << "2014" << endl;
            break;
        
        case 'v': case 'V':
            cout << "2015" << endl;
            break;

        case 'w': case 'W':
            cout << "2016" << endl;
            break;

        case 'x': case 'X':
            cout << "2017" << endl;
            break;

        case 'y': case 'Y':
            cout << "2018" << endl;
            break;

        case 'z': case 'Z':
            cout << "2019" << endl;
            break;

        default:
            break;
    }
    
}

int main(){

    string inp;
    cout << "Enter Expiry Date Code" << endl;
    cin >> inp;

    char m = inp[0];
    string d = { inp[1], inp[2] };
    char y = inp[3];

    GetMonth(m);
    GetDay(d);
    GetYear(y);

}