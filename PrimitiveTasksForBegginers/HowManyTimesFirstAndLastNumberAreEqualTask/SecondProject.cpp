

#include <iostream>
using namespace std;

int main()
{
    int counterr = 0;

    for (int i = 1000; i < 9999; i++) {
        int a = i % 10;
        int b = i / 1000;
        
        if (a == b)
        {
           counterr++;
        }
    }

    cout << counterr << endl;
}

