#include <iostream>
using namespace std;

int main()
{
	double a1, a2, b1, b2, c1, c2, x, y;
	cout << "Enter A1, B1, C1, A2, B2, C2" << endl;
	cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
	x = (c1 - b1 * c2 / b2) / (a1 - b1 * a2 / b2);
	y = (c2 - a2 * x) / b2;
	cout << "x=" << x << " , y=" << y << endl;
	return 0;
}
