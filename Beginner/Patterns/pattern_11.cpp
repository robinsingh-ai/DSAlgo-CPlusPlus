/*Pattern 11 : Rhombus Pattern

Example:

          * * * * * * *
        * * * * * * *
      * * * * * * *
    * * * * * * *
  * * * * * * *
* * * * * * *

*/
#include <iostream>

using namespace std;

int main()
{
  int n;
  cout << "Enter number of rows";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 0; j <= n; j++)
    /*THis loop will be same for every pattern in which we have to print spaces*/
    {
      if (j < n - i)
      {
        cout << "  ";
      }
    }

    for (int k = 0; k <= n; k++)
    {
      cout << "* ";
    }

    cout << endl;
  }

  return 0;
}