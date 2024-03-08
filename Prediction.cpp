#include <iostream>
using namespace std;

int main()
{
   int n, m;

   int j = 0;
   cin >> n >> m;
   if (m == 3 || m == 5)
   {
      cout << "YES" << endl;
   }
   else
   {
      if (m % 2 == 0 || m % 3 == 0 || m % 5 == 0)
      {
         cout << "NO" << endl;
         return 0;
      }
      for (int i = n + 1; i <= m; i++)
      {
         if (i % 2 != 0 || i % 3 != 0 || i % 5 != 0)
         {

            j++;
         }
      }
      if (j == 1)
      {
         cout << "YES" << endl;
      }
      else
      {
         cout << "NO" << endl;
      }
   }
}