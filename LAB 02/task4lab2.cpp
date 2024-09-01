#include<iostream>
#include<string>
using namespace std;

struct Register{
      string courseId;
      string courseName;
};

struct Student : public Register{
    string studentId;
    string firstName;
    string lastName;
    string cellNo;
    string email;
};

int main(){
    cout << "NAME: MAHNOOR HUSSAIN " << endl;
    cout << "ROLL NO.: 23K-0535" << endl << endl;
    
    Student students[5];  

    for (int i=0; i<5; i++){

        cout << "Enter data of student " << i+1 << endl;
        cout << "Enter course ID= ";
        cin >> students[i].courseId;
        cin.ignore();
        cout << "Enter course name= ";
        getline(cin, students[i].courseName);
        cout << "Enter student ID= ";
        cin >> students[i].studentId;
        cin.ignore();  
        cout << "Enter first name= ";
        getline(cin, students[i].firstName);
        cout << "Enter last name= ";
        getline(cin, students[i].lastName);
        cout << "Enter cell number= ";
        getline(cin, students[i].cellNo);
        cout << "Enter email= ";
        getline(cin, students[i].email);
        cout <<endl<<endl; 

    }
   
    cout << "DATA OF STUDENTS" <<endl;

    for (int i=0; i<5; i++){

        cout << "Student " << i+1 <<endl;
        cout << "Course ID = " << students[i].courseId << endl;
        cout << "Course Name = " << students[i].courseName << endl;
        cout << "Student ID = " << students[i].studentId << endl;
        cout << "First Name = " << students[i].firstName << endl;
        cout << "Last Name = " << students[i].lastName << endl;
        cout << "Cell Number = " << students[i].cellNo << endl;
        cout << "Email = " << students[i].email <<endl <<endl;

    }  
}

