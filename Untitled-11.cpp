#include <iostream>
using namespace std;
int main()
{
	char input, alphapet = 'A';
	cin >> input;
	for (int i = 1; i <= (input-'A'+1); i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << alphapet;
		}
		alphapet++;
		cout << endl;
	}
}
