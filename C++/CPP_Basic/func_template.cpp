//------------Function Template Single parameter---------------//
 #if 0
#include <iostream>

using namespace std;

template <class dee>
dee addCrap(dee a, dee b){
    return a+b;
}

int main(){
    int z = addCrap(43,57);
    double k = addCrap(76.34,23.11);
    cout << z << endl;
    cout << k << endl;
}

#endif


//------------Function Template Multiple parameter---------------//


#if 0
#include <iostream>

using namespace std;

template <class FIRST, class SECOND>
FIRST smaller(FIRST a, SECOND b){
    return (a<b?a:b);
}

int main(){
    
    int x = 89;
    double y = 56.78;
    cout << smaller(x,y) << endl;

}

#endif


//------------class Template---------------//

#if 1
#include <iostream>

using namespace std;

template <class T>
class dee{
    T first,second;
    public:
        dee(T a, T b){
            first = a;
            second = b;
        }
        T bigger();
};

template <class T>
T dee<T>::bigger(){
    return (first>second?first:second);
}

int main(){
    dee <int> d_o(672,105);
    cout << d_o.bigger() << endl;
}

#endif