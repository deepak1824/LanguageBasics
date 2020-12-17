#include <iostream>
#include <cstring>

using namespace std;

typedef struct{

    char title[30];
    char author[50];
    char description[100];
    int bookId;
}Books;

void PrintBookNormal(Books b1);
void PrintBookWithPointer(Books *b1);


int main(){

    Books B1 = {"MyBook1", "Deepak", "my 1st book", 1};
    Books B2 = {"MyBook2", "Shivani", "my 2nd book", 2};

    strcpy(B1.title , "Mybook1Changed");

    PrintBookNormal(B1);
    cout << endl;
    PrintBookWithPointer(&B2);

    return 0;
}

void PrintBookNormal(Books b1){

    cout << b1.title << endl;
    cout << b1.author << endl;
    cout << b1.description << endl;
    cout << b1.bookId << endl;
}

void PrintBookWithPointer(Books *b1){

    cout << b1->title << endl;
    cout << b1->author << endl;
    cout << b1->description << endl;
    cout << b1->bookId << endl;


}