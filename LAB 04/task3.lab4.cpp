#include <iostream>
#include <string>
using namespace std;

class WeekDays {
private:
    string Days[7];  
    int CurrentDay; 

public:

    WeekDays() {
        Days[0] = "Sunday";
        Days[1] = "Monday";
        Days[2] = "Tuesday";
        Days[3] = "Wednesday";
        Days[4] = "Thursday";
        Days[5] = "Friday";
        Days[6] = "Saturday";
        CurrentDay = 0; 
    }

    WeekDays(int day) {
        Days[0] = "Sunday";
        Days[1] = "Monday";
        Days[2] = "Tuesday";
        Days[3] = "Wednesday";
        Days[4] = "Thursday";
        Days[5] = "Friday";
        Days[6] = "Saturday";
        CurrentDay = day % 7;
    }

    string getCurrentDay(){
        return Days[CurrentDay];
    }

 
    string getNextDay(){
        return Days[(CurrentDay + 1) % 7]; 
    }

  
    string getPreviousDay(){
        return Days[(CurrentDay + 6) % 7];
    }

    string getNthDay(int nthday){
        return Days[(CurrentDay + nthday) % 7]; 
    }
};

int main() {
    
    cout << "NAME: MAHNOOR HUSSAIN" << endl;
    cout << "ROLL NO.: 23K-0535" << endl << endl;
   
    WeekDays week1;
    cout << "Current Day: " << week1.getCurrentDay() << endl;
    cout << "Next Day: " << week1.getNextDay() << endl;
    cout << "Previous Day: " << week1.getPreviousDay() << endl;
    cout << "5th Day from Today: " << week1.getNthDay(5) <<endl;
    cout<<"------------------------------"<<endl<<endl;

    WeekDays week2(6);  
    cout << "Current Day: " << week2.getCurrentDay() << endl;
    cout << "Next Day: " << week2.getNextDay() << endl;
    cout << "Previous Day: " << week2.getPreviousDay() << endl;
    cout << "4th Day from Today: " << week2.getNthDay(4) << endl;


}