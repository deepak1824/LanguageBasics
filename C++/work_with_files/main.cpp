#include <iostream>
#include <fstream>
#include <string>

using namespace std;



int getWhatTheyWant();

void displayItems(int a);


int main(){

    int whatTheyWant;

    whatTheyWant = getWhatTheyWant();

    while(whatTheyWant != 4){
        whatTheyWant = getWhatTheyWant();

        switch (whatTheyWant)
        {
        case 1:
            displayItems(1);
            break;

        case 2:
            displayItems(2);
            break;
            
        case 3:
            displayItems(3);
            break;
        }
    }
}

int getWhatTheyWant(){
    int choice;

    cout << "\n1 - just plain items" << endl;
    cout << "2 - helpful items" << endl;
    cout << "3 - harmful items" << endl;
    cout << "4 -  QUIT\n" << endl;

    cin >> choice;
    return choice;
}

void displayItems(int a){

    ifstream objectFile("objects.txt");

    string name;
    double power;

    if(a == 1){
        while (objectFile >> name >> power)
        {
            if(power==0){
                cout << name << ' ' << power << endl;
            }
        }
    }

    if(a == 2){
        while (objectFile >> name >> power)
        {
            if(power>0){
                cout << name << ' ' << power << endl;
            }
        }
    }

    if(a == 3){
        while (objectFile >> name >> power)
        {
            if(power<0){
                cout << name << ' ' << power << endl;
            }
        }
    }
}