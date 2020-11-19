// Move all negative element to one side of array

// Approach 1 :
// Implementing using partion method

// Time Complexity : O(n)

#include <bits/stdc++.h>

using namespace std;

void rearrange(int arr[], int size)
{

    int i = -1;
    int pivot = 0;
    for (int j = 0; j < size; j++)
    {
        if (arr[j] < pivot)
        {
            swap(arr[++i], arr[j]);
        }
    }

    for (int z = 0; z < size; z++)
    {
        cout << arr[z] << " ";
    }
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

    rearrange(a, n);
}