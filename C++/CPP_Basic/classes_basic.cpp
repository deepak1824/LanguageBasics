#if 0
#include <iostream>
#include <string>

using namespace std;

class FirstClass{
    
    public:
        FirstClass(string z){
            setName(z);
        }
        void setName(string x){
            name = x;
        }
        string getName(){
            return name;
        }
    private:
        string name;
};


int main(){
    FirstClass f("Deepak Shivani");
    cout << f.getName() << endl;
    FirstClass s("is the flash");
    cout << s.getName() << endl;
    return 0;
}

#endif

#if 1
#include <iostream>
#include <string>

using namespace std;

class FirstClass{
    public:
    FirstClass(){
        stink = 0;
    }
    private:
        int stink;

    friend void stinkfriend(FirstClass &sfo);
};

void stinkfriend(FirstClass &sfo){
    sfo.stink = 1010;
    cout << sfo.stink << endl;
}


int main(){
    FirstClass f;
    stinkfriend(f);
}

#endif