#include <iostream>
#include <cmath>
using namespace std;

double Factorial(int x) {
	double res = 1;
	for(int i = x; i > 0; i--) {
		res = res * i;
	}
	return res;
}

double sin_T(double x, int z) {
	double ans = 0;
	int k = 0 ;
	while(abs(ans - sin(x) >= pow(10, -z))) {
		ans = ans + (pow(-1, k) * pow(x, 2 * k + 1) / Factorial(2 * k + 1));
		k++;
	}
	//while(!(abs(ans - cos(x)) <= pow(10,-z)
	cout << "the number of iterations is: " << k << endl;
	return ans;
}


int main() {
	double x;
	int k;
	cout << "Enter the number ";
	cin >> x;
	cout << "Enter the degree ";
	cin >> k;

	cout <<endl<< "The real sin is: " << sin(x)<<endl;
	cout << "My sinus is:  " << sin_T(x,k);


	return 0;
}