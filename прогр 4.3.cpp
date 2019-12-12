#include <iostream>
using namespace std;

int main()
{
	double x, a, z1, z2, y;
	cout << "Enter weight. Enter the price for this weight." << endl;
	cin >> x >> a;
	cout << "Enter another weight.(y)" << endl;
	cin >> y;
	z1 = a / x;
	z2 = y * z1;
	cout << "Price per 1 kg = " << z1 << endl;
	cout << "Price per y kg = " << z2 << endl;
	return 0;
}

