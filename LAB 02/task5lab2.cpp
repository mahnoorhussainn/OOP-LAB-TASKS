#include <iostream>
#include <string>
using namespace std;


int productCount=0;
int productIds[100];
string productNames[100];
float productPrices[100];
int productQuantities[100];


void addProduct(int id, string &name,float price, int quantity);
void displayProduct(int id);
void updateProduct(int id,float newPrice,int newQuantity);


int main(){
    cout << "NAME: MAHNOOR HUSSAIN " << endl;
    cout << "ROLL NO.: 23K-0535" << endl << endl;
    
    int choice=0;

    do {

        cout << "Product Management System " <<endl;
        cout << "1. Add product" <<endl <<"2. Display Product" <<endl << "3.Update product" <<endl<<"4. Exit" <<endl;
        cout << "Enter your choice ";
        cin >> choice;

        switch (choice){

          case 1: {

            int id;
            string name;
            float price;
            int quantity;

            cout << "Enter product ID= ";
            cin >> id;
            cin.ignore();
            cout << "Enter product name= ";
            getline(cin, name);
            cout << "Enter product price= ";
            cin >> price;
            cout << "Enter product quantity= ";
            cin >> quantity;

            addProduct(id, name, price, quantity);

            break;
        }

        case 2: {

            int displayId;
            cout << "Enter product ID to display: ";
            cin >> displayId;
            displayProduct(displayId);

            break;
        }

        case 3: {

            int id;
            double newPrice;
            int newQuantity;

            cout << "Enter product ID to update: ";
            cin >> id;
            cout << "Enter new price: ";
            cin >> newPrice;
            cout << "Enter new quantity: ";
            cin >> newQuantity;

            updateProduct(id, newPrice, newQuantity);
        } 

        case 4: {

            cout << "Exit " << endl;
            break;

        } 
            default:
            cout << "Invalid choice! Please try again." << endl;
        
    } 

    }
    while(choice!=4);
}      


void addProduct(int id, string &name,float price, int quantity) {
  
    productIds[productCount] = id;
    productNames[productCount] = name;
    productPrices[productCount] = price;
    productQuantities[productCount] = quantity;
    productCount=productCount+1;
    cout << "Product added successfully." <<endl<<endl<<endl;
}

void displayProduct(int id) {

    for (int i = 0; i < productCount; i++) {
        if (productIds[i] == id) {
            cout << "Product ID: " << productIds[i] << endl;
            cout << "Name: " << productNames[i] << endl;
            cout << "Price: " << productPrices[i] << endl;
            cout << "Quantity: " << productQuantities[i] << endl;
            return;
        }
    }
    cout << "Product not found." << endl;
}

void updateProduct(int id,float newPrice,int newQuantity) {

    for (int i = 0; i < productCount; i++) {
        if (productIds[i] == id) {
            productPrices[i] = newPrice;
            productQuantities[i] = newQuantity;
            cout << "Product updated successfully." <<endl<<endl<<endl;
            return;
        }
    }
    cout << "Product not found." <<endl<<endl;
}


