/*Created By: Deepak Shivani */
/*Email Id: deepak21nov@gmail.com*/

/*

/*Suppose we wanted print banner for the following */
//FREEZY BREEZE MAKES THREE TREES FREEZE"
/*
We want the letters to be pretty big since this is a banner:

FFFFF
F
FFF
F
F

EEEEE
E
EEE
E
EEEEE

etc.
Being a good problem decomposer, you probably noticed that rather than put all the cout's in the main function, it would be far more efficient to put them in functions. So we could have a "printE" function and a "printZ" function and so on.

Write a program with functions that creates a banner of a word or phrase with lots of repeated letters. Some possibilities:

FREEZY BREEZE MAKES FLEAS
SNEEZE TWEETLE BEETLE PADDLE BATTLE
SIX SICK CHICKS KICK
SUE SEWS SUE'S SOCKS
BEN BENDS BIM'S BROOM 

*/




#include <iostream>
#include <string>

using namespace std;


void PrintA(){
    cout << "    A" << endl;
    cout << "   A A" << endl;
    cout << "  A   A" << endl;
    cout << " AAAAAAA" << endl;
    cout << " A     A" << endl;
    cout << endl;
}

void PrintB(){
    cout << " BBBBB" << endl;
    cout << " B    B" << endl;
    cout << " BBBBB" << endl;
    cout << " B    B" << endl;
    cout << " BBBBB" << endl;
    cout << endl;
}

void PrintC(){
    cout << "   CCCC" << endl;
    cout << "  CC" << endl;
    cout << " CC" << endl;
    cout << "  CC" << endl;
    cout << "   CCCC" << endl;
    cout << endl;
}

void PrintD(){
    cout << " DDDD" << endl;
    cout << " D   D" << endl;
    cout << " D    D" << endl;
    cout << " D   D " << endl;
    cout << " DDDD" << endl;
    cout << endl;
}

void PrintE(){
    cout << " EEEEE" << endl;
    cout << " E" << endl;
    cout << " EEE" << endl;
    cout << " E" << endl;
    cout << " EEEEE" << endl;
    cout << endl;
}

void PrintF(){
    cout << " FFFFF" << endl;
    cout << " F" << endl;
    cout << " FFF" << endl;
    cout << " F" << endl;
    cout << " F" << endl;
    cout << endl;
}

void PrintG(){
    cout << "  GGGG" << endl;
    cout << " G" << endl;
    cout << " G  GG" << endl;
    cout << " G   G" << endl;
    cout << "  GGG" << endl;
    cout << endl;
}

void PrintH(){
    cout << " H   H" << endl;
    cout << " H   H" << endl;
    cout << " HHHHH" << endl;
    cout << " H   H" << endl;
    cout << " H   H" << endl;
    cout << endl;
}

void PrintI(){
    cout << " III" << endl;
    cout << "  I" << endl;
    cout << "  I" << endl;
    cout << "  I" << endl;
    cout << " III" << endl;
    cout << endl;
}

void PrintJ(){
    cout << "     J" << endl;
    cout << "     J" << endl;
    cout << "     J" << endl;
    cout << "     J" << endl;
    cout << " J   J" << endl;
    cout << "  JJJ" << endl;
    cout << endl;
}

void PrintK(){
    cout << " K  K" << endl;
    cout << " K K" << endl;
    cout << " KK" << endl;
    cout << " K K" << endl;
    cout << " K  K" << endl;
    cout << endl;
}

void PrintL(){
    cout << " L" << endl;
    cout << " L" << endl;
    cout << " L" << endl;
    cout << " L" << endl;
    cout << " LLLLL" << endl;
    cout << endl;
}

void PrintM(){
    cout << " M   M" << endl;
    cout << " MM MM" << endl;
    cout << " M M M" << endl;
    cout << " M   M" << endl;
    cout << " M   M" << endl;
    cout << endl;
}

void PrintN(){
    cout << " N   N" << endl;
    cout << " NN  N" << endl;
    cout << " N N N" << endl;
    cout << " N  NN" << endl;
    cout << " N   N" << endl;
    cout << endl;
}

void PrintO(){
    cout << "  OOO" << endl;
    cout << " O   O" << endl;
    cout << " O   O" << endl;
    cout << " O   O" << endl;
    cout << "  OOO" << endl;
    cout << endl;
}

