// C++ program to print boundary element  
// of matrix. 
#include <iostream> 
using namespace std;

const int MAX = 100;

void printBoundary(int a[][MAX], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 ||
                i == n - 1 || j == n - 1)
                cout << a[i][j] << " ";
            else
                cout << " "
                << " ";
        }
        cout << endl;
    }
}

// Driver code 
int main()
{
    int a[4][MAX] = { {1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {1, 2, 3, 4},
                     {5, 6, 7, 8} };
    printBoundary(a, 4, 4);
    return 0;
}

//Output:
//
//1 2 3 4
//5     8
//1     4
//5 6 7 8



//xxxxxxxxxxxxxxxxxxxxx Finding sum of boundary elements

// C++ program to find sum of boundary elements 
// of matrix. 
#include <iostream> 
using namespace std;

const int MAX = 100;

int getBoundarySum(int a[][MAX],
    int m, int n)
{
    long long int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0)
                sum += a[i][j];
            else if (i == m - 1)
                sum += a[i][j];
            else if (j == 0)
                sum += a[i][j];
            else if (j == n - 1)
                sum += a[i][j];
        }
    }
    return sum;
}

// Driver code 
int main()
{
    int a[][MAX] = { {1, 2, 3, 4},
                    {5, 6, 7, 8},
                    {1, 2, 3, 4},
                    {5, 6, 7, 8} };
    long long int sum = getBoundarySum(a, 4, 4);
    cout << "Sum of boundary elements is " <<
        sum;
    return 0;
}

//Output
//Sum of boundary elements is 54