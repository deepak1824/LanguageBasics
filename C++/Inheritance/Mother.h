//----------INHERITANCE--------------------//
#if 0
#ifndef MOTHER_H
#define MOTHER_H

class Mother
{
public:
    Mother();
    void sayName();
};




#endif
#endif

//---------Protected Members---------//

#if 1
#ifndef MOTHER_H
#define MOTHER_H

class Mother
{
    public:
        int pv;
        Mother();
        ~Mother();
    
    protected:
        int ptv;

    private:
        int prv;

};



#endif
#endif