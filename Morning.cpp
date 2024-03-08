#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        int c = '0';
        char temp = '1';
        for (int i = '0'; i < 4; i++)
        {

            if (a[i] == temp)
            {
                c++;
            }
            else if (a[i] > temp && a[i] != '0' && temp != '0')
            {
                c += (a[i] - temp);
                c++;
            }
            else if (temp > a[i] && a[i] != '0' && temp != '0')
            {
                c += (temp - a[i]);
                c++;
            }
            else if (a[i] == '0')
            {
                c += (temp - '0') + 10;
                c++;
            }
            else if (temp == '0')
            {
                c += (temp - '0') + 10;
                c++;
            }

            temp = a[i];
        }
        cout << c << endl;
    }
}