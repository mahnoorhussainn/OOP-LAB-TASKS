#include<iostream>
#include<string>
using namespace std;

struct book {
    string title;
    string author;
    int year;
    string genre;
};

book addBook();
void modifyBook(book &library);
void displayBooks(const book library[], int count);
void searchingBook(const book library[], int count, const string &search);

int main() {
    cout << "NAME: MAHNOOR HUSSAIN " << endl;
    cout << "ROLL NO.: 23K-0535" << endl << endl;

    book library[50];
    int bookcount = 0,choice = 0; 

    do {
        cout << "Library's Book Inventory " <<endl;
        cout << "1. Add new books" <<endl <<"2. Modify existing book" <<endl << "3. Display all books" <<endl<<"4. Search for a book by title or author" <<endl<< "5. Exit" <<endl;
        cout << "Enter your choice ";
        cin >> choice;

        switch (choice){

        case 1: {
            int add_books;
            cout << "How many books would you like to add? ";
            cin >> add_books;

            for (int i = 0; i < add_books && bookcount < 50; i++){
                library[bookcount] = addBook();
                bookcount=bookcount+1;
            }
            break;
        }

        case 2:{
            int book_num;
            cout << "Enter the number of the book you want to modify ";
            cin >> book_num;

            if (book_num > 0 && book_num <= bookcount) 
                modifyBook(library[book_num - 1]); 
            else 
                cout << "No book found" << endl;
            
            break;
        }

        case 3:{
            displayBooks(library, bookcount);
            break;
        }

        case 4:{
            string title_author;
            cout << "Enter title or author to search ";
            cin.ignore();  
            getline(cin, title_author);
            searchingBook(library, bookcount, title_author);
            break;
        }
        
        case 5:{
            cout << "Exiting Inventory" << endl;
            break;
        }

        default:
            cout << "Invalid choice! Please try again." << endl;
        }

    } 
    while (choice != 5);

}

book addBook() {
    book newbook; 
    cout << "Enter title ";
    cin.ignore();  
    getline(cin, newbook.title);
    cout << "Enter author ";
    getline(cin, newbook.author);
    cout << "Enter year ";
    cin >> newbook.year;
    cout << "Enter genre ";
    cin.ignore();  
    getline(cin, newbook.genre);
    cout<<endl<<endl;
    return newbook;
}

void modifyBook(book &library) {
    cout << "Enter new title: ";
    cin.ignore();  
    getline(cin, library.title);
    cout << "Enter new author: ";
    getline(cin, library.author);
    cout << "Enter new year: ";
    cin >> library.year;
    cout << "Enter new genre: ";
    cin.ignore(); 
    getline(cin, library.genre);
}

void displayBooks(const book library[], int count) {
    if (count == 0) {
        cout << "No books in the library." << endl;
    } else {
        for (int i = 0; i < count; i++) {
            cout << "Book " << i + 1 << ":" << endl;
            cout << "Title: " << library[i].title << endl;
            cout << "Author: " << library[i].author << endl;
            cout << "Year: " << library[i].year << endl;
            cout << "Genre: " << library[i].genre << endl<<endl<<endl;

        }
    }
}

void searchingBook(const book library[], int count, const string &search) {
    int found = 0;  
    for (int i = 0; i < count; i++) {
        if (library[i].title == search || library[i].author == search) {
            cout << "Title: " << library[i].title << endl;
            cout << "Author: " << library[i].author << endl;
            cout << "Year: " << library[i].year << endl;
            cout << "Genre: " << library[i].genre << endl;
            found = 1;
        }
    }
    if (found==0) 
        cout << "No book found with that title or author." << endl;

}



