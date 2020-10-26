/*Created By: Deepak Shivani */
/*Email Id: deepak21nov@gmail.com*/

/* 

The common field cricket chirps in direct proportion to the current temperature. Adding 40 to the number of time a cricket chirps in a minute, then dividing that value by 4 gives us the temperature. Write a program that takes as input the number of chirps in a minute and prints the current temperature. For example,
Number of chirps: 120
The temperature is: 40.0 degrees. 

*/

#include <iostream>


#define ChirpsBonus 40
using namespace std;


void CricketChirpsTemp(int chirpsPerMin){
    float temperature = (chirpsPerMin + ChirpsBonus) / 4;
    cout << "Current Temperature: " << temperature << endl;  
}


int main(){

    int chirps;
    cout << "Enter the Chirps Per min done by the Field Cricket: \n";
    cin >> chirps; 
    CricketChirpsTemp(chirps);
}