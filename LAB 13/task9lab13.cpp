

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "NAME: MAHNOOR HUSSAIN " << endl;
    cout << "ROLL NO.: 23K-0535" << endl << endl;
    string username = "mahnoor";
    try{
   if(username.length()<5){
       int len=username.length();
       cout<<"length is less than 5"<<endl;
       throw len;
   }
   cout<<"Valid! username is: "<<username<<endl;
    }
   catch (int e){
       cout<<"Invalid! Username length is: "<<e;
   }
   
   string password="Bahria";
    try{
   if(password.length()<8){
       int lenpass=password.length();
       cout<<"Password length is less than 8"<<endl;
       throw lenpass;
   }
   cout<<"password is: "<<password;
    }
   catch (int p){
       cout<<"Invalid! Password length is: "<<p;
   }
}

