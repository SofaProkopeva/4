#include <iostream>
using namespace std;

int main()
{
	double a, r;
	cout << "Enter a (0<a<360)" << endl;
	cin >> a;
	r = a * 3.14 / 180;
	cout << "a=" << r << " radians" << endl;
	return 0;
}


