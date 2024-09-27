#include <iostream>
#include <string>
using namespace std;

class Book {

    string name;
    string author;
    string isbn;
    int pagescount;
    int pagesread;
    int e=450;   //initialize e with 450

public:
  
Book(){

    pagescount=1000;
    pagesread=e;

}

  void setName(string bookname) {
        name = bookname;
    }

    void setAuthor(string bookauthor) {
        author = bookauthor;
    }

    void setISBN(string bookisbn) {
        isbn = bookisbn;
    }
    
    void showBookInfo(){

        cout << "Book Name: " << name << endl;
        cout << "Author: " << author << endl;
        cout << "ISBN: " << isbn << endl;
        cout << "Total Pages: " << pagescount << endl;
        cout << "Pages Read: " << pagesread << endl;
    }
};

  int main() {

    cout << "NAME: MAHNOOR HUSSAIN" << endl;
    cout << "ROLL NO.: 23K-0535" << endl << endl;

    
    Book b1;

    b1.setName("STARLIGHT");
    b1.setAuthor("ANNA GRACE");
    b1.setISBN("1245 6789");
    b1.showBookInfo();

}