/*Created By: Deepak Shivani */
/*Email Id: deepak21nov@gmail.com*/

#include <iostream>
#include <fstream>


using namespace std;


int main(){

    char FirstName[30], LastName[30];
    int age;
    char FileName[20];
    char done;

    cout << endl << "Enter the name of the File: ";
    cin >> FileName;

    ofstream People(FileName, ios::out);

    cout << endl << "Enter your Data. " << endl;

    while(1){
        cout << "Enter First Name: ";
        cin >> FirstName;
        cout << "Enter Last Name: ";
        cin >> LastName;
        cout << "Enter Age : ";
        cin >> age;

        People << FirstName << endl << LastName << endl << age << endl;

        cout << "Continue?? y/n" << endl;
        cin >> done;

        if (done == 'n'){
            break;
        }
    }
    People.close();

    ifstream People_in(FileName);

    while (1){
        People_in >> FirstName >> LastName >> age;

        if(People_in.eof()){
            break;
        }

        cout << endl << "First Name: " << FirstName;
        cout << endl << "Last Name: " << LastName;
        cout << endl << "Age: " << age;
        cout << endl;
    }
    People_in.close();
    return 0;
}