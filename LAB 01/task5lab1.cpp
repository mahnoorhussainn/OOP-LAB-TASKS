#include<iostream>
#include<string>
using namespace std;

int main(){
    cout<<"NAME: MAHNOOR HUSSAIN "<<endl;
    cout<<"ROLL NO.:23K-0535"<<endl<<endl;

    cout<<"EVENT MANAGEMENT SYSTEM"<<endl<<endl;

    int no_of_events,check=0;
    cout<< "Enter number of events"<<endl;
    cin>>no_of_events;
    cin.ignore();
    
    string search;
    string * name = new string[no_of_events];
    string * date = new string[no_of_events];
    string * venue = new string[no_of_events];
    string * organizer = new string[no_of_events];
  
    for(int i=0;i<no_of_events;i++){
        cout<<"Enter details of event "<<i+1<<endl;
        
        cout<<"Event Name ";
        getline(cin,name[i]);

        cout<<"Date of the event ";
        getline(cin,date[i]);

        cout<<"Venue of the event ";
        getline(cin,venue[i]);

        cout<<"Organizer of the event ";
        getline(cin,organizer[i]);
    }
    cout<<endl;
    cout<<"DETAILS OF ALL THE EVENTS"<<endl<<endl;

    for (int i=0;i<no_of_events;i++){
        cout<<"Detail of event "<<i+1<<endl;
        cout<< "Event Name = "<<name[i]<<endl;
        cout<< "Date = "<<date[i]<<endl;
        cout<< "Venue = "<<venue[i]<<endl;
        cout<< "Organizer = "<<organizer[i]<<endl<<endl<<endl;
        
    }
    
    cout<<"Enter the date of the event you want to search"<<endl;
    getline(cin,search);

    for (int i=0; i<no_of_events;i++){

        if (date[i] == search) {
            cout << "Event Name =" << name[i]<<endl;
            cout << "Date = " << date[i]<<endl;
            cout << "Venue = " << venue[i]<<endl;
            cout << "Organizer = " << organizer[i]<<endl;
            check=1;
        }
    }
    if(check==0)
    cout<<"No event on this date";

    
    delete[] name;
    delete[] date;
    delete[] venue;
    delete[] organizer;
    }
