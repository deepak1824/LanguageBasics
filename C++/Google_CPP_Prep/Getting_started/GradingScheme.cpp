/*Created By: Deepak Shivani */
/*Email Id: deepak21nov@gmail.com*/

/*

Write a program that will compute your final grade for a programming course you are taking. Here is the grading scheme:
//Final grades will be based on the following
//40% Assignments   15% Midterm Examination
35% Final Examination
10% Class Participation Grade 

Your program should ask the user for the four assignment scores, the midterm, final and section grades. Then, the final score is calculated and printed. To do the calculations, you average the four assignment scores together and then multiply it by 0.4 (40%). You then multiply the midterm score by 0.15, the final by 0.35 and the participation grade by 0.1. Then you add all the results of these multiplications together.

Use functions wherever you can in this program. You can create a function to get the input by passing in as a parameter the string to be displayed in an explanatory cout. Here is an example run:

Enter the score for the first assignment. 75
Enter the score for the second assignment. 85
Enter the score for the third assignment. 82
Enter the score for the fourth assignment. 94
Enter the score for the midterm. 81
Enter the score for the final. 89
Enter the score for the section grade. 100
The final grade is: 86.9

*/

#include <iostream>

#define AssignmentPer       0.40
#define MidtermPer          0.15
#define FinalPer            0.35
#define PartiPer            0.10
using namespace std;

float grades[7];

float *getInput(){
    
    float A1,A2,A3,A4,MT,FT,Section; 
    cout << "Enter Assignment 1 Grade: " << endl;
    cin >> A1;
    grades[0] = A1;

    cout << "Enter Assignment 2 Grade: " << endl;
    cin >> A2;
    grades[1] = A2;

    cout << "Enter Assignment 3 Grade: " << endl;
    cin >> A3;
    grades[2] = A3;

    cout << "Enter Assignment 4 Grade: " << endl;
    cin >> A4;
    grades[3] = A4;

    cout << "Enter Midterm Grade: " << endl;
    cin >> MT;
    grades[4] = MT;


    cout << "Enter Final Grade: " << endl;
    cin >> FT;
    grades[5] = FT;

    cout << "Enter Section Grade: " << endl;
    cin >> Section;
    grades[6] = Section;

    return grades;
}


void CalcGrade(float *grades){
    float AssAvg = ((grades[0]+grades[1]+grades[2]+grades[3])/4) * AssignmentPer;

    float MTAvg = (grades[4] * MidtermPer);

    float FTAvg = (grades[5] * FinalPer);

    float PTAvg = (grades[6] * PartiPer);

    float total = AssAvg + MTAvg + FTAvg + PTAvg;

    cout << "Your Final Grade is: " << total << endl;

}


int main(){
    CalcGrade(getInput());
}