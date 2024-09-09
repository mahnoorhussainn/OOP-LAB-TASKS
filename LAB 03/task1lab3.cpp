#include<iostream>
#include<string>
using namespace std;

class BoardMarker{

    string Brand;
    string Shade;
    bool Refillable;
    bool InkStatus;

    public:
    
       string getbrand(){
        return Brand;
       }

       string getshade(){
        return Shade;
       }

       bool getinfo(){
        return Refillable;
       }

       bool getstatus(){
        return InkStatus;
       }

      void setbrand(string b){
         Brand = b; 
       }

     void setshade(string s){ 
         Shade = s;
       }

     void setinfo(bool info){
         Refillable = info; 
       }

    void setstatus(bool status){
         InkStatus = status; 
       }
  
    void write() {
        if (InkStatus)
            cout << "Marker of shade " << Shade << " has ink." << endl;

        else 
            cout << "The ink has run out!" << endl;
        
    }

    void refill() {
        if (Refillable){
            InkStatus = true;
            cout << "Marker is refillable." << endl;
        }  

        else 
            cout << "Marker is not refillable." << endl;
        
    }

};

int main(){

    cout << "NAME: MAHNOOR HUSSAIN " << endl;
    cout << "ROLL NO.: 23K-0535" << endl << endl;


    BoardMarker marker1,marker2;

    marker1.setbrand("DEER");
    marker1.setshade("Blue");
    marker1.setinfo(true);  
    marker1.setstatus(false);

    marker2.setbrand("DOLLAR");
    marker2.setshade("Green");
    marker2.setinfo(true);  
    marker2.setstatus(true);
    

    cout<<"MARKER 1"<<endl <<endl;
    cout << "Brand: " << marker1.getbrand() << endl;
    cout << "Shade: " << marker1.getshade() << endl;
    string refillresult1 = marker1.getinfo() ? "Yes" : "No";
    cout << "Refillable: " << refillresult1  << endl;
    string inkresult1 = marker1.getstatus() ? "Yes" : "No";
    cout << "Has Ink: " << inkresult1 << endl;

    marker1.write();
    marker1.refill();

    cout<<"---------------------------------------------------------------"<<endl<<endl;



    cout<<"MARKER 2"<<endl <<endl;
    cout << "Brand: " << marker2.getbrand() << endl;
    cout << "Shade: " << marker2.getshade() << endl;
    string refillresult2 = marker2.getinfo() ? "Yes" : "No";
    cout << "Refillable: " << refillresult2 << endl;
    string inkresult2 = marker2.getstatus() ? "Yes" : "No";
    cout << "Has Ink: " << inkresult2 << endl;

    marker2.write();
    marker2.refill();
}