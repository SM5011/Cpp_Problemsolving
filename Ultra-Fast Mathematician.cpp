#include <iostream>
using namespace std;

int main()
{
   string a;
   string b;
   cin >> a;
   cin >> b;
   
   int length = a.length();  // Assuming both strings have the same length
   string t(length, '0');    // Initialize t with length characters, all '0'

   for (int i = 0; i < length; i++) {
       if (a[i] != b[i]) {
           t[i] = '1';
       }
   }

   cout << t;
   return 0;
}
