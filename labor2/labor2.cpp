#include <iostream>
using namespace std;
void main()
{
	int x, y, z, g1, g2;
	float g3;
	cout << "Input the number:";
	cin >> x;
	cout << "Input the number:";
	cin >> y;
	cout << "Input the number:";
	cin >> z;
	g1 = x + z - y;
	g2 = y - x + z;
	g3 = x * y / z;
	cout << "x+z-y=" << g1 << endl;
	cout << "y-x+z=" << g2 << endl;
	cout << "x*y/z=" << g3 << endl;
}