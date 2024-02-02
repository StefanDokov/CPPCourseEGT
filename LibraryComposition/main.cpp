
#include <iostream>
#include "Book.h"
using namespace std;
#include <vector>
#include <string>
#include "Library.h"

void searchingE(string b, Library lib) {
    bool foundd = false;

    for (Book bok : lib.getAllBooks()) {
        string fullString = bok.getName();

        size_t found = fullString.find(b);   

        if (found != string::npos) {
            cout << "Book starting with " << b << " is " << bok.getName() << endl;
            foundd = true;
        }


    }

    if (!foundd) {
        cout << "No mathes found in our book list." << endl;
    }
}

int main()
{

    Library books = Library();

    Author a1("Ivan", "Ivanov", "RO");
    Author a2("Petar", "Pertov", "GR");


    Book b1("Nova", a1, "Romi", 1920);
    Book b2("Nova2", a2, "Classic", 1921);
    Book b3("Nova3", a1, "Fantasy", 1960);
    Book b4("Nova4", a2, "Romi", 1922);

    books.addBook(b1);
    books.addBook(b2);
    books.addBook(b3);
    books.addBook(b4);

    string search;
    cout << "Write a search engine:" << endl;
    cin >> search;
    
    
    searchingE(search, books);

}

