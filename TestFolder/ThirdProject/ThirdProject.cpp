

#include <iostream>
using namespace std;


int main()
{

    int a;

    cin >> a;


    int*array = new int[a];

    int sum = 0;
    for (int i = 0; i < a; i++) {
        cin >> array[i];
    }

    for (int i = 0; i < a; i++) {
        if (array[i] % 2 != 0) {

        sum += array[i];
        }
    }

    cout << sum << endl;
}

