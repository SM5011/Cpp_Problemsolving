#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b) { return (a * b) / gcd(a, b); }
void solve()
{
    int a, b;
    cin >> a >> b;
    int x;
    int ans = lcm(a, b);
    if (ans != b)
        cout << ans << endl;
    else
        cout << b * (b / a) << endl;
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