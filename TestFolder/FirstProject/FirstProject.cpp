

#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    if (n % 5 == 0 && n % 3 == 0) {
        cout << "The number can be divided by 5 and by 3" << endl;
    }
    else {
        cout << "The number is NOT dividable by 5 or by 3" << endl;

    }
}

