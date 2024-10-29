#include <iostream>
#include<string>
using namespace std;

class Book {
private:
    string title, author, publisher;

public:
    Book(string t, string a, string p) {
        title = t;
        author = a;
        publisher = p;
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Publisher: " << publisher << endl;
    }
};

class FictionBook : public Book {
    string genre;
    string protagonist;

public:
    FictionBook(string t, string a, string p, string g, string pro)
        : Book(t, a, p), genre(g), protagonist(pro) {}

    void display() {
        Book::display();
        cout << "Genre: " << genre << endl;
        cout << "Protagonist: " << protagonist << endl;
    }
};

int main() {
    cout << "NAME: MAHNOOR HUSSAIN " << endl;
    cout << "ROLL NO.: 23K-0535" << endl;
    cout<<"BOOK DETAILS"<<endl;
    FictionBook book("Peer-e-Kamil", "Umera Ahmed", "Fiction House", "Spiritual", "Imama Hashim");
    book.display();

}
