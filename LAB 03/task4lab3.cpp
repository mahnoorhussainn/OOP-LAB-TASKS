#include<iostream>
#include<string>
using namespace std;

class Smartphone{
  
    string Brand;
    string Model;
    string DisplayResolution; 
    string RAM;
    string ROM;
    string Storage;

public:
   
    string getBrand(){
         return Brand; 
    }

    string getModel(){ 
        return Model;
    }

    string getDisplay(){ 
        return DisplayResolution;
    } 

    string getRAM(){
        return RAM;
    }

    string getROM(){ 
        return ROM;
    }

    string getStorage(){
        return Storage;
    }

    void setBrand(string b){
        Brand = b;
    }

    void setModel(string m){
        Model = m; 
    }

    void setDisplay(string display){
        DisplayResolution = display;
    }  

    void setRAM(string ram){
        RAM = ram;
    }

    void setROM(string rom){ 
        ROM = rom; 
    }
    void setStorage(string storage){ 
        Storage = storage;
    }


    void call(string number) {
        cout << "Calling " << number << " from " << Brand << " " << Model  << endl;
    }

    void message(string number, string message) {
        cout << message <<" is sent to "<< number << endl;
    }

    void wifi(string network) {
        cout << "Connecting to Wi-Fi: " << network << endl;
    }

    void internet(string website) {
        cout << "Welcome to " << website << endl;
    }

};

int main() {

    cout << "NAME: MAHNOOR HUSSAIN" << endl;
    cout << "ROLL NO.: 23K-0535" << endl << endl;

    Smartphone phone1, phone2, phone3, phone4, phone5;

    phone1.setBrand("Apple");
    phone1.setModel("iPhone 11");
    phone1.setDisplay("1270x3530 pixels");  
    phone1.setRAM("6 GB");
    phone1.setROM("128 GB");
    phone1.setStorage("256 GB");

 
    phone2.setBrand("Google");
    phone2.setModel("Pixel 6");
    phone2.setDisplay("1280x2340 pixels");  
    phone2.setRAM("8 GB");
    phone2.setROM("256 GB");
    phone2.setStorage("512 GB");

    phone3.setBrand("SAMSUNG");
    phone3.setModel("Galaxy S20");
    phone3.setDisplay("1980x2400 pixels");  
    phone3.setRAM("8 GB");
    phone3.setROM("128 GB");
    phone3.setStorage("256 GB");


    phone4.setBrand("Nokia");
    phone4.setModel("Note 6");
    phone4.setDisplay("1440x3216 pixels");  
    phone4.setRAM("12 GB");
    phone4.setROM("256 GB");
    phone4.setStorage("512 GB");

    
    phone5.setBrand("Infinix");
    phone5.setModel("Smart 6");
    phone5.setDisplay("1440x3200 pixels");  
    phone5.setRAM("4 GB");
    phone5.setROM("128 GB");
    phone5.setStorage("64 GB");

    
    cout << "Phone 1 Details:" << endl << endl;
    cout << "Brand: " << phone1.getBrand() << endl;
    cout << "Model: " << phone1.getModel() << endl;
    cout << "Display Resolution: " << phone1.getDisplay() << endl;  
    cout << "RAM: " << phone1.getRAM() << endl;
    cout << "ROM: " << phone1.getROM() << endl;
    cout << "Storage: " << phone1.getStorage()<< endl;
    phone1.call("03310199003");
    phone1.message("03310199003", "Heyy! How are you?");
    phone1.wifi("PTCL");
    phone1.internet("www.apple.com");

    cout << endl << "---------------------------------------------------------------" << endl << endl;


    cout << "Phone 2 Details:" << endl << endl;
    cout << "Brand: " << phone2.getBrand() << endl;
    cout << "Model: " << phone2.getModel() << endl;
    cout << "Display Resolution: " << phone2.getDisplay() << endl;  
    cout << "RAM: " << phone2.getRAM()<< endl;
    cout << "ROM: " << phone2.getROM()<< endl;
    cout << "Storage: " << phone2.getStorage()<< endl;
    phone2.call("03322109867");
    phone2.message("03322109867", "Hello! ");
    phone2.wifi("Galaxo Internet");
    phone2.internet("www.pixel.com");
   
    cout << endl << "---------------------------------------------------------------" << endl << endl;

     cout << "Phone 3 Details:" << endl << endl;
    cout << "Brand: " << phone3.getBrand() << endl;
    cout << "Model: " << phone3.getModel() << endl;
    cout << "Display Resolution: " << phone3.getDisplay() << endl;  
    cout << "RAM: " << phone3.getRAM()<< endl;
    cout << "ROM: " << phone3.getROM() << endl;
    cout << "Storage: " << phone3.getStorage()<< endl;
    phone3.call("03310199004");
    phone3.message("03310199004", "Heyy! Have you completed your assignment?");
    phone3.wifi("City Internet");
    phone3.internet("www.samsung.com");
    
    cout << endl << "---------------------------------------------------------------" << endl << endl;

    cout << "Phone 4 Details:" << endl << endl;
    cout << "Brand: " << phone4.getBrand() << endl;
    cout << "Model: " << phone4.getModel() << endl;
    cout << "Display Resolution: " << phone4.getDisplay() << endl;  
    cout << "RAM: " << phone4.getRAM()<< endl;
    cout << "ROM: " << phone4.getROM()<< endl;
    cout << "Storage: " << phone4.getStorage()<< endl;
    phone4.call("03331199003");
    phone4.message("03331199003", "Hello!");
    phone4.wifi("Icloud Internet");
    phone4.internet("www.mobiles.com");

    cout << endl << "---------------------------------------------------------------" << endl << endl;

    cout << "Phone 5 Details:" << endl << endl;
    cout << "Brand: " << phone5.getBrand() << endl;
    cout << "Model: " << phone5.getModel() << endl;
    cout << "Display Resolution: " << phone5.getDisplay() << endl;  
    cout << "RAM: " << phone5.getRAM() <<endl;
    cout << "ROM: " << phone5.getROM() <<endl;
    cout << "Storage: " << phone5.getStorage() << endl;
    phone5.call("03339999860");
    phone5.message("03339999860", "Hello!");
    phone5.wifi("Robert Internet");
    phone5.internet("www.watches.com");

}