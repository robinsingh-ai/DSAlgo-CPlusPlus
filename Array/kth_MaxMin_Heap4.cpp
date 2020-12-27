// Max Heap To find kth min element

#include <bits/stdc++.h>

using namespace std;

int minElement(int a[], int n, int k)
{

    priority_queue<int, vector<int>, less<int>> pq;

    for (int j = 0; j < n; j++)
    {
        pq.push(a[j]);

        if (pq.size() > k)
        {
            pq.pop();
        }
    }

    int ans = pq.top();
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

    cout << "Min Element : " << minElement(a, n, k) << endl;

    return 0;
}
