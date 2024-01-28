
#include <iostream>
using namespace std;
#include <stack>
#include <queue>

int main()
{

    stack<int> stacker;

    int n;
    cin >> n;


    for (int i = 0; i < n; i++) {
        int b;
        cin >> b;

        stacker.push(b);


    }


    while (!stacker.empty()) {
        int c;
        c = stacker.top();
        cout << c << " ";
        stacker.pop();
    }

    
 


    cout << endl;



}

