#include <iostream>
using namespace std;
int main()
{
	char x;
	cout << "enter a character"<<endl;
	cin >> x;
	if (x== 'a'||x== 'e'||x== 'i'||x== 'o'||x== 'u')
	{
		cout << "Vowels character" << endl;
	}
	else
	{
	 cout << "not vowels" << endl;	
	}
	return 0;
}
