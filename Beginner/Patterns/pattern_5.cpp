/*Pattern 5 : Half Pyramid using numbers 

Example:
1
22
333
4444
55555
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
            cout << i;
        }
        cout << endl;
    }

    return 0;
}