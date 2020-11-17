// // Sorting an array which consists of 0,1,2 without using any sorting algorithm
// // Time Complexity : O(N)

#include <bits/stdc++.h>
using namespace std;

void sort_012(int a[], int n)
{
    int lo = 0;
    int hi = n - 1;
    int mid = 0;

    while (mid <= hi)
    {
        switch (a[mid])
        {

        case 0:
            swap(a[lo++], a[mid++]);
            break;

        case 1:
            mid++;
            break;

        case 2:
            swap(a[mid], a[hi--]);
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {

        cout << a[i] << " ";
    }
}

int main()
{

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort_012(arr, n);

    return 0;
}
