#include <iostream>
#include<string>
using namespace std;

class right_fraction {
private:
	int num;
	int den;
public:
	int GetNum() {
		return num;
	}

	void SetNum(int valueNum) {
		num = valueNum;
	}

	int GetDen() {
		return den;
	}

	void SetDen(int valueDen) {
		den = valueDen;
	}

	void Print() {
		cout << "Num = "<<num << " Den = " << den << endl;
	}

	int Sum() {
		int sum;
		sum = num + den;
		return sum;
	}

	int Mult() {
		int mult;
		mult = num * den;
		return mult;
	}

	double Div() {
		int div;
		div = num / den;
		return div;
	}

};

int main() {
	right_fraction fraction;
	
	fraction.GetNum();
	fraction.SetNum(4);
	fraction.GetDen();
	fraction.SetDen(10);
	fraction.Print();
	fraction.Sum();
	fraction.Mult();
	fraction.Div();
	cout << fraction.Sum() << "\t" << fraction.Mult() << "\t" << fraction.Div() << endl;

	return 0;
}