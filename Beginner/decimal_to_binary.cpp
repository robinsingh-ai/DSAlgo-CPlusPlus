#include <iostream>

using namespace std;

int decimaltobinary(int n)
{
    int temp = 1, main = 0;
    while (temp <= n)
    {
        temp *= 2;
    }
    temp /= 2;

    while (temp > 0)
    {
        int lastdigit = n / temp;
        n -= lastdigit * temp;
        temp /= 2;
        main = main * 10 + lastdigit;
    }

    return main;
}

int main()
{

    int n;
    cin >> n;

    cout << decimaltobinary(n) << endl;

    return 0;
}