#include <iostream>

using namespace std;

int fact(int n)
{

    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial *= i;
    }

    return factorial;
}

int main()
{
    int n, r;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int nCr = fact(i) / (fact(j) * fact(i - j));
            cout << nCr << " ";
        }

        cout << endl;
    }

    return 0;
}