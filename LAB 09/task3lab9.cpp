#include<iostream>
using namespace std;

class Employee {
protected:
    string employeeID, employeeName;
public:
    Employee(string ID, string name) {
        employeeID = ID;
        employeeName = name;
    }
    
    virtual double calculatePay() const {
        return 0.0;
    }
    
    virtual void displayDetails() const {}
};

class FullTimeEmployee: public Employee {
private:
    int monthlySalary;
public:
    FullTimeEmployee(string Id, string name, int monthlySalary) 
        : Employee(Id, name), monthlySalary(monthlySalary) {}
    
    double calculatePay() const override {
        return monthlySalary;
    }

    void displayDetails() const override {
        cout << "Employee ID: " << employeeID << ", Name: " << employeeName << endl;
        cout << "Type: Full-time, Monthly Salary: " << monthlySalary << endl;
    }
};

class PartTimeEmployee: public Employee {
private:
    int hourlyWage;
    int hoursWorked;
public:
    PartTimeEmployee(string id, string name, int wage, int hours) 
        : Employee(id, name), hourlyWage(wage), hoursWorked(hours) {}

    double calculatePay() const override {
        return hourlyWage * hoursWorked;
    }

    void displayDetails() const override {
        cout << "Employee ID: " << employeeID << ", Name: " << employeeName << endl;
        cout << "Type: Part-time, Hourly Wage: " << hourlyWage << ", Hours Worked: " << hoursWorked << endl;
    }
};

int main() {
    FullTimeEmployee fullTimeEmployee("103", "Usman", 6000);
    PartTimeEmployee partTimeEmployee("104", "Sara", 18, 40);

    cout << "Displaying Details:" << endl;
    fullTimeEmployee.displayDetails();
    partTimeEmployee.displayDetails();
    
    cout << endl << "Calculating Pay:" << endl;
    cout << "Full-time Employee Pay: $" << fullTimeEmployee.calculatePay() << endl;
    cout << "Part-time Employee Pay: $" << partTimeEmployee.calculatePay() << endl;
    
    cout << endl << "Using base class pointer to calculate Full-time Employee Pay:" << endl;
    Employee* emp1 = &fullTimeEmployee;
    cout << "Full-time Employee Pay: $" << emp1->calculatePay() << endl;

    return 0;
}
