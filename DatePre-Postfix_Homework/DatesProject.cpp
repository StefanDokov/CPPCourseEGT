// Date class test program.
#include <iostream>
using namespace std;

#include "Date.h" // Date class definition

int main()
{
    Date d1; // defaults to January 1, 1900
    Date d2(27, 12,1992); // December 27, 1992
    Date d3(99, 0,8045); // invalid date
    Date d5;
    cout << "Enter a date in dd-mm-yyyy format: " << endl;
    cin >> d5;
    cout << "d1 is " << d1 << "\nd2 is " << d2 << "\nd3 is " << d3;
    cout << "\n\nd2 += 7 is " << (d2 += 7);

    d3.setDate(28,2,1992);
    cout << "\n\n  d3 is " << d3;
    cout << "\n++d3 is " << ++d3 << " (leap year allows 29th)";

    Date d4(13,7,2002);

    cout << "\n\nTesting the prefix increment operator:\n"
        << "  d4 is " << d4 << endl;
    cout << "++d4 is " << ++d4 << endl;
    cout << "  d4 is " << d4;

    cout << "\n\nTesting the postfix increment operator:\n"
        << "  d4 is " << d4 << endl;
    cout << "d4++ is " << d4++ << endl;
    cout << "  d4 is " << d4 << endl;
   

    cout << "\n\nTesting the prefix decr operator:\n"
        << "  d5 is " << d5 << endl;
    cout << "--d5 is " << --d5 << endl;
    cout << "  d5 is " << d5;


    cout << "\n\nTesting the postfix decr operator:\n"
        << "  d5 is " << d5 << endl;
    cout << "d5-- is " << d5-- << endl;
    cout << "  d5 is " << d5 << endl;

    return 0;
} // end main


