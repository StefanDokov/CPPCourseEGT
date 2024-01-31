
#include "Rectangle.h"
#include <iostream>
using namespace std;

int main()
{
    
    Rectangle rect1(2.0, 3.0);
    Rectangle rect2(1.0, 4.0);

    if (rect1 > rect2) {
        cout << "rect1 has a larger area than rect2." << endl;
    }
    else if (rect1 < rect2) {
        cout << "rect1 has a smaller area than rect2." << endl;
    }
    else if (rect1 == rect2) {
        cout << "rect1 and rect2 have the same area." << endl;
    }


    return 0;
}
