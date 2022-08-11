#include <iostream>
using namespace std;
int main()
{
	int x;
	cout << "enter a number :";
	cin >> x;
	if (x == 0)
		cout << "zero"<<endl;
	if (x > 0)
		cout << "positive"<<endl;
	if (x < 0)
		cout << "negative"<<endl;
	return 0;
}
