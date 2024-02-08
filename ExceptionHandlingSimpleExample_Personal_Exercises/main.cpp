

#include <iostream>
#include <stdexcept> 

using namespace std;

int main() {
    
    int num;
    while (true) {
        cout << "Enter an integer: ";

        try {
            cin >> num;

            if (cin.fail()) {
                cin.clear(); // Clear the failbit
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
                throw invalid_argument("Invalid input. Please enter an integer.");
            }

            cout << "You entered: " << num << endl;
            break;
        }
        catch (const invalid_argument& e) {
            cerr << "Exception caught: " << e.what() << endl;
        }
    }
    return 0;
}