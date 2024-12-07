#include <iostream>
using namespace std;

template <class T>
class Division {
public:
    void divide(T a, T b) {
        try {
            if (b == 0) {
                throw b;
            }
            cout << "Result: " << a / b << endl;
        }
        catch (T b) {
            cout << "Error: Can't divide by zero!" << endl;
        }
    }
};

int main() {
    cout << "NAME: MAHNOOR HUSSAIN " << endl;
    cout << "ROLL NO.: 23K-0535" << endl << endl;
    Division<int> d1;
    d1.divide(5, 0);
    Division<float> d2;
    d2.divide(5.6, 5.6);
}
