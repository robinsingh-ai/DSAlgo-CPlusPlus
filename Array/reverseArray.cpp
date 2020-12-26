#include <bits/stdc++.h>

using namespace std;

void reverseArray(int arr[], int start, int end)
{
    int n = end;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    cout << "Reverse Of array : " << endl;

    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 89, 12, 36};

    int n = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, 0, n - 1);

    return 0;
}