void PrintP(){
    cout << " PPP" << endl;
    cout << " P  P" << endl;
    cout << " PPP" << endl;
    cout << " P" << endl;
    cout << " P" << endl;
    cout << endl;
}

void PrintQ(){
    cout << "  OOO" << endl;
    cout << " O   O" << endl;
    cout << " O  OO" << endl;
    cout << " O   O" << endl;
    cout << "  OOO O" << endl;
    cout << endl;
}

void PrintR(){
    cout << " RRRR" << endl;
    cout << " R   R" << endl;
    cout << " RRRR" << endl;
    cout << " R  R" << endl;
    cout << " R   R" << endl;
    cout << endl;
}

void PrintS(){
    cout << "  SSSS" << endl;
    cout << " S" << endl;
    cout << "  SSS" << endl;
    cout << "     S" << endl;
    cout << " SSSS" << endl;
    cout << endl;
}

void PrintT(){
    cout << " TTTTT" << endl;
    cout << "   T" << endl;
    cout << "   T" << endl;
    cout << "   T" << endl;
    cout << "   T" << endl;
    cout << endl;
}

void PrintU(){
    cout << " U   U" << endl;
    cout << " U   U" << endl;
    cout << " U   U" << endl;
    cout << " U   U" << endl;
    cout << "  UUU" << endl;
    cout << endl;
}

void PrintV(){
    cout << " V   V" << endl;
    cout << " V   V" << endl;
    cout << " V   V" << endl;
    cout << "  V V" << endl;
    cout << "   V" << endl;
    cout << endl;
}

void PrintW(){
    cout << " W   W" << endl;
    cout << " W   W" << endl;
    cout << " W W W" << endl;
    cout << " WW WW" << endl;
    cout << " W   W" << endl;
    cout << endl;
}

void PrintX(){
    cout << " X   X" << endl;
    cout << "  X X" << endl;
    cout << "   X" << endl;
    cout << "  X X" << endl;
    cout << " X   X" << endl;
    cout << endl;
}

void PrintY(){
    cout << " Y   Y" << endl;
    cout << "  Y Y" << endl;
    cout << "   Y" << endl;
    cout << "   Y" << endl;
    cout << "   Y" << endl;
    cout << endl;
}

void PrintZ(){
    cout << " ZZZZZ" << endl;
    cout << "    Z" << endl;
    cout << "   Z" << endl;
    cout << "  Z" << endl;
    cout << " ZZZZZ" << endl;
    cout << endl;
}


void PrintBanner(string phrase){
    for(int i =0;i<phrase.size();++i){
        switch (phrase[i])
        {
        case 'a': case 'A':
            PrintA();
            break;

        case 'b': case 'B':
            PrintB();
            break;

        case 'c': case 'C':
            PrintC();
            break;

        case 'd': case 'D':
            PrintD();
            break;

        case 'e': case 'E':
            PrintE();
            break;
        
        case 'f': case 'F':
            PrintF();
            break;

        case 'g': case 'G':
            PrintG();
            break;

        case 'h': case 'H':
            PrintH();
            break;

        case 'i': case 'I':
            PrintI();
            break;

        case 'j': case 'J':
            PrintJ();
            break;

        case 'k': case 'K':
            PrintK();
            break;

        case 'l': case 'L':
            PrintL();
            break;

        case 'm': case 'M':
            PrintM();
            break;

        case 'n': case 'N':
            PrintN();
            break;
        
        case 'o': case 'O':
            PrintO();
            break;

        case 'p': case 'P':
            PrintP();
            break;

        case 'q': case 'Q':
            PrintQ();
            break;

        case 'r': case 'R':
            PrintR();
            break;

        case 's': case 'S':
            PrintS();
            break;

        case 't': case 'T':
            PrintT();
            break;

        case 'u': case 'U':
            PrintU();
            break;
        
        case 'v': case 'V':
            PrintV();
            break;

        case 'w': case 'W':
            PrintW();
            break;

        case 'x': case 'X':
            PrintX();
            break;

        case 'y': case 'Y':
            PrintY();
            break;

        case 'z': case 'Z':
            PrintZ();
            break;

        default:
            break;
        }
    }
}

void getInput(){
    string str;
    cout << "Enter the phrase.\n" << endl;
    if(!(cin >> str)){
        cout << "Error in reading phrase!!" << endl;
    }
    else{
        PrintBanner(str);
    }
}
int main(){
    getInput();
}