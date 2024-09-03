#include<iostream>
using namespace std;

int main(){
    cout<<"NAME: MAHNOOR HUSSAIN "<<endl;
    cout<<"ROLL NO.:23K-0535"<<endl;
    
    int num_of_students;
    cout<< "Enter number of students"<<endl;
    cin>> num_of_students;
     
    int maths[num_of_students],science[num_of_students],english[num_of_students];
    float total[num_of_students],avg[num_of_students];
    
    for(int i=1;i<=num_of_students;i++){
        cout<< "Enter details of student"<<i<<endl<<endl;

        cout<< "Enter marks of MATHS of student"<<i<<endl;
        cin>> maths[i];
      
        cout<< "Enter marks of SCIENCE of student"<<i<<endl;
        cin>> science[i];

        cout<< "Enter marks of ENGLISH of student"<<i<<endl;
        cin>> english[i];

        total[i]=maths[i]+science[i]+english[i];
        avg[i]=total[i]/3;

        }
        cout<<endl;
        cout<<"DETAILS OF ALL STUDENTS"<<endl<<endl;

        for(int i=1;i<=num_of_students;i++){
             cout<< "Details of student"<<i<<endl;

        cout<< "Marks of MATHS of student"<<i<<" is "<<maths[i]<<endl;
      
        cout<< "Marks of SCIENCE of student"<<i<<" is "<<science[i]<<endl;

        cout<< "Marks of ENGLISH of student"<<i<<" is "<<english[i]<<endl;
    

        cout<< "Total of student "<<i<<" is "<<total[i]<<endl;
        
        cout<< "Average of student "<<i<<" is "<<avg[i]<<endl;
         
        cout<< "Grade of student"<<i<<" is ";
        if(avg[i]>=90)
        cout<<"GRADE A";
        
        else if(avg[i]>=80 && avg[i]<=89)
        cout<<"GRADE B";

        else if(avg[i]>=70 && avg[i]<=79)
        cout<<"GRADE C";

        else if(avg[i]>=60 && avg[i]<=69)
        cout<<"GRADE D";

        else
        cout<<"GRADE F";
        
        cout<<endl<<endl;
        }

    }

