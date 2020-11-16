// simple approch using built in Sort fucntion
// Time Complexity : O(nLogn)

#include <bits/stdc++.h>

using namespace std;

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

    sort(a, a + n);
    cout << "Min Element : " << a[k - 1] << endl;
    cout << "Max Element : " << a[n - k] << endl;

    return 0;
}