#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter your number" << endl;
    cin >> n;

    int sum = 0, orignal = n;

    while (n > 0)
    {
        int r = n % 10;
        sum += r * r * r;

        n = n / 10;
    }

    if (sum == orignal)
    {
        cout << "Number is armstrong number";
    }
    else
    {
        cout << "number is not an armstrong number";
    }

    return 0;
}