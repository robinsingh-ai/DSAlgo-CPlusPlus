#include <iostream>

using namespace std;

bool Primes(int n)
{

    int j;
    for (j = 2; j < n; j++)
    {
        if (n % j == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {

        if (Primes(i))
        {
            cout << i << endl;
        }
    }

    return 0;
}