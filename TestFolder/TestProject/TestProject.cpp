// TestProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    const int super = 5;
    int arr2[super][super];
    int*arr = new int [super];

    for (int i = 0; i < 5;i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 5;i++) {
        cout << arr[i] << " level" << endl;
    }
}

