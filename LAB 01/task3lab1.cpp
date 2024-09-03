#include<iostream>
using namespace std;

int main(){
    cout<<"NAME: MAHNOOR HUSSAIN "<<endl;
    cout<<"ROLL NO.:23K-0535"<<endl;
     
    int length,target,check=0,index1=0,index2=0;
    cout<<"Enter array length"<<endl;
    cin>> length;
    cout<< "Enter target number"<<endl;
    cin>> target;

    int num[length];
    cout<<"Enter array elements"<<endl;
     
    int i;
    for( i=0;i<length;i++){
        cin>> num[i];
    }
    cout<<"Given array is ";
    for( i=0;i<length;i++){
        cout<< num[i] <<" ";
    }
    cout<<endl;
    for( i=0;i<length;i++){
        for(int j=i+1;j<length;j++){
            if(num[i]+num[j]==target) {
            index1=i;
            index2=j;
            check=1;
            break;
        }

        }
       
    }
     if(check==1)
        cout<<"Sum of indice "<<index1<<" and indice "<<index2<<" is equal to "<<target;

        else
        cout<<"No pair found";
}   