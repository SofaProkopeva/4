#include <iostream>
using namespace std;

int main()
{
	double a, d;
	cout << "Enter a (0<a<6.28)" << endl;
	cin >> a;
	d = a * 180 / 3.14;
	cout << "a=" << d << " degrees" << endl;
	return 0;
}
