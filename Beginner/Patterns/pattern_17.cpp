/*Pattern 17 : Star Pattern

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

        for (int k = i; k >= 1; k--)
        {
            cout << "* ";
        }

        for (int k = 2; k <= i; k++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    /*Same as above but in this we have changed the iterator values from 1 to n and we are also decrementing the values of the iterator to get and inverted pyrmid*/

    for (int i = n; i >= 1; i--)
    /*-----------Main Line Above-------------*/
    {
        for (int j = 0; j <= n; j++)
        {
            if (j < n - i)
            {
                cout << "  ";
            }
        }

        for (int k = i; k >= 1; k--)
        {
            cout << "* ";
        }

        for (int k = 2; k <= i; k++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}