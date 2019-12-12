#include <iostream>
using namespace std;

int main()
{
	double a, b, x;
	cout << "Enter a,b. (a!=0)" << endl;
	cin >> a >> b;
	x = -b / a;
	cout << "x=" << x << endl;
	return 0;
}