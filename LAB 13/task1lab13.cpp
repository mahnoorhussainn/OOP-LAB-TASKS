#include <iostream>
#include <string>
using namespace std;

template <class T>
class Swapper {
    T num1, num2;

public:
    Swapper(T a, T b) {
        num1 = a;
        num2 = b;
    }

    void swapValues() {
        T temp = num1;
        num1 = num2;
        num2 = temp;
    }

    void display() {
        cout << "Value 1: " << num1 << ", Value 2: " << num2 << endl;
    }
};

int main() {
    cout << "NAME: MAHNOOR HUSSAIN " << endl;
    cout << "ROLL NO.: 23K-0535" << endl << endl;
    Swapper<int> intSwapper(5,10);
    cout << "Before swapping of Integers:" << endl;
    intSwapper.display();
    intSwapper.swapValues();
    cout << "After swapping of Integers:" << endl;
    intSwapper.display();
    cout<<endl;
    Swapper<double> doubleSwapper(5.5,15.5);
    cout << "Before swapping of Doubles:" << endl;
    doubleSwapper.display();
    doubleSwapper.swapValues();
    cout << "After swapping of Doubles:" << endl;
    doubleSwapper.display();
    cout<<endl;

    Swapper<string> stringSwapper("Mahnoor", "Hussain");
    cout << "Before swapping of Strings:" << endl;
    stringSwapper.display();
    stringSwapper.swapValues();
    cout << "After swapping of Strings:" << endl;
    stringSwapper.display();

}
