#include <iostream>
using namespace std;
int main()
{
	int x, y, z, sum;
	cout << "enter value: " << endl;
	cin >> x >> y >> z;
	sum = x + y + z;
	switch (sum == 180)
	{
	case true:
	{
		cout << "valid" << endl;
		break;
	}
	default:
	{
		cout << "not valid" << endl;
		break;
	}
	}
}
