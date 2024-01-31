#include "Member.h"

Member::Member(string a, int b, string c): name(a), age(b), memberID(c)
{
}

void Member::display()
{
	cout << "Name: " << this->name << ", Age: " << this->age << ", MemberID: " << this->memberID << endl;

}

Book* Member::borrowBook(Book* book)
{
	return book;
}
