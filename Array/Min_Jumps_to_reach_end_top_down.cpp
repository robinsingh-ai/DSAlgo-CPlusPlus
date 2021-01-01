
// Mimimum number of jumps to reach end of the array
// Top Down Approcah

#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int MinJumps(int i, int a[], int n)
{

    if (i >= n)
        return INT_MAX;
    if (i == n - 1)
        return 0;

    int steps = a[i];
    int minValue = INT_MAX;
    for (int j = 1; j <= steps; j++)
    {
        minValue = min(minValue, MinJumps(i + j, a, n));
    }

    return minValue + 1;
}

int main()
{

    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int jumps = MinJumps(0, a, n);
    cout << jumps;

    return 0;
}
