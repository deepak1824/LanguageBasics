//-------------OPERATOR OVERLOADING----------//
#ifndef TIMEPASS_H
#define TIMEPASS_H

class Timepass{
    public:
       int num;
       Timepass();
       Timepass(int);
       Timepass operator+(Timepass);
};

#endif // TIMEPASS_H