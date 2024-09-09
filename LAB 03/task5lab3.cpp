#include <iostream>
#include <string>
using namespace std;

class Stationary {
private:
    static const int MAX_ITEMS = 100;  
    string items[MAX_ITEMS];        
    float prices[MAX_ITEMS];         
    int itemCount;                     

public:
    Stationary() : itemCount(0) {}

 
    void add(const string& product, float price) {
        if (itemCount < MAX_ITEMS) {
            items[itemCount] = product;
            prices[itemCount] = price;
            itemCount++;
        } 
        else {
            cout << "Item list is full!" << endl;
        }
    }

    void modify(const string& product, float newPrice) {
        for (int i = 0; i < itemCount; i++) {
            if (items[i] == product) {
                prices[i] = newPrice;
                return;
            }
        }
        cout << "Item not found!" << endl;
    }

   
    void getItems(string itemList[], int& count) const {
        count = itemCount;
        for (int i = 0; i < itemCount; i++) {
            itemList[i] = items[i];
        }
    }

 
    void getPrices(float priceList[], int& count) const {
        count = itemCount;
        for (int i = 0; i < itemCount; i++) {
            priceList[i] = prices[i];
        }
    }

    float receipt() const {
        int numItems;
        float totalBill = 0.0;
        cout << "Enter the number of items to purchase: ";
        cin >> numItems;

        if (numItems <= 0) {
            cout << "Invalid number of items." << endl;
            return totalBill;
        }

        string product;
        int quantity;

        for (int i = 0; i < numItems; i++) {
            cout << "\nEnter the name of the product: ";
            cin.ignore();  
            getline(cin, product);
            cout << "Enter the quantity: ";
            cin >> quantity;

            if (quantity <= 0) {
                cout << "Invalid quantity." << endl;
                continue;
            }

            bool found = false;
            for (int j = 0; j < itemCount; j++) {
                if (items[j] == product) {
                    totalBill += prices[j] * quantity;
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Product not found: " << product << endl;
            }
        }

        return totalBill;
    }
};

int main() {
    Stationary shop;
    int choice;

    cout << "                 WELCOME TO THE SHOP                   "<<endl <<endl;

    while (true) {
        cout << "1. Add item"<<endl<<"2. Modify item price"<<endl<<"3. Retrieve item list"<<endl<<"4. Display all items"<<endl<<"5. Generate receipt"<<endl<<"6. Exit"<<endl;
        cin >> choice;

        switch (choice) {
            case 1: {
                string name;
                float price;
                cout << "\nEnter the name of the item: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter the price of the item: ";
                cin >> price;
                shop.add(name, price);
                break;
            }
            case 2: {
                string name;
                float newPrice;
                cout << "\nEnter the name of the item to modify: ";
                cin.ignore(); 
                getline(cin, name);
                cout << "Enter the new price: ";
                cin >> newPrice;
                shop.modify(name, newPrice);
                break;
            }
            case 3: {
                string itemList[100];
                float priceList[100];
                int count;
                shop.getItems(itemList, count);
                cout << "\nItems list:" << endl;
                for (int i = 0; i < count; i++) {
                    cout << itemList[i] << endl;
                }
                break;
            }
            case 4: {
                string itemList[100];
                float priceList[100];
                int count;
                shop.getItems(itemList, count);
                shop.getPrices(priceList, count);
                cout << "\nITEMS\tPRICES" << endl;
                for (int i = 0; i < count; i++) {
                    cout << itemList[i] << "\t" << priceList[i] << endl;
                }
                break;
            }
            case 5: {
                cout << endl<<"Your bill is: " << shop.receipt() << " Rs/-" << endl;
                break;
            }
            case 6:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
