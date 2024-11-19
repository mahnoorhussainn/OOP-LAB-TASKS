#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int val) : value(val) {}

    void operator--() {
        value =value * 4;
    }

    void operator--(int) {
        value /= 4;
    }

    void display() const {
        cout << "Value: " << value << endl;
    }
};

int main() {

    cout << "NAME: MAHNOOR HUSSAIN " << endl;
    cout << "ROLL NO.: 23K-0535" << endl << endl;
    Number num1(8);
    Number num2(8);
    
    cout<<"Original number ";
    num1.display();

    num1--;
    cout << "After postfix decrement (8/4): ";
    num1.display();

    --num2;
    cout << "After prefix decrement (8*4): ";
    num2.display();

}
