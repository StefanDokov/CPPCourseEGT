
#include <iostream>
using namespace std;
#include <list>

int main()
{
    int inp;
    list<int> lister;
    

    for (int i = 0; i < 5; i++) {
        cin >> inp;
        lister.push_back(inp);
    }

    list<int>::iterator it = next(lister.begin(), 4);

    if (it != lister.end()) {
        int value = *it;
        cout << "Value at position " << value << ": " << value << std::endl;
    }
    else {
        cout << "Position out of bounds." << std::endl;
    }





}

