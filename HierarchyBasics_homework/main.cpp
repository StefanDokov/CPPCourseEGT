

#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
    Animal(const string& name) : name(name) {}

    virtual void doStuff() const {
        cout << "Every animal is doing what they do best!" << endl;
    }

protected:
    string name;
};

class Dog : public Animal {
public:
    Dog(const string& name) : Animal(name) {}

    void doStuff() const override {
        cout << "Dog named " << name << " is barking." << endl;
    }
};

class Cat : public Animal {
public:
    Cat(const string& name) : Animal(name) {}

    void doStuff() const override {
        cout << "Cat named " << name << " is meowing." << endl;
    }
};

void justDoIt(Animal *animality) {
    animality->doStuff();
}

int main() {
    Animal baseAnimal("Basic Animal");
    Dog myDog("Sharo");
    Cat myCat("Kitty");

    Animal* ptrAnimal = &baseAnimal;
    Animal* ptrDog = &myDog;
    Animal* ptrCat = &myCat;

    justDoIt(ptrAnimal);
    justDoIt(ptrDog);
    justDoIt(ptrCat);

    /*ptrAnimal->doStuff();
    ptrDog->doStuff();
    ptrCat->doStuff();*/

    return 0;
}
