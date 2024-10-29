#include <iostream>
using namespace std;

class Position {
protected:
    int x, y, z;

public:
    Position(int xPos, int yPos, int zPos) : x(xPos), y(yPos), z(zPos) {}

    void displayPosition() {
        cout << "Position - X: " << x << endl;
        cout << "Y: " << y << endl;
        cout << "Z: " << z << endl;
    }
};

class Health {
protected:
    int health;

public:
    Health(int h) : health(h) {}

    void displayHealth() {
        cout << "Health: " << health << endl;
    }
};

class Character : public Position, public Health {
public:
    Character(int x, int y, int z, int h) : Position(x, y, z), Health(h) {}

    void display() {
        displayPosition();
        displayHealth();
    }
};

int main() {
    cout << "NAME: MAHNOOR HUSSAIN " << endl;
    cout << "ROLL NO.: 23K-0535" << endl;
    
    Character character(5, 15, 25, 500);
    character.display();

}