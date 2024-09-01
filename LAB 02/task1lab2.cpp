#include<iostream>
using namespace std;

void recursiveSwap(int& a, int&b){
    static int i=1;
    if (i==0)
        return;
    
    int temp = a;
    a = b;
    b = temp;
    i--;
    recursiveSwap(a, b);
}

int main(){

    cout << "NAME: MAHNOOR HUSSAIN " << endl;
    cout << "ROLL NO.: 23K-0535" << endl << endl;

    int num1,num2;
    cout << "Enter number 1" << endl;
    cin>> num1;
    cout << "Enter number 2" << endl;
    cin>> num2;
    
    cout << "Before swapping num1 is " << num1 << " and num2 is " << num2 << endl;
    recursiveSwap(num1, num2);
    cout << "After swapping num1 is " << num1 << " and num2 is " << num2 << endl;
}

