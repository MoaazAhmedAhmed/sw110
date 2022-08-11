#include <iostream>
using namespace std;
int main()
{
	int x, z, y;
	cout << "enter three numbers";
	cin >> x >> z >> y;
	if (x > z && x > y)
		cout << "largest number" << x;
	if (z > x && z > y)
		cout << "largest number" << z;
	if (y > x&& y > z)
		cout << "largest number" << y;
	return 0;
}
