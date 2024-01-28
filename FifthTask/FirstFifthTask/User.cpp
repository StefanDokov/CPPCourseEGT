#include "User.h"
#include "Order.h"

User::User(string a)
{
    this->setUsername(a);
}

void User::setUsername(string a)
{
    this->username = a;
}

vector<Order> User::getAllOrders()
{
    return this->orders;
}

void User::setAllOrders(vector<Order> a)
{
    this->orders = a;
}

void User::addOrder(Order a)
{
    this->orders.push_back(a);
    this->setTotalOrdersCost();
}

double User::getTotalOrdersCost()
{
    return this->ordersCost;
}

void User::setTotalOrdersCost()
{
    double result = 0;
    for (auto& order : this->orders) {
        result += order.getTotalCost();
    }
    this->ordersCost = result;
}
