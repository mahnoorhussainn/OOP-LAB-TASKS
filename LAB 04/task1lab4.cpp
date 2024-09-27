#include <iostream>
#include <string>
using namespace std;

class Book {

    string name;
    string author;
    string isbn;
    int pagescount;
    int pagesread;

public:
  
  Book(){
    name="user";
    author="anonymous";
    isbn="0000 0000";
    pagescount=0;
    pagesread=0;

  }

  Book(string bookname, string bookauthor, string bookisbn, int countpgs,int readpgs){
    name=bookname;
    author=bookauthor;
    isbn=bookisbn;
    pagescount=countpgs;
    pagesread=readpgs;

  }

  void checkpages(int pages_read){
    pagesread=pagesread+pages_read;

    if(pagescount==pagesread)
        cout<<"YOU HAVE FINISHED THE BOOK"<<endl;

    else
        cout<<"BOOK IS NOT COMPLETED YET! Please read "<<pagescount-pagesread << " pages to complete the book" <<endl;
    
  }

};

int main() {

    cout << "NAME: MAHNOOR HUSSAIN" << endl;
    cout << "ROLL NO.: 23K-0535" << endl << endl;

    Book b1; //call default constructor
    Book b2("STARLIGHT","ANNA GRACE","1245 6789",1200,400);
    
    b2.checkpages(200);
    b2.checkpages(150);
    b2.checkpages(350);
    b2.checkpages(90);
    b2.checkpages(10);
    

}
