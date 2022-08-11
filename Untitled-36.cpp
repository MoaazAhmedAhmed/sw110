#include <iostream>
using namespace std;
int main()
{
	int x,y;
	cout << "enter hours and minutes :" << endl;
	cin >> x >> y;
	if (x >= 12 && x <= 23)
	{
		cout << "PM" << endl;
	}
	else if(x >= 1 && x <= 11)
		cout << "AM" << endl;
}
