#include <iostream>
using namespace std;

const double pi = 3.142;

class Shape {
public:
    double radius = 5.0;
    int length = 8;
    int width = 9;
    double base = 9.0;
    double height = 10.0;
    double side1 = 96.0, side2 = 98.0, side3 = 80.0;

    double area(double r) {
        return pi * r * r;
    }

    int area(int l, int w) {
        return l * w;
    }

    double area(double b, double h) {
        return 0.5 * b * h;
    }

    double perimeter(double r) {
        return 2 * pi * r;
    }

    double perimeter(int l, int w) {
        return 2 * (l + w);
    }

    double perimeter(double s1, double s2, double s3) {
        return s1 + s2 + s3;
    }
};

int main() {

    cout<<"NAME: MAHNOOR HUSSAIN "<<endl;
    cout<<"ROLL NO.:23K-0535"<<endl;
    
    Shape circle;
    cout << "Area of the Circle: " << circle.area(circle.radius) << endl;
    cout << "Perimeter of the Circle: " << circle.perimeter(circle.radius) << endl;

    Shape rectangle;
    cout << "Area of the Rectangle: " << rectangle.area(rectangle.length, rectangle.width) << endl;
    cout << "Perimeter of the Rectangle: " << rectangle.perimeter(rectangle.length, rectangle.width) << endl;

    Shape triangle;
    cout << "Area of the Triangle: " << triangle.area(triangle.base, triangle.height) << endl;
    cout << "Perimeter of the Triangle: " << triangle.perimeter(triangle.side1, triangle.side2, triangle.side3) << endl;

}
