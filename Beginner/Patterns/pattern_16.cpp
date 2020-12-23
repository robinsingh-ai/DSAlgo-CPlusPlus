/*Pattern 16 : Number Pattern with star

Example:
        1
      2 1 *
    3 2 1 * *
  4 3 2 1 * * *
5 4 3 2 1 * * * *

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
            cout << k << " ";
        }

        for (int k = 2; k <= i; k++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}