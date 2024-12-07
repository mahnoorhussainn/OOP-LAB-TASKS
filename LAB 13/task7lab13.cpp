#include <iostream>
using namespace std;

template <typename T>
class Complex {
    T real, imag;

public:
    Complex(T r = 0, T i = 0) {
        real = r;
        imag = i;
    }

    Complex operator + (const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex operator - (const Complex& other) {
        return Complex(real - other.real, imag - other.imag);
    }

    void display() const {
        cout << real;
        if (imag >= 0) 
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";
        cout << endl;
    }
};

int main() {
    cout << "NAME: MAHNOOR HUSSAIN " << endl;
    cout << "ROLL NO.: 23K-0535" << endl << endl;
    Complex<int> num1(5, 7);
    Complex<int> num2(2, 6);

    cout << "Integer Complex Number 1: ";
    num1.display();

    cout << "Integer Complex Number 2: ";
    num2.display();

    Complex<int> sum = num1 + num2;
    cout << "Sum of Integer Complex Numbers: ";
    sum.display();

    Complex<int> difference = num1 - num2;
    cout << "Difference of Integer Complex Numbers: ";
    difference.display();

    Complex<double> num3(3.5, 4.5);
    Complex<double> num4(1.5, 2.5);

    cout << "Double Complex Number 1: ";
    num3.display();

    cout << "Double Complex Number 2: ";
    num4.display();

    Complex<double> sumD = num3 + num4;
    cout << "Sum of Double Complex Numbers: ";
    sumD.display();

    Complex<double> differenceD = num3 - num4;
    cout << "Difference of Double Complex Numbers: ";
    differenceD.display();

}
