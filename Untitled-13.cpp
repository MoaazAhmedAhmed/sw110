#include <iostream>
using namespace std;
int main()
{
    int space, rows;
    cin >> rows;
    for (int i = 1, x = 0; i <= rows; ++i, x = 0)
    {
        for (space = 1; space <= rows - i; ++space)
        {
            cout << " ";
        }
        while (x != 2 * i -1)
        {
            cout << "*";
            ++x;
        }
        cout << endl;
    }
}
