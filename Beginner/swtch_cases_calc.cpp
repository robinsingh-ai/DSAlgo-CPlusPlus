#include <iostream>

using namespace std;

int main()
{
    float a, b;
    cout << "Enter Two numbers";
    cin >> a >> b;

    char ch;
    cout << "Press an operator";
    cin >> ch;

    switch (ch)
    {
    case '+':
        cout << "sum of two numbers is: " << a + b;
        break;
    case '-':
        cout << "subtraction of two numbers is:  " << a - b;
        break;
    case '*':
        cout << "Multiplication of two numbers is " << a * b;
        break;
    case '/':
        cout << "division of two numbers is " << a / b;
        break;

    default:
        cout << "Enter Correct Operator";
        break;
    }

    return 0;
}