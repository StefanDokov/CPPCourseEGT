
#include <iostream>
using namespace std;



void checkers(int array[10], int seat) {
    
    if (seat - 1 >= 0 && seat - 1 < 10 && array[seat - 1] == 0) {
        array[seat - 1] = 1;
    }
    else if (seat - 1 >= 0 && seat - 1 < 10 && array[seat - 1] == 1) {
        int starter = 0;
        cout << "Seat is taken!" << endl;
        while (array[starter] == 1) {
            starter++;
        }
        array[starter] = 1;
    }

   
}

int main()
{

    int airplane[10] = {};
    cout << sizeof(airplane) / sizeof(*airplane) << endl;
    bool isFull = false;
    while (!isFull) {

        bool isIt = true;
        for (int i = 0; i < 10; i++) {
           
            if (airplane[i] == 0) {
                isIt = false;
            }
   
        }
        if (isIt) {
            isFull = true;
            break;
        }

        int seat;
        cout << "Which seat you would want?" << endl;
        cin >> seat;
        checkers(airplane, seat);


    }
    
        if (isFull) {
            cout << "All seats are taken!" << endl;

        }
    
    
}
