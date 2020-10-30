#include <iostream>

using namespace std;

class Time{

    private:
        int hours;
        int mins;
        int secs;
    public:
        
        void Set(int h, int m, int s){
            hours = h;
            mins = m;
            secs = s;
        }

        void increment();
        void decrement();
        void display();
};


void Time::increment(){
    secs++;
    mins += secs/60;
    hours += mins/60;
    secs %= 60;
    mins %= 60;
    hours %= 24;
}

void Time::decrement(){
    secs--;
    if(secs < 0){
        secs += 60;
        mins--;
    }
    if (mins < 0){
        mins += 60;
        hours--;
    }
    if(hours < 0){
        hours += 24;
    }
}

void Time::display(){
    cout << (hours % 12 ? hours : 12) << ':'
         << (mins < 10 ? "0" : "") << mins << ':'
         << (secs < 10 ? "0" : "") << secs
         << (hours < 12 ? " AM" : " PM") << endl;
}


int main(){
    Time timer;
    timer.Set(14,47,37);
    for(int i=0; i<5; i++){
        timer.increment();
        timer.display();
        cout << endl;
        timer.decrement();
        timer.display();
        cout << endl;
    }
}
