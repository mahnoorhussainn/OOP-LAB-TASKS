#include <iostream>
#include <string>
using namespace std;

class Calendar {
private:
    static const int TOTAL_MONTHS = 12;      
    static const int TOTAL_DAYS = 31;         
    string tasks[TOTAL_MONTHS][TOTAL_DAYS];   
    int currentYear;                   

public:
      Calendar(int year) : currentYear(year) {
        for (int month = 0; month < TOTAL_MONTHS; ++month) {
            for (int day = 0; day < TOTAL_DAYS; ++day) {
                tasks[month][day] = "";  // Initialize all task entries to empty
            }
        }
    }

    void addTask(int month, int day, const string& taskDetails) {
        if (month < 1 || month > TOTAL_MONTHS || day < 1 || day > TOTAL_DAYS) {
            cout << "Invalid month or day." << endl;
            return;
        }
        tasks[month - 1][day - 1] = taskDetails;
    }


    void removeTask(int month, int day) {
        if (month < 1 || month > TOTAL_MONTHS || day < 1 || day > TOTAL_DAYS) {
            cout << "Invalid month or day." << endl;
            return;
        }
        tasks[month - 1][day - 1] = "";  
    }

  
    string getTask(int month, int day) const {
        if (month < 1 || month > TOTAL_MONTHS || day < 1 || day > TOTAL_DAYS) {
            return "Invalid month or day.";
        }
        return tasks[month - 1][day - 1];
    }
};

int main() {

    cout << "NAME: MAHNOOR HUSSAIN" << endl;
    cout << "ROLL NO.: 23K-0535" << endl << endl;
 
    Calendar calendar(2025);
    cout<<"IMPORTANT DATES OF CALENDER 2025"<<endl;

    
    calendar.addTask(11, 5, "Mahnoor's Birthday");
    calendar.addTask(12, 26, "Wedding");
    calendar.addTask(5, 10, "Business Meeting");
    calendar.addTask(6, 21, "Flight to Chicago");
    calendar.addTask(2, 25, "Assignment Deadline");


    for (int month = 1; month <= 12;month++) {
        for (int day = 1; day <= 31;day++) {
            string task = calendar.getTask(month, day);
            if (!task.empty()) {
                cout << "Month " << month << ", Day " << day << ": " << task << endl;
            }
        }
    }

    
    calendar.removeTask(5, 10);  

    cout << "\nDETAILS!!!  After task removal:"<< endl;
    for (int month = 1; month <= 12; month++) {
        for (int day = 1; day <= 31;day++) {
            string task = calendar.getTask(month, day);
            if (!task.empty()) {
                cout << "Month " << month << ", Day " << day << ": " << task << endl;
            }
        }
    }

  
}

