#include <iostream>
#include <string>
using namespace std;

class WaterBottle {
    string company;        
    string color;          
    float capacityLitres;
    float capacityMillilitres;

public:
  
    string getCompany() { 
        return company;
    }

    string getColor() {
        return color;
    }

    float getCapacityLitres() {
        return capacityLitres;
    }

    float getCapacityMillilitres() { 
        return capacityMillilitres; 
    }


    void setCompany(const string& c) {
        company = c;
    }

    void setColor(const string& col) {
         color = col;
    }

    void setCapacity(float capLitres) {
        capacityLitres = capLitres;
        capacityMillilitres = capLitres * 1000;
    }

    void consumeWater(float consumedMillilitres) {
        if (consumedMillilitres > capacityMillilitres) {
            cout << "Not enough quantity of water in the bottle." << endl;
            return;
        }

        capacityMillilitres -= consumedMillilitres;
        capacityLitres = capacityMillilitres / 1000;
    }
};

int main() {

    cout << "NAME: MAHNOOR HUSSAIN" << endl;
    cout << "ROLL NO.: 23K-0535" << endl << endl;

 
    WaterBottle bottle;
    bottle.setCompany("WYDTH");
    bottle.setColor("Pink");
    bottle.setCapacity(2.0);

 
    cout << "Water Bottle Details:" << endl;
    cout << "Manufacturer: " << bottle.getCompany() << endl;
    cout << "Color: " << bottle.getColor() << endl;
    cout << "Capacity: " << bottle.getCapacityLitres() << " Litres (" << bottle.getCapacityMillilitres() << " Millilitres)" << endl;


    float consumedMillilitres;
    cout << "Enter the amount of water consumed (in millilitres): ";
    cin >> consumedMillilitres;


    bottle.consumeWater(consumedMillilitres);

    cout << "Updated Water Bottle Details:" << endl;
    cout << "Manufacturer: " << bottle.getCompany() << endl;
    cout << "Color: " << bottle.getColor() << endl;
    cout << "Capacity: " << bottle.getCapacityLitres() << " Litres (" << bottle.getCapacityMillilitres() << " Millilitres)" << endl;

 
}




