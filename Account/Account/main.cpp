// Account.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Account.cpp"
using namespace std;

int main()
{
    Account account1(1000);
    Account account2(-500);

    // Test member functions
    cout << "Initial balance of account1: " << account1.getBalance() << endl;
    cout << "Initial balance of account2: " << account2.getBalance() << endl;

    account1.credit(500);
    account2.withdraw(200);

    cout << "Balance of account1 after crediting 500: " << account1.getBalance() << endl;
    cout << "Balance of account2 after debiting 200: " << account2.getBalance() << endl;

    account1.withdraw(1500);
    account2.credit(1000);

    cout << "Balance of account1 after attempting to debit 1500: " << account1.getBalance() << endl;
    cout << "Balance of account2 after crediting 1000: " << account2.getBalance() << endl;
    
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
