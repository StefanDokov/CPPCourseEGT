

#include <iostream>
using namespace std;
#include <list>

int main()
{


	int inputer;
	list<int> myList;
	cin >> inputer;
	while (inputer != 0) {

		myList.push_back(inputer);
		cin >> inputer;
	}
	int sum = 0;
	for (const auto& value : myList) {
		sum += value;
		cout << value << " ";
	}
	cout << endl;
	cout << "Sum is " << sum << endl;






}

