#include <iostream>
using namespace std;

template <class T>
class FactorialCalculator {
private:
    T number;

public:
    FactorialCalculator(T n) : number(n) {}

    T calculateFactorial() {
        T result = 1;
        for (T i = 1; i <= number; i++) {
            result *= i;
        }
        return result;
    }
};

int main() {
    cout << "NAME: MAHNOOR HUSSAIN " << endl;
    cout << "ROLL NO.: 23K-0535" << endl << endl;
    long int number;
    cout << "Enter a number to calculate its factorial: ";
    cin >> number;
    
    if (number < 0) {
        cout << "Invalid! Negative number." << endl;
    } else if (number <= 15) {
        FactorialCalculator<int> intCalculator(number);
        int intFactorial = intCalculator.calculateFactorial();
        cout << "Factorial of " << number << " is: " << intFactorial << endl;
    } else {
        FactorialCalculator<long int> longCalculator(number);
        long int longFactorial = longCalculator.calculateFactorial();
        cout << "Factorial of " << number << " is: " << longFactorial << endl;
    }


}


