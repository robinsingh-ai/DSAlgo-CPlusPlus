/*Pattern 20 : Star Pattern without line removal using 2 loops

Example:

      *
    * * *
  * * * * *
* * * * * * *
* * * * * * *
  * * * * *
    * * *
      *

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
        for (int j = 0; j <= n; j++)
        {
            if (j < n - i)
            {
                cout << "  ";
            }
        }

        for (int k = 1; k <= (2 * i - 1); k++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    for (int i = n; i >= 1; i--)
    {
        for (int j = 0; j <= n; j++)
        {
            if (j < n - i)
            {
                cout << "  ";
            }
        }

        for (int k = 1; k <= (2 * i - 1); k++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}