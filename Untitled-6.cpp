#include <iostream>
using namespace std;
void addtwo(int  x1, int x2)
{
	x1 += 2;
	x2 += 2;
	cout << x1 << "-" << x2 << endl;
}


int main()
{
	int x1, x2;
	x1 = 5;
	x2 = 15;
	addtwo(x1 ++, x2++);
	addtwo(x1, x2);
	addtwo(++x1, ++x2);
}
