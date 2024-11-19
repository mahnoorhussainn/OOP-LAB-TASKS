#include <iostream>
#include<string>
using namespace std;

class Platform;

class Logo {
private:
    string logo;

public:
    Logo(string l) : logo(l) {}

    friend class Server;

    void display() const {
        cout << "Original Logo: " << logo << endl;
    }

    void setLogo(const string& newLogo) {
        logo = newLogo;
    }
};

class Platform {
private:
    string platformName;
    string founder;
    int startYear;
    Logo logo;

public:
    Platform(string name, string logoName, string f, int year) 
        : platformName(name), logo(logoName), founder(f), startYear(year) {}

    void displayPlatform() const {
        cout << "Platform: " << platformName << endl;
        cout << "Founder: " << founder << endl;
        cout << "Starting Year: " << startYear << endl;
        logo.display();
    }

    Logo& getLogo() {
        return logo;
    }
};

class Server {
public:
    void changeLogo(Platform& platform, const string& newLogo) {
        platform.getLogo().setLogo(newLogo);
    }
};

int main() {
    cout << "NAME: MAHNOOR HUSSAIN " << endl;
    cout << "ROLL NO.: 23K-0535" << endl << endl;
    
    Platform twitter("Twitter", "Blue Bird", "Jack Dorsey", 2006);  
    Server server;

    cout << "Original Twitter Logo:" << endl;
    twitter.displayPlatform();

    server.changeLogo(twitter, "Dogecoin");
    cout<<endl;

    cout << "Modified Twitter Logo:" << endl;
    twitter.displayPlatform();

}
