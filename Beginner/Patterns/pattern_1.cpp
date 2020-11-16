/*Pattern 1

Example:
****
****
****
****
****
*/
#include <iostream>

using namespace std;

int main()
{
    int row, colum;
    cout << "enter number of rows and column";
    cin >> row >> colum;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}