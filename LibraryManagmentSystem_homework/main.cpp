

#include <iostream>
#include "Book.h"
#include "Member.h"
using namespace std;

int main()
{

	Book b1("HP", "JKRowling", "5000");
	Book b2("FlyOnTheWall", "Underhill", "7000");

	Member m1("Ivan", 26, "GoodReader");
	Member m2("Petar", 46, "BadReader");

	Book* bkPtr1 = &b1;
	Book* bkPtr2 = &b2;

	Member* mbPtr1 = &m1;
	Member* mbPtr2 = &m2;

	Book* books[2];
	Member* members[2];

	books[0] = bkPtr1;
	books[1] = bkPtr2;

	
	members[0] = mbPtr1;
	members[1] = mbPtr2;


	for (auto& mbr : members) {
		mbr->display();
	}
	for (auto& bk : books) {
		bk->display();
	}

	mbPtr1->borrowBook(bkPtr2)->display();
	mbPtr2->borrowBook(bkPtr1)->display();

}

