// Min Heap to find kth max element


#include <bits/stdc++.h>

using namespace std;

int maxElement(int a[], int n, int k)
{

    priority_queue<int, vector<int>, greater<int>> pq2;

    for (int j = 0; j < n; j++)
    {
        pq2.push(a[j]);

        if (pq2.size() > k)
        {
            pq2.pop();
        }
    }

    int ans = pq2.top();
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
