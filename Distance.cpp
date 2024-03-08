#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> vec;

inline void read()
{
    cin >> n;
    vec.clear();
    for (int i = 0; i < n * 2; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
}

inline void solve()
{
    sort(begin(vec),end(vec));
    vector<pair<int, int>> pr;
    for (int i = 0; i < n; i++)
    {
        pr.push_back(make_pair(vec[i], vec[i + n]));
    }

    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        ans += abs(pr[i].first - pr[i - 1].first) + abs(pr[i].second - pr[i - 1].second);
    }

    cout << ans << endl;

    for (int i = 0; i < n; i++)
    {
        cout << pr[i].first << " " << pr[i].second << endl;
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
