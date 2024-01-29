

#include <iostream>
using namespace std;
#include <cmath>

double calculateCost(double timers) {
	double result;
	if (timers <= 3) {
		result = 2;
	}
	else {
		result = 2 + (ceil(timers - 3) * 0.5);

	}
	if (result > 10) {
		result = 10;
	}
	return result;
}


int main()
{ 


	for (int i = 0; i < 3; i++) {
		double timer = 0;
		cin >> timer;

		double res = calculateCost(timer);

		cout << "Cost - driver " << i + 1 << " is $" << res << endl;

	}
	

	


}


