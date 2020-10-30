/*

Your college book store needs your help in estimating its business for next year. Experience has shown that sales depend greatly on whether a book is required for a course or just optional, and whether or not it has been used in the class before. A new, required textbook will sell to 90% of prospective enrollment, but if it has been used in the class before, only 65% will buy. Similarly, 40% of prospective enrollment will buy a new, optional textbook, but if it has been used in the class before only 20% will buy. (Note that "used" here does not mean second-hand books.)

Write a program that accepts as input a series of books (until the user enters a sentinel). For each book ask for: a code for the book, the single copy cost for the book, the current number of books on hand, the prospective class enrollment, and data that indicates if the book is required/optional, new/used in past. As output, show all the input information in a nicely formatted screen along with how many books must be ordered (if any, note that only new books are ordered), the total cost of each order.

Then, after all input is complete, show the total cost of all book orders, and the expected profit if the store pays 80% of list price. Since we have not yet discussed any ways of dealing with a large set of data coming into a program (stay tuned!), just process one book at a time and show the output screen for that book. Then, when the user has finished entering all the data, your program should output the total and profit values.

Before you start writing code, take some time to think about design of this program. Decompose into a set of functions, and create a main() function that reads like an outline for your solution to the problem. Make sure each function does one task.

Here is sample output:

Please enter the book code: 1221
 single copy price: 69.95
 number on hand: 30
 prospective enrollment: 150
 1 for reqd/0 for optional: 1
 1 for new/0 for used: 0
***************************************************
Book: 1221
Price: $69.95
Inventory: 30
Enrollment: 150

This book is required and used.
***************************************************
Need to order: 67
Total Cost: $4686.65
***************************************************

Enter 1 to do another book, 0 to stop. 0
***************************************************
Total for all orders: $4686.65
Profit: $937.33
***************************************************

Required->>new book->>  90%
        ->>used book->> 65%

Optional->>new book->> 40%
        ->>used book->> 20%

input->> book code, cost price/book, books in hand, no of students enrolled, req/opt, new/used 

profit->> when store pays only 80% of CP
*/

#include <iostream>

using namespace std;

// const double newBookPer_r = 0.90;
// const double usedBookPer_r = 0.65;
// const double newBookPer_o = 0.40;
// const double usedBookPer_o = 0.20;

typedef struct books
{
    int bookCode;
    double CP;
    int booksInHand;
    int NofStd;
    int reqd;               // 1 for reqd and 0 for opt
    int cond;               // 1 for new and 0 for used
}book_d;



book_d GetInput(){
    book_d book1;
    cout << "Please enter the book code:  ";
    cin >> book1.bookCode;
    cout << endl; 
    cout << "Single Copy Price:  ";
    cin >> book1.CP;
    cout << endl;
    cout << "number on hand :  ";
    cin >> book1.booksInHand;
    cout << endl;
    cout << "Prospective Enrollment :  ";
    cin >> book1.NofStd;
    cout << endl;
    cout << "1 for reqd / 0 for optional:  ";
    cin >> book1.reqd;
    cout << endl;
    cout << "1 for new / 0 for used:  ";
    cin >> book1.cond;
    cout << endl;
    cout << "***************************************************" << endl;
    return book1;
}


void printInfo(book_d book1){
    cout << "Book: " << book1.bookCode << endl;
    cout << "Price: " << book1.CP << endl;
    cout << "Inventory: " << book1.booksInHand << endl;
    cout << "Enrollment: " << book1.NofStd << endl;
    cout << endl;
}

double getProfit(double total){
    return (total - (0.80 * total));
}

double generateDetails(book_d book1){

    int booksReqd = 0;
    double total = 0;
    if(book1.reqd == 1 && book1.cond == 1){
        cout << "This book is required and new." << endl;
        cout << "***************************************************" << endl;
        booksReqd = (0.90 * book1.NofStd) - book1.booksInHand;
        if(booksReqd > 0){
            total = (booksReqd*book1.CP);
            cout << "Need to order: " << booksReqd << endl;
            cout << "Total Cost: $" << total << endl;
            cout << "***************************************************" << endl;
            cout << endl;
        }
    }
    if(book1.reqd == 1 && book1.cond == 0){
        cout << "This book is required and used." << endl;
        cout << "***************************************************" << endl;
        booksReqd = (0.65 * book1.NofStd) - book1.booksInHand;
        if(booksReqd > 0){
            total = (booksReqd*book1.CP);
            cout << "Need to order: " << booksReqd << endl;
            cout << "Total Cost: $" << total << endl;
            cout << "***************************************************" << endl;
            cout << endl;
        }
    }
    if(book1.reqd == 0 && book1.cond == 1){
        cout << "This book is optinal and new." << endl;
        cout << "***************************************************" << endl;
        booksReqd = (0.40 * book1.NofStd) - book1.booksInHand;
        if(booksReqd > 0){
            total = (booksReqd*book1.CP);
            cout << "Need to order: " << booksReqd << endl;
            cout << "Total Cost: $" << total << endl;
            cout << "***************************************************" << endl;
            cout << endl;
        }
    }
    if(book1.reqd == 0 && book1.cond == 0){
        cout << "This book is optional and used." << endl;
        cout << "***************************************************" << endl;
        booksReqd = (0.20 * book1.NofStd) - book1.booksInHand;
        if(booksReqd > 0){
            total = (booksReqd*book1.CP);
            cout << "Need to order: " << booksReqd << endl;
            cout << "Total Cost: $" << total << endl;
            cout << "***************************************************" << endl;
            cout << endl;
        }
    }
    return total;
}




int main(){

    int entry;
    double total = 0;
    double profit = 0;
    book_d book1;
    book_d bookn;
    book1 = GetInput();
    printInfo(book1);
    total = generateDetails(book1);
    profit = getProfit(total);

    cout << "Enter 1 to do another book, 0 to stop. ";
    cin >> entry;
    cout << "***************************************************" << endl;

    switch (entry)
    {
    case 0:
        cout << "Total of all orders: $" << total << endl;
        cout << "Profit: $" << profit << endl;
        cout << "***************************************************" << endl;
        cout << endl;
        break;
    case 1:
        bookn = GetInput();
        printInfo(bookn);
        total += generateDetails(bookn);
        profit += getProfit(total);
        cout << "Total of all orders: " << total << endl;
        cout << "Profit: " << profit << endl;
        cout << "***************************************************" << endl;
        cout << endl;
        break;  
    default:
        break;
    }
}