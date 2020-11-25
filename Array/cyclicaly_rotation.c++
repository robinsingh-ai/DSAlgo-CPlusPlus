// Implementation of Cyclically rotation of an array

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int cyclic_times;
    // How many times to rotate
    cin >> cyclic_times;

    while (cyclic_times != 0)
    {
        int last = a[n - 1];
        for (int j = n - 1; j > 0; j--)

        {
            a[j] = a[j - 1];
        }

        a[0] = last;
        cyclic_times--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}