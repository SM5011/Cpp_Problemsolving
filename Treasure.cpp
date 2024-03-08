#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;

        if (y < x)
        {
            cout << x << endl;
        }
        else
        {
            int d = y - x;
            if (d <= k)
            {
                cout << y << endl;
            }
            else
            {
                x += k;
                int p = y - x;
                int o = x + 2 * p;
                cout << o << endl;
            }
        }
    }
}