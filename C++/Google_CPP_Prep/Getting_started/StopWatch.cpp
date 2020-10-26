/*Created By: Deepak Shivani */
/*Email Id: deepak21nov@gmail.com*/


/*

As electronic stopwatches become cheaper and more accurate, we will no doubt be deluged with impossibly accurate measurements of time. Write a program that takes as input a time period given in seconds, and outputs the number of hours, minutes and seconds it represents. For example,
Number of seconds: 3662
Hours: 1
Minutes: 1
Seconds: 2     

*/

#include <iostream>

using namespace std;

int GetInput(){
    int seconds;
    cout << "Total Number of Seconds: \n";
    if(!(cin >> seconds)){
        return 0;
    }
    else{
        return seconds;
    }
}

void PrintTime(int seconds){

    int mins = seconds / 60;
    int hours = mins /60;

    cout << "Number of Hours: " << int(hours) << endl <<
            "Number of Mins: " << ((mins%60 == 0) ? 0 : int(mins/60)) << endl <<
            "Number of Seconds: " << int(seconds%60) << endl;  
}

int main(){

    int time = GetInput();
    PrintTime(time);
}