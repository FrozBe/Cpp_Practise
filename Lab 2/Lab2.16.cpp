#include <iostream>
using namespace std;

int main() {
	int size = 1000;
	int n = size + 1;

	while (n > size) {
		cout << "The number is out of border. Enter the new number" << endl;
		cin >> n;
	}

	int* list = new int[n];

	int chois;
	cout << "1 or 2" << endl;
	cin >> chois;
	cout << endl;
	switch (chois) {
	case 1:
		for (int i = 0; i < n; i++) {
			cin >> list[i];
		}
		break;
	case 2:
		int Rborder, Lborder;
		cout << "Enter the borders" << endl;
		cin >> Rborder >> Lborder;
		for (int i = 0; i < n; i++) {
			list[i] = rand() & Lborder + Rborder;
		}
		break;
	default:
		break;
	}
	for (int i = 0; i < n; i++) {
		cout << list[i] << " ";
	}
	
	cout << endl;

	int mult = 1;
	for (int i = 0; i < n; i++) {
		if (list[i] > 0) {
			mult *= list[i];
		}
	}
	cout << "The result of multiplication is: " << mult << endl;

	int min = 1;
	for (int i = 0; i < n; i++) {
		if (list[i] < min) {
			min = i;
		}
	}

	int sum = 0;
	for (int i = 0; i < min; i++) {
		sum += list[i];
	}
	cout << "The sum is: " << sum;

	return 0;
}


   