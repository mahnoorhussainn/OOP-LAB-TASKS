#include <iostream>
using namespace std;

class Character {
protected:
    int health, damage;

public:
    Character(int h, int d) : health(h), damage(d) {}

    void display() {
        cout << "Health: " << health << endl;
        cout << "Damage: " << damage << endl;
    }
};

class Enemy : public Character {
public:
    Enemy(int h, int d) : Character(h, d) {}

    void display() {
        cout << "Enemy - " << endl;
        Character::display();
    }
};

class Player : public Character {
public:
    Player(int h, int d) : Character(h, d) {}

    void display() {
        cout << "Player  " << endl;
        Character::display();
    }
};

class Wizard : public Player {
    int magicPower;
    string spells;

public:
    Wizard(int h, int d, int mp, string s)
        : Player(h, d), magicPower(mp), spells(s) {}

    void display() {
        Player::display();
        cout << "Magic Power: " << magicPower << endl;
        cout << "Spells: " << spells << endl;
    }
};

int main() {
    cout << "NAME: Mahnoor Hussain" << endl;
    cout << "ID: 23K-0535" << endl;

    Wizard wizard(120, 25, 100, "Lightning Bolt");
    wizard.display();
  
}