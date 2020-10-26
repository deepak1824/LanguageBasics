/*Created By: Deepak Shivani */
/*Email Id: deepak21nov@gmail.com*/


#include <iostream>

#define ppu 225 // price per unit
#define WeeklyWage 600 // current salary per week - Method 1
#define HourRate 7.0 // hourly salary - Method 2
#define HoursPerWeek 40 // number of hours worked in a week - Method 2
#define Commission1 0.10 // commission used in Method 1
#define Commission2 0.20 // commission used in Method 2
#define Bonus 20 // Bonus used in Method 2


using namespace std;

int GetInput();
void CalcMethod1();
void CalcMethod2(int WeeklySales);
void CalcMethod3(int WeeklySales);

int main(){
    int WeeklySales = GetInput();
    if (WeeklySales == 0){
        return 0;
    }
    CalcMethod1();
    CalcMethod2(WeeklySales);
    CalcMethod3(WeeklySales);
}


// Function to get the units input
int GetInput(){
    int Units;
    cout << "Enter the number of units sold in the week:\n";
    if (!(cin >> Units)){
        return 0;
    }
    else{
        return Units;
    }
}

void CalcMethod1(){
    cout << "If you chose Method 1 your salary would be: " << WeeklyWage << endl;
}

void CalcMethod2(int WeeklySales){
    double PerHour, total, comm;

    PerHour = HourRate * HoursPerWeek;
    comm = (WeeklySales * ppu) * Commission1;
    total = PerHour + comm;
    cout << "If you chose Method 2 your salary would be: " << total << endl;
}

void CalcMethod3(int WeeklySales){
    int extra;
    double total, comm;

    extra = Bonus * WeeklySales;
    comm = (WeeklySales * ppu) * Commission2;
    total = extra + comm;
    cout << "If you chose Method 3 your salary would be: " << total << endl;
}