// Union And Intersection of two unsorted array

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int union_app1(int a[], int b[], int n, int m)
{

    cout << "\nUnion Of Unsorted Array Approach 1 : \n\n";
    int flag;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    for (int j = 0; j < m; j++)
    {
        flag = 0;

        for (int i = 0; i < n; i++)
        {
            if (b[j] == a[i])
            {
                flag = 1;

                break;
            }
        }

        if (flag != 1)
        {
            cout << b[j] << " ";
        }
    }

    return 0;
}

int interection_app1(int a[], int b[], int n, int m)
{
    set<int> s1;
    // int max = (n < m) ? n : m;
    // int arr[max] = {0};
    // int flag = 0;

    cout << "\nIntersection Of Unsorted Array Approach 1 : \n\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {

                // arr[flag] = a[i];
                // flag++;
                s1.insert(a[i]);
            }
        }
    }

    // for (int z = 0; z < flag; z++)
    // {
    // cout << arr[z] << " ";
    // }

    // cout << s1 << endl;
    for (auto it = s1.begin(); it !=
                               s1.end();
         ++it)
        cout << *it << ' ';
}

//  Approaches for union and intersection using binary search and sorting
int binary_search1(int B[], int n, int K)
{
    int low = 0;
    int high = n;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (B[mid] == K)
        {

            return 1;
        }

        else if (B[mid] > K)
        {

            high = mid - 1;
        }

        else
        {

            low = mid + 1;
        }
    }

    return -1;
}
int intersection_app2(int a[], int b[], int n, int m)
{

    cout << "\nIntersection Of Unsorted Array Approach 2 : \n\n";

    if (n > m)
    {
        swap(a, b);

        swap(n, m);
    }

    sort(a, a + n);

    for (int i = 0; i < m; i++)
    {
        if (binary_search1(a, n, b[i]) != -1)
        {
            cout << b[i] << " ";
        }
    }

    return 0;
}

int union_app2(int a[], int b[], int n, int m)

{

    cout << "\nUnion Of Unsorted Array Approach 2 : \n\n";

    if (n > m)
    {
        swap(a, b);

        swap(n, m);
    }

    sort(a, a + n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    for (int i = 0; i < m; i++)
    {
        if (binary_search1(a, n, b[i]) == -1)
        {
            cout << b[i] << " ";
        }
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

    union_app1(a, b, n, m);
    interection_app1(a, b, n, m);
    intersection_app2(a, b, n, m);
    union_app2(a, b, n, m);

    return 0;
}