#include <iostream>

using namespace std;

int main()
{
    int n;
    int i;
    cin >> n;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Non Prime Number" << endl;
            break;
        }
    }

    if (i == n)
    {

        cout << "Prime Number" << endl;
    }

    return 0;
}