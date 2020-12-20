#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter your Number";
    cin >> n;
    int rev = 0, r;
    while (n > 0)
    {
        r = n % 10;
        rev = r + rev * 10;
        n /= 10;
    }

    cout << "Reverse of given Number is : " << rev;

    return 0;
}