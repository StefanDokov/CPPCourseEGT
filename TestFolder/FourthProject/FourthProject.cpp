
#include <iostream>
using namespace std;

int main()
{
    int rows;
    int cols;

    cin >> rows >> cols;

   
    int array[rows][cols];

    for (int i = 0; i < rows;i++) {
        for (int k = 0; k < cols;k++) {
            cin >> array[i][k];

        }
    }

    int counter = 0;

    for (int i = 0; i < rows;i++) {
        for (int k = 0; k < cols;k++) {
            if (i % 2 == 0) {
                if (array[i][k] < 0) {
                    counter++;
                }
            }

        }
    }

    cout << counter << endl;

    return 0;
}

