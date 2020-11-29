#include <iostream>

using namespace std;

int decimaltooctal(int n)
{
    int temp = 1, main = 0;
    while (temp <= n)
    {
        temp *= 8;
    }
    temp /= 8;

    while (temp > 0)
    {
        int lastdigit = n / temp;
        n -= lastdigit * temp;
        temp /= 8;
        main = main * 10 + lastdigit;
    }

    return main;
}

int main()
{

    int n;
    cin >> n;

    cout << decimaltooctal(n) << endl;

    return 0;
}