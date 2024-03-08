#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int a, b, r = 0, k = 0, m = 0;
    while (t--)
    {
        cin >> a >> b;

        k = r - a;
        r = k + b;
        if (r > m)
        {
            m = r;
        }
    }
    cout << m << endl;
}