#include "Book.h"
using namespace std;

Book::Book(string a, Author b, string c, int d) : author(b)
{
    this->setName(a);
    this->setGenre(c);
    this->setYear(d);

}

string Book::getName()
{
    return this->name;
}

void Book::setName(string a)
{
    this->name = a;
}

Author Book::getAuthor()
{
    return this->author;
}

int Book::getYear()
{
    return this->year;
}

void Book::setYear(int a)
{
    this->year = a;
}

string Book::getGenre()
{
    return this->genre;
}

void Book::setGenre(string a)
{
    string gen = a;
    const string genreStrings[] = { "Classic", "Child's Book", "Fantasy", "Biographic", "Romance" };

    while (true) {
        auto it = find(begin(genreStrings), end(genreStrings), gen);

        if (it != end(genreStrings)) {
            this->genre = gen;
            break;
        }
        else {
            cout << "This Genre is not present in allowed options. Pick one of -> Classic, Child's Book, Fantasy, Biographic, Romance" << endl;
            cin >> gen;
        }

    }


}






