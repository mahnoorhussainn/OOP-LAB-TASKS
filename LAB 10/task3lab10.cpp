#include <iostream>
using namespace std;

class Shape {
private:
    double area;

public:
    Shape(double a) : area(a) {}

    double Area(){
        return area;
    }

    Shape operator+(const Shape& s) {
        Shape temp(area + s.area);
        return temp;
    }
};

int main() {
    cout << "NAME: MAHNOOR HUSSAIN " << endl;
    cout << "ROLL NO.: 23K-0535" << endl << endl;
    Shape shape1(18.5);
    Shape shape2(6.3);

    cout << "Area of shape1: " << shape1.Area() << endl;
    cout << "Area of shape2: " << shape2.Area() << endl;

    Shape total = shape1 + shape2;

    cout << "Total area of shape1 and shape2: " << total.Area() << endl;

}