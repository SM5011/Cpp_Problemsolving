#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin >> n;
   int a[n];
   for (int i = 0; i < n; i++)
   {
      cin >> a[i];
   }
   int s=4;
   sort(a, a + n, greater<int>());
   int c = 0;
   int bin = 0;
   for (int i = 0; i < n; i++)
   {
      bin+=a[i];
      if(bin>=s){
         c++;
         bin=a[i];         
      }
   }
   cout << c << endl;

   return 0;
}