#include<iostream>
using namespace std;

int main() {

	double x1, x2;
	cout << "Enter x1 and x2 in gap: ";
	cin >> x1 >> x2;

	double w1 = 0.6;
	double w2 = 0.4;
	double b = -0.5;

	double z = x1 * w1 + x2 * w2 + b;
	int y;
	if (z >= 0)
		y = 1;
	else
		y = 0;
	cout << "z = " << z << endl;
	cout << "y = " << y << endl;
	return 0;
}