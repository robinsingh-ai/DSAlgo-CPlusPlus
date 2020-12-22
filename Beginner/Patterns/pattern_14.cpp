/*Pattern 14 : full pyramid without space

Example:

    *
   ***
  *****
 *******
*********
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
                cout << " ";
            }
        }

        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }

        for (int k = 2; k <= i; k++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}