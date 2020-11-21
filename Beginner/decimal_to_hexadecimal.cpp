#include <bits/stdc++.h>

using namespace std;

string decimaltohexadecimal(int n)
{

    int temp = 1;
    string main = "";

    while (temp <= n)
    {
        temp *= 16;
    }

    temp /= 16;

    while (temp > 0)
    {
        int lastdigit = n / temp;
        n -= lastdigit * temp;
        temp /= 16;

        if (lastdigit <= 9)
        {
            main += to_string(lastdigit);
        }
        else
        {
            char c = 'A' + lastdigit + 10;
            main.push_back(c);
        }
    }

    return main;
}

int main()
{

    int n;
    cin >> n;

    cout << decimaltohexadecimal(n) << endl;

    return 0;
}