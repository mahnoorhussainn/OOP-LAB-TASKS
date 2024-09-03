#include<iostream>
using namespace std;

int main(){
    cout<<"NAME: MAHNOOR HUSSAIN "<<endl;
    cout<<"ROLL NO.:23K-0535"<<endl;
    
    int number,count=0;
    cout<<"Enter any number to check whether it is prime number or not"<<endl;
    cin>> number;
    
    for(int i=2;i<number;i++){
        if(number%i==0)
           count=count+1;

    }
    if(count==0)
    cout<<"Number is prime";

    else
    cout<<"Number is not a prime";

}