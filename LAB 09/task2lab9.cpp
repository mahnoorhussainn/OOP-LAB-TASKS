#include<iostream>
#include<cmath>
using namespace std;

const double PI = 3.142;

class Shape {
public:
    virtual double calculateArea() const = 0;
    virtual double calculatePerimeter() const = 0;
    virtual void showProperties() const = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double calculateArea() const override {
        return PI * radius * radius;
    }

    double calculatePerimeter() const override {
        return 2 * PI * radius;
    }

    void showProperties() const override {
        cout << "Circle Properties:" << endl;
        cout << "Radius: " << radius << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea() const override {
        return length * width;
    }

    double calculatePerimeter() const override {
        return 2 * (length + width);
    }

    void showProperties() const override {
        cout << "Rectangle Properties:" << endl;
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
    }
};

class Square : public Shape {
private:
    double sideLength;

public:
    Square(double side) : sideLength(side) {}

    double calculateArea() const override {
        return sideLength * sideLength;
    }

    double calculatePerimeter() const override {
        return 4 * sideLength;
    }

    void showProperties() const override {
        cout << "Square Properties:" << endl;
        cout << "Side Length: " << sideLength << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
    }
};

class Triangle : public Shape {
protected:
    double side1, side2, side3;

public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    double calculatePerimeter() const override {
        return side1 + side2 + side3;
    }

    virtual double calculateArea() const override {
        return 0;  // We will handle this in specific derived classes
    }

    void showProperties() const override {
        cout << "Triangle Properties:" << endl;
        cout << "Sides: " << side1 << ", " << side2 << ", " << side3 << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
    }
};

class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle(double side) : Triangle(side, side, side) {}

    double calculateArea() const override {
        return (sqrt(3) / 4) * side1 * side1;
    }

    double calculatePerimeter() const override {
        return 3 * side1;
    }

    void showProperties() const override {
        cout << "Equilateral Triangle Properties:" << endl;
        cout << "Side Length: " << side1 << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
    }
};

class GeneralTriangle : public Triangle {
private:
    double base, height;

public:
    GeneralTriangle(double s1, double s2, double s3, double b, double h) 
        : Triangle(s1, s2, s3), base(b), height(h) {}

    double calculateArea() const override {
        return 0.5 * base * height;  // Area = 1/2 * base * height
    }

    void showProperties() const override {
        cout << "General Triangle Properties:" << endl;
        cout << "Sides: " << side1 << ", " << side2 << ", " << side3 << endl;
        cout << "Base: " << base << ", Height: " << height << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
    }
};

int main() {
    int shapeChoice;
    cout << "Welcome to the Geometry Competition Calculator! " << endl;
    Shape* shapePtr = nullptr;

    while (true) {
        cout << "Please select a shape: " << endl;
        cout << "1. Circle" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Square" << endl;
        cout << "4. Triangle" << endl;
        cin >> shapeChoice;

        switch (shapeChoice) {
            case 1: {
                double radius;
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                Circle circle(radius);
                shapePtr = &circle;
                shapePtr->showProperties();
                break;
            }
            case 2: {
                double length, width;
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                Rectangle rectangle(length, width);
                shapePtr = &rectangle;
                shapePtr->showProperties();
                break;
            }
            case 3: {
                double side;
                cout << "Enter the side length of the square: ";
                cin >> side;
                Square square(side);
                shapePtr = &square;
                shapePtr->showProperties();
                break;
            }
            case 4: {
                double side1, side2, side3, base, height;
                cout << "Enter the lengths of the three sides of the triangle: ";
                cin >> side1 >> side2 >> side3;

                if (side1 == side2 && side2 == side3) {
                    cout << "Displaying the properties of the equilateral triangle:" << endl;
                    EquilateralTriangle equilateral(side1);
                    shapePtr = &equilateral;
                    shapePtr->showProperties();
                } else {
                    cout << "Enter the base and height of the triangle: ";
                    cin >> base >> height;
                    GeneralTriangle generalTriangle(side1, side2, side3, base, height);
                    shapePtr = &generalTriangle;
                    shapePtr->showProperties();
                }
                break;
            }
            default:
                cout << "Invalid choice" << endl;
                break;
        }

        string continueChoice;
        cout << endl << "Do you want to calculate properties for another shape? (yes/no): ";
        cin >> continueChoice;
        if (continueChoice != "yes") {
            cout << "Thank you for using the Geometry Competition Calculator!" << endl;
            break;
        }
    }

}
