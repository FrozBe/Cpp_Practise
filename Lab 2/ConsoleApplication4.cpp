#include<iostream>
using namespace std;




int main() {
	const int size = 1000;
	int n = size + 1;


	while (n > size) {
		cout << "The number is out of border. Enter the new number" << endl;
		cin >> n;
	}

	int* list = new int[n];
	cout << "1 or 2" << endl;
	int chois;
	cin >> chois;
	switch (chois) {
	case 1:
		for (int i = 0; i < n; i++) {
			cin >> list[i];
		}
		break;
	case 2:
		int  Lborder, Rborder;
		cin >> Lborder >> Rborder;

		for (int i = 0; i < n; i++) {
			list[n] = rand() & Lborder + Rborder;
		}
		break;

	default:
		break;
	}

	for (int i = 0; i < n; i++) {
		cout << list[i] << " ";
	}

	cout << endl;
	



	int lust_nul = -1;
	for (int i = n; i > 0; i--) {
		if (list[i] == 0) {
			lust_nul = i;
			break;
		}
	}

	if (lust_nul != -1) {
	int sum = 0;
		for (int i = lust_nul; i < n; i++) {
			sum = sum + list[i];
		}
		cout << sum;
	}
	



	return 0;
}