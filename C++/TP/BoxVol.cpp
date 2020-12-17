#include <iostream>

using namespace std;


class BoxVolume{


    private:
        double len;
        double brh;
        double hgt;



    public:

        BoxVolume(double l, double b, double h);
        void PrintDimensions(BoxVolume box);
        double getVolume(BoxVolume box);
        
};



BoxVolume::BoxVolume(double l, double b, double h):len(l), brh(b), hgt(h)
{}   

void BoxVolume::PrintDimensions(BoxVolume box){
    cout << "Length: " << box.len << endl;
    cout << "Breadth: " << box.brh << endl;
    cout << "Height: " << box.hgt << endl;
}


double BoxVolume::getVolume(BoxVolume box){
    return box.len * box.brh * box.hgt;
}

int main(){

    BoxVolume b1(12,10,8);


    b1.PrintDimensions(b1);
    cout << b1.getVolume(b1);

    return 0;
}