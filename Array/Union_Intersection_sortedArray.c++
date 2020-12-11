// Naive Method

#include <bits/stdc++.h>

using namespace std;

int intersection(int a[], int b[], int n, int m)
{

    cout << "\n\nIntersection Of Two Sorted Array \n";

    cout << "\nFirst  Approach  :\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                cout << a[i] << " ";
            }
        }
    }

    return 0;
}

int intersection2(int a[], int b[], int n, int m)
{

    // Intersection Second Approcah using two pointer

    int n1 = 0;
    int n2 = 0;

    cout << "\nSecond Approach  :\n";
    while (n1 < n && n2 < m)
    {
        if (a[n1] == b[n2])
        {
            cout << a[n1] << " ";
            n1++;
            n2++;
        }

        else if (a[n1] > b[n2])
        {
            n2++;
        }

        else
        {
            n1++;
        }
    }

    return 0;
}

int union_array(int a[], int b[], int n, int m)

{

    cout << "\n\nUnion Of Two Sorted Array\n";
    int i = 0;
    int j = 0;

    while (i < n && j < m)

    {
        if (a[i] < b[j])
        {
            cout << a[i] << " ";
            i++;
        }

        else if (a[i] > b[j])
        {
            cout << b[j] << " ";
            j++;
        }

        else
        {
            cout << b[j] << " ";
            i++;
            j++;
        }
    }

    while (i < n)
    {
        cout << a[i++] << " ";
    }

    while (j < m)
    {
        cout << b[j++] << " ";
    }

    return 0;
}

int main()
{

    int n, m;
    cin >> n >> m;

    int a[n];
    int b[m];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    intersection(a, b, n, m);
    intersection2(a, b, n, m);
    union_array(a, b, n, m);

    return 0;
}