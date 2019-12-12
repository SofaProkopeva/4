#include <iostream>
using namespace std;

int main()
{
	double v1, v2, s, t;
	cout << "Enter v1, v2, S, T" << endl;
	cin >> v1 >> v2 >> s >> t;
	s += (v1 + v2) * t;
	cout << "Distance between cars = " << s << "km" << endl;
	return 0;
}
