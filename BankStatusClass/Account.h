#pragma once


class Account {

public:
	Account(int);
	void credit(int);
	void withdraw(int);
	int getBalance();
private:
	unsigned int balance;


};