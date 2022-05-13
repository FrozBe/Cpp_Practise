#include <iostream>
using namespace std;





int main() {
	const int size = 1000;
	int n = size+1;

	
	while (n > size) {
		cout << "This number is out of the border. Enter the new number: " << endl;
		cin >> n;
	}

	int* list = new int[n];
	cout << "1 or 2" << endl;
	int choise;
	cin >> choise;
	switch (choise) {
	case 1:
		for (int i = 0; i < n; i++) {
			cin >> list[i];
			
		}
		break;
	case 2:
		int Lborder,Rborder;
		cin >> Lborder >> Rborder;
		
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

	int res = 1 ;

	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			res = res * list[i];
		}
	}
	cout << "the result of multiply is " << res << endl;

	int first_nul = -1;
	int last_nul = -1;
	for (int i = 0; i < n; i++) {
		if (list[i] == 0) {
			first_nul = i;
			break;
		}
	}
	
	for (int i = n; i > 0; i--) {
		if (list[i] == 0) {
			last_nul = i;
			break;
		}
	}
	if (last_nul != -1 && first_nul != -1) {

		int sum = 0;
	
		for (int i = first_nul; i < last_nul; i++) {
			sum += list[ i];
		}
		cout << sum;
	}


	 
	

	return 0;
}
