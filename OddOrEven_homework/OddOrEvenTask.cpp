

#include <iostream>
using namespace std;

int main()
{
	int turns = 3;


	while (turns > 0) {
		int b;
		cout << "Write a number: " << endl;
		cin >> b;

		if (b % 2 == 0) {
			cout << "even" << endl;
		}
		else {
			cout << "odd" << endl;

		}


		turns--;
	}


}


