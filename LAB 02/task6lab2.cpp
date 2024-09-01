#include <iostream>
using namespace std;

int calculateGCD(int a,int b);
int calculateLCM(int c,int d,int multiples);

int main(){
   
    cout << "NAME: MAHNOOR HUSSAIN " << endl;
    cout << "ROLL NO.: 23K-0535" << endl << endl;
    
   int num1,num2;
   cout << "Enter number 1" << endl;
   cin>> num1;
   cout << "Enter number 2" << endl;
   cin>> num2;
   int answerGCD=calculateGCD(num1,num2);
   cout <<"GCD of "<<num1 << " and "<<num2 <<" is "<<answerGCD<<endl;
    
   int answerLCM=calculateLCM(num1,num2,max(num1,num2));
   cout <<"LCM of "<<num1 << " and "<<num2 <<" is "<<answerLCM<<endl;
}
int calculateGCD(int a,int b){
	if (a==0)
	return b;
	
	else if(b==0)
	return a;
	
	else{
		int answerGCD=calculateGCD(b,a%b);
		return answerGCD;
	}
}


int calculateLCM(int c, int d, int multiples) {

    if ((multiples % c == 0) && (multiples % d == 0)) 
        return multiples;
    
    else 
        return calculateLCM(c, d, multiples + d);
    
}