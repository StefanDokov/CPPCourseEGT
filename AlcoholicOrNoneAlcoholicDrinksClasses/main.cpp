
#include <iostream>
#include "Drinks.h"
#include "Order.h"
#include "User.h"
#include "Alcoholic.h"
#include "NoAlcoholic.h"
#include <vector>

void findHighestPaidOrder(vector<User> a) {
    double max = -1;

    for (auto& user : a) {

        if (user.getTotalOrdersCost() > max) {
            max = user.getTotalOrdersCost();
        }
    }

    for (auto& usero : a) {

        if (usero.getTotalOrdersCost() == max) {
            cout << "User -> " << usero.getUsername() << " paid " << usero.getTotalOrdersCost() << " and is best client." << endl;
        }
    }


}

void findDiffDrinks(vector<Drinks*> b) {
    int alc = 0;
    int noAlc = 0;

    for (int i = 0; i < b.size(); i++) {

        Alcoholic* ptr = dynamic_cast<Alcoholic *>(b.at(i));

        if (ptr != 0) {
            alc++;
        }
        else {
            noAlc++;
        }
    }

    cout << "Alcoholic bevarages -> " << alc << ", Non alcoholic bevarages -> " << noAlc << endl;

}


void SearchByType(vector<User> a, string b) {

    for (auto& user : a) {

        vector<Order> ords = user.getAllOrders();

        for (auto& ord : ords) {
            vector<Drinks*> drks = ord.getAllDrinks();

            for (auto& drk : drks) {
                if (drk->getType() == b) {
                    cout << "User -> " << user.getUsername() << " make an order with " << b << " type bevarage." << endl;
                    continue;
                }

            }



        }



    }




}


int main()
{
    
    Alcoholic *d1 = new Alcoholic("Neskafe", 0.8, 5, "wine", 0.5, 5);
    Alcoholic *d2 = new Alcoholic("Neskafe", 0.8, 5, "wine", 0.5, 5);
    NoAlcoholic *d3 = new NoAlcoholic("Tea", 0.2, 4, "water", 1, 0.5);
    NoAlcoholic *d4 = new NoAlcoholic("TeaER", 0.2, 4, "wine", 1, 2);
    NoAlcoholic *d5 = new NoAlcoholic("TeaER", 0.2, 4, "wine", 1, 2);

    vector<Drinks*> ddrrkks;
    ddrrkks.push_back(d1);
    ddrrkks.push_back(d2);
    ddrrkks.push_back(d3);
    ddrrkks.push_back(d4);
    ddrrkks.push_back(d5);
    
    Order o1("12.01.2024");
    Order o2("11.02.2024");
    Order o3("15.02.2024");
    
    o1.addDrinks(d1);
    o1.addDrinks(d2);
    o1.addDrinks(d4);

    o2.addDrinks(d3);

    o3.addDrinks(d2);

    User u1("Ivan");
    User u2("Dragan");
    User u3("Petar");

    u2.addOrder(o1);
    u2.addOrder(o3);

    u1.addOrder(o2);

    u3.addOrder(o1);
    u3.addOrder(o3);

    vector<User> useri;
    useri.push_back(u1);
    useri.push_back(u2);
    useri.push_back(u3);

    findHighestPaidOrder(useri);
    findDiffDrinks(ddrrkks);
    SearchByType(useri, "water");

}

