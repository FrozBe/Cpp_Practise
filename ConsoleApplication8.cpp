#include <iostream>
#include <cmath>
using namespace std;



double Factorial(int x) {
	double res = 1;
	for(int i = x; i > 0; i--) {
		res *= i;
	}
	return res;
}

double cos_T(double x, int z) {
	double ans = 0;
	int k = 0;
	while (!(abs(ans - cos(x)) <= pow(10, -z))) {

		ans = ans + (pow(-1, k) * pow(x, 2 * k) / Factorial(2 * k));
		k++;
	}
	cout << "Iterations to final: " << k << endl;
	


	return ans;
}



int main() {
	
	double x;
	int k;
	cout << "Enter the number: ";
	cin >> x;
	cout << "Enter the precision: ";
	cin >> k;
	cout << endl << " Here is value of actual cos function: " << cos(x) << endl;
	cout << " Here is value of my cos function: " << cos_T(x, k);

	return 0;
}