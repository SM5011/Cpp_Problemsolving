#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string a;
    cin >> a;
    int cur, ans = 0, pre = 1;
    for (int i = 0; i < 4; i++)
    {
        cur = a[i] - '0';
        if (cur == 0)
        {
            cur += 10;
        }
        ans += (abs(cur - pre) + 1);
        pre = cur;
    }
    cout << ans<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}