#include <iostream>
#include <fstream>
#include "nlohmann/json.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include "Person.h"
using namespace std;

using json = nlohmann::json;

int main() {
    ifstream ifs("people.json");
    json data;
    ifs >> data;

    vector<Person> people;
    // Accessing JSON data
    for (auto& p : data["people"]) {
        string name = p["name"];
        int age = p["age"];
        string gender = p["gender"];
        string occupation = p["occupation"];
        people.push_back(Person(name, age, gender, occupation));
    }
    json newData;
      newData["people"] = json::array();;
    for (auto& b : people) {
        json temp;
        b.print();
        temp = {
        {"name", b.name},
        {"age", b.age},
        {"gender", b.gender},
        {"occupation", b.occupation}
        };
        newData["people"].push_back(temp);
    }
    

    // Writing JSON to a file
    ofstream ofs("new_data.json");
    ofs << setw(4) << newData << endl;

    return 0;
}