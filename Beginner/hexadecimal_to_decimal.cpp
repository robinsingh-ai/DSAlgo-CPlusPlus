#include <bits/stdc++.h>

using namespace std;

int hexadecimaltodecimal(string n)
{
    int main = 0, temp = 1;
    int inputsize = n.size();

    for (int i = inputsize - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            main += temp * (n[i] - '0');
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            main += temp * (n[i] - 'A' + 10);
        }
        temp *= 16;
    }
    return main;
}

int main()
{

    string n;
    cin >> n;

    cout << hexadecimaltodecimal(n) << endl;

    return 0;
}