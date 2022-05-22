#include<iostream>
using namespace std;

int main() {
	int size = 1000;
	int n = size + 1;

	while (n > size) {
		cout << "The number is out of border.Enter the new number." << endl;
		cin >> n;
	}

	int* list = new int[n];

	int chois;
	cout << "1 or 2" << endl;
	cin >> chois;
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
			list[i] = rand() % Lborder + Rborder;
		}
		break;
	default:
		break;
	}
	
	for (int i = 0; i < n; i++) {
		cout << list[i] << " ";
	}

	cout << endl;

	int plus_count = 0;
	for (int i = 0; i < n; i++) {
		if (list[i] > 0) {
			plus_count++;
		}
	}
	cout << "The number of positive elements " << plus_count << endl;

	int last_nul = 1;
	for (int i = n; i > 0; i--) {
		if (list[i] == 0) {
			last_nul = i;
		}
	}

	if (last_nul != 1) {
		int sum = 0;
		for (int i = last_nul; i < n; i++) {
			sum = sum + list[i];
		}
		cout << "the sum is: " << sum << endl;;
	}

	return 0;
}