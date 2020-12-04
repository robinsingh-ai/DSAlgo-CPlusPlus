// Kadane's Algorithm

#include <bits/stdc++.h>

using namespace std;
// kadane Algorithm for finding largest sum of a contigious subarrray
int kadanealgo(int a[], int n)
{

    int max = 0;
    int max_enginf_here = 0;

    for (int i = 0; i < n; i++)
    {
        max_enginf_here = max_enginf_here + a[i];

        if (max_enginf_here < 0)
        {
            max_enginf_here = 0;
        }

        else if (max_enginf_here > max)
        {

            max = max_enginf_here;
        }
    }

    cout << max;
    return 0;
}

// modified kadane algo for all negative numbers
int kadaneAlgoNegative(int a[], int n)
{

    int max = a[0];
    int max_enginf_here = a[0];

    for (int i = 0; i < n; i++)
    {
        max_enginf_here = max_element(a[i], max_enginf_here + a[i]);
        max = max_element(max, max_enginf_here);
    }

    cout << max;
    return 0;
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

    kadanealgo(a, n);
    kadaneAlgoNegative(a, n);

    return 0;
}