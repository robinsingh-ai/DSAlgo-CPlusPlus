#include <iostream>

using namespace std;

int binarytoDecimal(int n)
{
    int main = 0, temp = 1;

    while (n > 0)
    {
        int y = n % 10;
        main += temp * y;
        temp *= 2;
        n /= 10;
    }

    return main;
}

int main()
{

    int n;
    cin >> n;

    cout << binarytoDecimal(n) << endl;

    return 0;
}