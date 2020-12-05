//Minimize the maximum difference between heights

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int minDiff(int a[], int n, int k)
{

    sort(a, a + n);
    int ans = (a[n - 1] - a[0]);
    int small = a[0] + k;
    int bigg = a[n - 1] - k;
    if (small > bigg)
    {
        swap(small, bigg);
    }

    for (int i = 1; i < n - 1; i++)
    {

        int sec_small = a[i] - k;
        int sec_bigg = a[i] + k;
        if (sec_small >= small || sec_bigg <= bigg)
        {
            continue;
        }

        else if (bigg - sec_small <= sec_bigg - small)
        {
            small = sec_small;
        }

        else
        {
            bigg = sec_bigg;
        }
    }

    if (ans <= bigg - small)
    {
        return ans;
    }
    else
    {
        return bigg - small;
    }
}

int main()
{
    int n, k, d;
    cin >> n;
    cin >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    d = minDiff(a, n, k);
    cout << d;

    return 0;
}