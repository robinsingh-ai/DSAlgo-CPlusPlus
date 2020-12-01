#include <iostream>

using namespace std;

int octaltoDecimal(int n)
{

    int main = 0, temp = 1;

    while (n > 0)
    {
        int y = n % 10;
        main += temp * y;
        temp *= 8;
        n /= 10;
    }

    return main;
}

int main()
{

    int n;
    cin >> n;

    cout << octaltoDecimal(n) << endl;

    return 0;
}