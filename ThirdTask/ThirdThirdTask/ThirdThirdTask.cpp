

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

	int first = myList.front();
	myList.pop_front();
	list<int> maxer;
	list<int>curre;
	maxer.push_back(first);
	curre.push_back(first);

	int curN = 1;
	int best = 0;
	int last = 0;
	while (myList.size() > 0) {
		int curr = myList.front();
		curN++;
		if (curr == first) {
			curre.push_back(curr);
			if (curre.size() > maxer.size()) {
				maxer = curre;
				last = curN;
				best = curN - maxer.size() + 1;
			}
			
		} 
		else {
			first = curr;
			curre.clear();
			curre.push_back(curr);
			
		}

		myList.pop_front();
	}
	
	cout << "The most repeated number is -> " << maxer.front() << endl;
	cout << "It is repeated -> " << maxer.size() << " times." << endl;
	cout << "The subsequesnce starts at -> " << best << endl;
	cout << "The subsequesnce end at -> " << last << endl;
	



}
