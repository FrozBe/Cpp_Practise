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
	cout << " 1 or 2 ";
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
		cout << "Enter the borders." << endl;
		cin >> Rborder >> Lborder;
		for (int i = 0; i < n; i++) {
			list[i] = rand() % Rborder + Lborder;
		}
		break;
	default:
		break;
	}
	for (int i = 0; i < n; i++) {
		cout << list[i]<<" ";
	}
	cout << endl;

	int max = 0;
	for(int i=0;i<n;i++){
		if (list[i] > max) {
			max = i;
		}
	}
	cout << max << endl;

	int last_plus = -1;
	for (int i = n; i > 0; i--) {
		if (list[i] > 0) {
			last_plus = i;
			break;
		}
	}

	if (last_plus != -1) {
		int sum = 0;
		for (int i = 0; i < last_plus; i++) {
			sum = sum + list[i];
		}
		cout << sum << endl;
	}
	
	return 0;
}