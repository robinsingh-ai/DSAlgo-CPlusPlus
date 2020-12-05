/*Pattern 8 : Butterfly pattern

Example:
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *


*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        int space = 2 * n - 2 * i;
        for (int k = 1; k <= space; k++)
        {
            cout << " ";
        }

        for (int l = 1; l <= i; l++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        int space = 2 * n - 2 * i;
        for (int k = 1; k <= space; k++)
        {
            cout << " ";
        }

        for (int l = 1; l <= i; l++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}