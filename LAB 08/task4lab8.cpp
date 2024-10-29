#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
protected:
    string studentID;
    int gradeLevel;

public:
    Student(string n, int a, string id, int grade)
        : Person(n, a), studentID(id), gradeLevel(grade) {}

    void displayStudent() {
        displayPerson();
        cout << "Student ID: " << studentID << endl;
        cout << "Grade Level: " << gradeLevel << endl;
    }
};

class Teacher : public Person {
protected:
    string subject;
    int roomNumber;

public:
    Teacher(string n, int a, string sub, int room)
        : Person(n, a), subject(sub), roomNumber(room) {}

    void displayTeacher() {
        displayPerson();
        cout << "Teacher details" << endl;
        cout << "Subject: " << subject << endl;
        cout << "Room Number: " << roomNumber << endl;
    }
};

class GraduateStudent : public Student, public Teacher {
public:
    GraduateStudent(string name, int age, string id, int grade, string sub, int room)
        : Student(name, age, id, grade), Teacher(name, age, sub, room) {}

    void displayGraduateStudent() {
        cout << "Graduate Student Details:" << endl;
        displayStudent();
        displayTeacher();
    }
};

int main() {
    GraduateStudent gradStudent("Mahnoor Hussain", 24, "23K-0535", 2, "Mathematics", 101);
    gradStudent.displayGraduateStudent();
}
