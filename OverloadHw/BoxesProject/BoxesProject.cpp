
#include "Box.h"
#include <iostream>
using namespace std;

int main()
{
    Box box1(3.0, 4.0, 5.0);
    Box box2(6.0, 7.0, 8.0);

    Box box3 = box1 + box2;

    cout << "Box One -> " << box1 << endl;
    cout << "Box Two -> " << box2 << endl;
    cout << "Box One + Box Two  = Box Three -> " << box3 << endl;


    return 0;
}

