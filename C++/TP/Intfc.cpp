#include <iostream>

using namespace std;


//base class

class Shape{

    protected:
        int width;
        int length;

    public:
        void setWidth(double w){
            width  = w;
        }

        void setLength(double l){
            length = l;
        }

        virtual double getArea() = 0;
};


class Rectangle : public Shape{

    public:
        double getArea(){
            return length*width;
        }
};


class Triangle : public Shape{

    public:
        double getArea(){
            return (length*width)/2;
        }
};


int main(){

    Rectangle r;
    Triangle t;

    r.setLength(5);
    r.setWidth(3);

    t.setLength(5);
    t.setWidth(8);

    cout << "Area of Rectangle: " << r.getArea() << endl;
    cout << "Area of Triangle: " << t.getArea() << endl;

    return 0;
}