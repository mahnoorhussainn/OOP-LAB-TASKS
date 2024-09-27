#include<iostream>
using namespace std;

int main(){
    cout<<"NAME: MAHNOOR HUSSAIN "<<endl;
    cout<<"ROLL NO.:23K-0535"<<endl;

    int n,width,minimumheight,current,maximumvolume=0;
    cout<< "Enter length n"<<endl;
    cin>> n;

    int height[n];
    cout<<"Enter heights"<<endl;

    for(int i=0;i<n;i++){
        cin>> height[i];
    }
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        width=j-i;

        if(height[i]<height[j])
        minimumheight=height[i];

        else
        minimumheight=height[j];

        current=width*minimumheight;

         if(current>maximumvolume)
    maximumvolume=current;

    }
  }
   
cout<< "Container can hold maximum water of volume "<<maximumvolume;
} 