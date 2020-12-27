// Max Heap To find kth max element

#include <bits/stdc++.h>

using namespace std;

int maxElement(int a[], int n, int k)
{

    priority_queue<int, vector<int>, less<int>> pq;

    for (int j = 0; j < n; j++)
    {
        pq.push(a[j]);
    }

    int ans, iterator = 1;
    while (!pq.empty())
    {
        if (iterator == k)
        {
            ans = pq.top();
            break;
        }
        iterator++;

        pq.pop();
    }

    return ans;
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

    int k;
    cin >> k;

    cout << "Max Element : " << maxElement(a, n, k) << endl;

    return 0;
}
