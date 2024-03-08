#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    // int op=0;
    int cz = count(s.begin(), s.end(), '0');
    int co = count(s.begin(), s.end(), '1');
    if (co == n)
    {
        cout << "NO" << endl;
        return;
    }
    for (int i = 1; i < n; i += 2)
    {
        if (s[i] == s[i - 1])
        {
            co++;
        }
        else
        {
            cz++;
        }
    }
    if (cz > co)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
}