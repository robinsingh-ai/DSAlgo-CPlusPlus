// Min Heap To find kth min element
#include <bits/stdc++.h>

using namespace std;

int minElement(int a[], int n, int k)
{

    priority_queue<int, vector<int>, greater<int>> pq;

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
        // cout << pq.top();
        pq.pop();
    }

    return ans;
}

int maxElement(int a[], int n, int k)
{

    priority_queue<int, vector<int>, greater<int>> pq2;

    for (int i = k; i < n; i++)
    {
        if (a[i] > pq2.top())
        {
            pq2.pop();
            pq2.push(a[i]);
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

    cout << "Min Element : " << minElement(a, n, k) << endl;
    //  << "Max Element : " << maxElement(a, n, k) << endl;
    // minElement(a, n, k);
    // maxElement(a, n, k);

    return 0;
}
