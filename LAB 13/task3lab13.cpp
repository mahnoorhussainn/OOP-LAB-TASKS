#include <iostream>
using namespace std;

template <class A, class B>
class Pair {
private:
    A first;
    B second;

public:
    Pair(A f, B s) : first(f), second(s) {}

    A getFirst() const {
        return first;
    }

    B getSecond() const {
        return second;
    }

    void setFirst(A f) {
        first = f;
    }

    void setSecond(B s) {
        second = s;
    }

    void display() const {
        cout << "First: " << first << ", Second: " << second << endl;
    }
};

int main() {
    cout << "NAME: MAHNOOR HUSSAIN " << endl;
    cout << "ROLL NO.: 23K-0535" << endl << endl;
    Pair<int, double> p1(10, 5.5);
    cout << "Pair 1: First = " << p1.getFirst() << ", Second = " << p1.getSecond() << endl;

    Pair<int, double> p2(20, 7.25);
    cout << "Pair 2: First = " << p2.getFirst() << ", Second = " << p2.getSecond() << endl;

    p1.setFirst(30);
    p1.setSecond(14.75);
    cout << "Modified Pair 1: First = " << p1.getFirst() << ", Second = " << p1.getSecond() << endl;

    p2.setFirst(40);
    p2.setSecond(10.5);
    cout << "Modified Pair 2: First = " << p2.getFirst() << ", Second = " << p2.getSecond() << endl;


}


