/*Pattern 4 : half pyramid after 180 rotation

Example:
    *
   **
  ***
 ****
*****
*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows";
    cin >> n;

    for (int i = 0; i < n + 1; i++)

    {
        for (int j = 0; j < n; j++)
        {
            if (j < n - i)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}