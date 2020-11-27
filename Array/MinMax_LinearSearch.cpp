#include <iostream>

using namespace std;

void minmax(int arr[], int size)
{

    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }

        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    cout << "Max : " << max << endl;
    cout << "Min : " << min;
}

int main()
{
    int arr[] = {26, 0, 56, 7, 63, 10, -7};

    int n = sizeof(arr) / sizeof(arr[0]);

    minmax(arr, n);
}