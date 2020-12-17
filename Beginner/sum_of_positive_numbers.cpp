#include <iostream>

using namespace std;

int main()
{
    int n;
    int sum = 0;

    cout << "enter a positive number" << endl;
    cin >> n;

    while (n > 0)
    {
        sum = sum + n;

        cout << "enter a positive number" << endl;
        cin >> n;
    }

    cout << sum << endl;

    return 0;
}