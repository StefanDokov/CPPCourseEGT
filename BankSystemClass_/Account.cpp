
#include <iostream>
#include "Account.h"

using namespace std;


Account::Account(int balance) {
    if (this->balance >= 0) {
        this->balance = balance;
    }
    else {
        this->balance = 0;
        cout << "Error: Initial balance is invalid. Setting balance to 0." << endl;
    }
}

void Account::credit(int amount) {
    this->balance += amount;
}

void Account::withdraw(int amount) {
    if (amount <= this->balance) {
        this->balance -= amount;
    }
    else {
        cout << "Debit amount exceeded account balance. Balance remains unchanged." << endl;
    }
}

int Account::getBalance() {
    return this->balance;
}




