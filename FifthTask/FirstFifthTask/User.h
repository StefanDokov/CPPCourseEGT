#pragma once
#include "Order.h"


class User {
public:
	User(string);
	string getUsername();
	void setUsername(string);
	vector<Order> getAllOrders();
	void setAllOrders(vector<Order>);
	void addOrder(Order);
	double getTotalOrdersCost();
	void setTotalOrdersCost();



private:
	string username;
	vector<Order> orders;
	double ordersCost;
};