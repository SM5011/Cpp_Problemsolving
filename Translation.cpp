#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin >> s;
    cin >> t;

    string t1 = string(s.rbegin(), s.rend());

    if (t == t1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
} 