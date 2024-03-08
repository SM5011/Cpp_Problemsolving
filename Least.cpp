#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;

void read()
{
    vec.clear();
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        vec.push_back(a);
    }
}

void solve()
{
    int cZ = 0, cN = 0;
    
    for (int a : vec)
    {
        if (a == 0)
        {
            cZ++;
        }
        if (a < 0)
        {
            cN++;
        }
    }

    if (cZ > 0 || cN % 2 != 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 1 << endl;
        cout << 1 << " " << 0 << endl; 
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        read();
        solve();
    }

    return 0;
}
