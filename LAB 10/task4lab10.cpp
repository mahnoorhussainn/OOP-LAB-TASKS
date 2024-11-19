#include <iostream>
using namespace std;

class perimeter {
private:
    double length;
    double breadth;

public:
    perimeter(double l, double b) : length(l), breadth(b) {}

    double calculatePerimeter() const{
        return 2 * (length + breadth);
    }
    
    friend class printClass;
};

class printClass {
public:
    void displayPerimeter(const perimeter& p) {
        cout << "Length: " << p.length << endl;
        cout << "Breadth: " << p.breadth << endl;
        cout << "Perimeter of rectangle: " << p.calculatePerimeter() << endl;
    }
};

int main() {
    cout << "NAME: MAHNOOR HUSSAIN " << endl;
    cout << "ROLL NO.: 23K-0535" << endl << endl;
    perimeter p(10.5, 5.3);
    printClass obj;

    obj.displayPerimeter(p);

}