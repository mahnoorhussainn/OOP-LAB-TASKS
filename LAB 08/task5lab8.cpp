#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string make, model;
    int year;

public:
    Vehicle(string mk, string mdl, int yr) : make(mk), model(mdl), year(yr) {}

    void display() {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

class Car : public Vehicle {
protected:
    int doors;
    float fuelEfficiency;

public:
    Car(string mk, string mdl, int yr, int d, float fe)
        : Vehicle(mk, mdl, yr), doors(d), fuelEfficiency(fe) {}

    void display() {
        Vehicle::display();
        cout << "Doors: " << doors << endl;
        cout << "Fuel Efficiency: " << fuelEfficiency << " MPG" << endl;
    }
};

class ElectricCar : public Car {
    int batteryLife;

public:
    ElectricCar(string mk, string mdl, int yr, int d, float fe, int bl)
        : Car(mk, mdl, yr, d, fe), batteryLife(bl) {}

    void display() {
        Car::display();
        cout << "Battery Life: " << batteryLife << " hours" << endl;
    }
};

int main() {
    cout << "NAME: Mahnoor Hussain" << endl;
    cout << "ID: 23K-0535" << endl;

    ElectricCar eleccar("BMW", "i4", 2023, 4, 110.0, 400);
    eleccar.display();
  
}